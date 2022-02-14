
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_0; int member_1; } ;
struct bpf_program {int dummy; } ;
struct bpf_prog_load_attr {char* file; int prog_type; } ;
struct bpf_prog_info {int id; } ;
struct bpf_object {int dummy; } ;
typedef int info ;
typedef int filename ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int,struct bpf_prog_info*,int*) ;
 struct bpf_program* FUNC_2 (struct bpf_object*,char*) ;
 scalar_t__ FUNC_3 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_4 (struct bpf_program*) ;
 scalar_t__ FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,int,int,int) ;
 int VAR_13 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int,char**,char*,int ,int*) ;
 int FUNC_9 (char*) ;
 int VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_10 (struct bpf_object*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 () ;
 char* VAR_19 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int VAR_20 ;
 scalar_t__ FUNC_14 (int ,struct rlimit*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (char*,int,char*,char*) ;
 int FUNC_17 (int,int,char*,int) ;
 int VAR_21 ;
 char* FUNC_18 (int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,char*,int ) ;
 int FUNC_21 (char*,int *,int ) ;
 int FUNC_22 (char**,struct bpf_object*) ;
 int VAR_22 ;

int FUNC_23(int VAR_23, char **VAR_24)
{
 struct rlimit VAR_25 = {10 * 1024 * 1024, VAR_8};
 char *VAR_26 = "xdp_cpu_map5_lb_hash_ip_pairs";
 struct bpf_prog_load_attr VAR_27 = {
  .prog_type = VAR_0,
 };
 struct bpf_prog_info VAR_28 = {};
 __u32 VAR_29 = sizeof(VAR_28);
 bool VAR_30 = 1;
 bool VAR_31 = 0;
 struct bpf_program *VAR_32;
 struct bpf_object *VAR_33;
 char VAR_34[256];
 int VAR_35 = 0;
 int VAR_36 = 0;
 int VAR_37 = 2;
 int VAR_38 = -1;
 int VAR_39, VAR_40;
 int VAR_41;
 __u32 VAR_42;







 VAR_42 = 128+64;

 FUNC_16(VAR_34, sizeof(VAR_34), "%s_kern.o", VAR_24[0]);
 VAR_27.file = VAR_34;

 if (FUNC_14(VAR_7, &VAR_25)) {
  FUNC_12("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 if (FUNC_3(&VAR_27, &VAR_33, &VAR_41))
  return VAR_1;

 if (VAR_41 < 0) {
  FUNC_7(VAR_21, "ERR: bpf_prog_load_xattr: %s\n",
   FUNC_18(VAR_13));
  return VAR_1;
 }
 if (FUNC_10(VAR_33) < 0) {
  FUNC_7(VAR_21, "bpf_object__find_map_fd_by_name failed\n");
  return VAR_1;
 }
 FUNC_11();


 while ((VAR_39 = FUNC_8(VAR_23, VAR_24, "hSd:s:p:q:c:xzF",
      VAR_18, &VAR_36)) != -1) {
  switch (VAR_39) {
  case 'd':
   if (FUNC_19(VAR_19) >= VAR_5) {
    FUNC_7(VAR_21, "ERR: --dev name too long\n");
    goto error;
   }
   VAR_15 = (char *)&VAR_16;
   FUNC_20(VAR_15, VAR_19, VAR_5);
   VAR_14 = FUNC_9(VAR_15);
   if (VAR_14 == 0) {
    FUNC_7(VAR_21,
     "ERR: --dev name unknown err(%d):%s\n",
     VAR_13, FUNC_18(VAR_13));
    goto error;
   }
   break;
  case 's':
   VAR_37 = FUNC_0(VAR_19);
   break;
  case 'S':
   VAR_22 |= VAR_11;
   break;
  case 'x':
   VAR_31 = 1;
   break;
  case 'z':
   VAR_30 = 0;
   break;
  case 'p':

   VAR_26 = VAR_19;
   break;
  case 'c':

   VAR_38 = FUNC_21(VAR_19, ((void*)0), 0);
   if (VAR_38 >= VAR_6) {
    FUNC_7(VAR_21,
    "--cpu nr too large for cpumap err(%d):%s\n",
     VAR_13, FUNC_18(VAR_13));
    goto error;
   }
   FUNC_6(VAR_38, VAR_42, VAR_35, 1);
   VAR_35++;
   break;
  case 'q':
   VAR_42 = FUNC_0(VAR_19);
   break;
  case 'F':
   VAR_22 &= ~VAR_12;
   break;
  case 'h':
  error:
  default:
   FUNC_22(VAR_24, VAR_33);
   return VAR_2;
  }
 }

 if (VAR_14 == -1) {
  FUNC_7(VAR_21, "ERR: required option --dev missing\n");
  FUNC_22(VAR_24, VAR_33);
  return VAR_2;
 }

 if (VAR_38 == -1) {
  FUNC_7(VAR_21, "ERR: required option --cpu missing\n");
  FUNC_7(VAR_21, " Specify multiple --cpu option to add more\n");
  FUNC_22(VAR_24, VAR_33);
  return VAR_2;
 }


 FUNC_15(VAR_9, VAR_17);
 FUNC_15(VAR_10, VAR_17);

 VAR_32 = FUNC_2(VAR_33, VAR_26);
 if (!VAR_32) {
  FUNC_7(VAR_21, "bpf_object__find_program_by_title failed\n");
  return VAR_1;
 }

 VAR_41 = FUNC_4(VAR_32);
 if (VAR_41 < 0) {
  FUNC_7(VAR_21, "bpf_program__fd failed\n");
  return VAR_1;
 }

 if (FUNC_5(VAR_14, VAR_41, VAR_22) < 0) {
  FUNC_7(VAR_21, "link set xdp fd failed\n");
  return VAR_3;
 }

 VAR_40 = FUNC_1(VAR_41, &VAR_28, &VAR_29);
 if (VAR_40) {
  FUNC_13("can't get prog info - %s\n", FUNC_18(VAR_13));
  return VAR_40;
 }
 VAR_20 = VAR_28.id;

 FUNC_17(VAR_37, VAR_30, VAR_26, VAR_31);
 return VAR_4;
}
