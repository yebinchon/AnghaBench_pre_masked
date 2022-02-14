
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int * out; int in; } ;
struct core_reloc_test_case {int input_len; int output_len; int * output; int * input; scalar_t__ fails; int btf_src_file; int bpf_obj_file; int case_name; } ;
struct bpf_program {int dummy; } ;
struct bpf_object_load_attr {int target_btf_path; scalar_t__ log_level; struct bpf_object* obj; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;
typedef struct bpf_object bpf_link ;
typedef int data ;


 int FUNC_0 (struct core_reloc_test_case*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,char*,char*,...) ;
 int FUNC_2 (struct bpf_object*) ;
 int FUNC_3 (struct bpf_object*) ;
 int FUNC_4 (struct bpf_object*) ;
 int FUNC_5 (struct bpf_object*) ;
 int FUNC_6 (struct bpf_map*) ;
 int FUNC_7 (int ,int const*,struct data*) ;
 int FUNC_8 (int ,int const*,struct data*,int ) ;
 int FUNC_9 (struct bpf_object*) ;
 struct bpf_map* FUNC_10 (struct bpf_object*,char*) ;
 struct bpf_program* FUNC_11 (struct bpf_object*,char const*) ;
 int FUNC_12 (struct bpf_object_load_attr*) ;
 struct bpf_object* FUNC_13 (int ) ;
 struct bpf_object* FUNC_14 (struct bpf_program*,char*) ;
 int FUNC_15 (struct bpf_program*,int ) ;
 scalar_t__ FUNC_16 (int *,int *,int) ;
 int FUNC_17 (int ,int *,int) ;
 int FUNC_18 (struct data*,int ,int) ;
 int FUNC_19 (char*,int,int ,...) ;
 int FUNC_20 (int ) ;
 struct core_reloc_test_case* VAR_1 ;
 int FUNC_21 (int) ;

void FUNC_22(void)
{
 const char *VAR_2 = "raw_tracepoint/sys_enter";
 struct bpf_object_load_attr VAR_3 = {};
 struct core_reloc_test_case *VAR_4;
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8;
 struct bpf_link *VAR_9 = ((void*)0);
 struct bpf_map *VAR_10;
 struct bpf_program *VAR_11;
 struct bpf_object *VAR_12;
 const int VAR_13 = 0;
 struct data VAR_14;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  VAR_4 = &VAR_1[VAR_7];

  if (!FUNC_20(VAR_4->case_name))
   continue;

  VAR_12 = FUNC_13(VAR_4->bpf_obj_file);
  if (FUNC_1(FUNC_3(VAR_12), "obj_open",
     "failed to open '%s': %ld\n",
     VAR_4->bpf_obj_file, FUNC_4(VAR_12)))
   continue;

  VAR_11 = FUNC_11(VAR_12, VAR_2);
  if (FUNC_1(!VAR_11, "find_probe",
     "prog '%s' not found\n", VAR_2))
   goto cleanup;
  FUNC_15(VAR_11, VAR_0);

  VAR_3.obj = VAR_12;
  VAR_3.log_level = 0;
  VAR_3.target_btf_path = VAR_4->btf_src_file;
  VAR_5 = FUNC_12(&VAR_3);
  if (VAR_4->fails) {
   FUNC_1(!VAR_5, "obj_load_fail",
         "should fail to load prog '%s'\n", VAR_2);
   goto cleanup;
  } else {
   if (FUNC_1(VAR_5, "obj_load",
      "failed to load prog '%s': %d\n",
      VAR_2, VAR_5))
    goto cleanup;
  }

  VAR_9 = FUNC_14(VAR_11, "sys_enter");
  if (FUNC_1(FUNC_2(VAR_9), "attach_raw_tp", "err %ld\n",
     FUNC_4(VAR_9)))
   goto cleanup;

  VAR_10 = FUNC_10(VAR_12, "test_cor.bss");
  if (FUNC_1(!VAR_10, "find_data_map", "data map not found\n"))
   goto cleanup;

  FUNC_18(&VAR_14, 0, sizeof(VAR_14));
  FUNC_17(VAR_14.in, VAR_4->input, VAR_4->input_len);

  VAR_5 = FUNC_8(FUNC_6(VAR_10),
       &VAR_13, &VAR_14, 0);
  if (FUNC_1(VAR_5, "update_data_map",
     "failed to update .data map: %d\n", VAR_5))
   goto cleanup;


  FUNC_21(1);

  VAR_5 = FUNC_7(FUNC_6(VAR_10), &VAR_13, &VAR_14);
  if (FUNC_1(VAR_5, "get_result",
     "failed to get output data: %d\n", VAR_5))
   goto cleanup;

  VAR_8 = FUNC_16(VAR_14.out, VAR_4->output,
          VAR_4->output_len) == 0;
  if (FUNC_1(!VAR_8, "check_result",
     "input/output data don't match\n")) {
   int VAR_15;

   for (VAR_15 = 0; VAR_15 < VAR_4->input_len; VAR_15++) {
    FUNC_19("input byte #%d: 0x%02hhx\n",
           VAR_15, VAR_4->input[VAR_15]);
   }
   for (VAR_15 = 0; VAR_15 < VAR_4->output_len; VAR_15++) {
    FUNC_19("output byte #%d: EXP 0x%02hhx GOT 0x%02hhx\n",
           VAR_15, VAR_4->output[VAR_15], VAR_14.out[VAR_15]);
   }
   goto cleanup;
  }

cleanup:
  if (!FUNC_3(VAR_9)) {
   FUNC_5(VAR_9);
   VAR_9 = ((void*)0);
  }
  FUNC_9(VAR_12);
 }
}
