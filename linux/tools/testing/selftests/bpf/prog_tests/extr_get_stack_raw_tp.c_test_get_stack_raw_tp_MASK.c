
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_1; int member_0; } ;
struct perf_buffer_opts {int sample_cb; } ;
struct perf_buffer {int dummy; } ;
struct bpf_program {int dummy; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;
typedef struct perf_buffer bpf_link ;
typedef int cpu_set_t ;
typedef int cpu_set ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,char*,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_buffer*) ;
 int FUNC_4 (struct perf_buffer*) ;
 int VAR_1 ;
 int FUNC_5 (struct perf_buffer*) ;
 int FUNC_6 (struct perf_buffer*) ;
 int FUNC_7 (struct bpf_map*) ;
 int FUNC_8 (struct bpf_object*) ;
 struct bpf_map* FUNC_9 (struct bpf_object*,char*) ;
 struct bpf_program* FUNC_10 (struct bpf_object*,char const*) ;
 int FUNC_11 (char const*,int ,struct bpf_object**,int*) ;
 struct perf_buffer* FUNC_12 (struct bpf_program*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 () ;
 int FUNC_14 (struct timespec*,int *) ;
 int FUNC_15 (struct perf_buffer*) ;
 struct perf_buffer* FUNC_16 (int ,int,struct perf_buffer_opts*) ;
 int FUNC_17 (struct perf_buffer*,int) ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int,int *) ;

void FUNC_20(void)
{
 const char *VAR_4 = "./test_get_stack_rawtp.o";
 const char *VAR_5 = "raw_tracepoint/sys_enter";
 int VAR_6, VAR_7, VAR_8, VAR_9 = VAR_1;
 struct perf_buffer_opts VAR_10 = {};
 struct perf_buffer *VAR_11 = ((void*)0);
 struct bpf_link *VAR_12 = ((void*)0);
 struct timespec VAR_13 = {0, 10};
 struct bpf_program *VAR_14;
 struct bpf_object *VAR_15;
 struct bpf_map *VAR_16;
 cpu_set_t VAR_17;

 VAR_7 = FUNC_11(VAR_4, VAR_0, &VAR_15, &VAR_8);
 if (FUNC_0(VAR_7, "prog_load raw tp", "err %d errno %d\n", VAR_7, VAR_2))
  return;

 VAR_14 = FUNC_10(VAR_15, VAR_5);
 if (FUNC_0(!VAR_14, "find_probe", "prog '%s' not found\n", VAR_5))
  goto close_prog;

 VAR_16 = FUNC_9(VAR_15, "perfmap");
 if (FUNC_0(!VAR_16, "bpf_find_map", "not found\n"))
  goto close_prog;

 VAR_7 = FUNC_13();
 if (FUNC_0(VAR_7 < 0, "load_kallsyms", "err %d errno %d\n", VAR_7, VAR_2))
  goto close_prog;

 FUNC_2(&VAR_17);
 FUNC_1(0, &VAR_17);
 VAR_7 = FUNC_19(FUNC_18(), sizeof(VAR_17), &VAR_17);
 if (FUNC_0(VAR_7, "set_affinity", "err %d, errno %d\n", VAR_7, VAR_2))
  goto close_prog;

 VAR_12 = FUNC_12(VAR_14, "sys_enter");
 if (FUNC_0(FUNC_3(VAR_12), "attach_raw_tp", "err %ld\n", FUNC_5(VAR_12)))
  goto close_prog;

 VAR_10.sample_cb = VAR_3;
 VAR_11 = FUNC_16(FUNC_7(VAR_16), 8, &VAR_10);
 if (FUNC_0(FUNC_3(VAR_11), "perf_buf__new", "err %ld\n", FUNC_5(VAR_11)))
  goto close_prog;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_14(&VAR_13, ((void*)0));

 while (VAR_9 > 0) {
  VAR_7 = FUNC_17(VAR_11, 100);
  if (VAR_7 < 0 && FUNC_0(VAR_7 < 0, "pb__poll", "err %d\n", VAR_7))
   goto close_prog;
  VAR_9 -= VAR_7;
 }

close_prog:
 if (!FUNC_4(VAR_12))
  FUNC_6(VAR_12);
 if (!FUNC_4(VAR_11))
  FUNC_15(VAR_11);
 FUNC_8(VAR_15);
}
