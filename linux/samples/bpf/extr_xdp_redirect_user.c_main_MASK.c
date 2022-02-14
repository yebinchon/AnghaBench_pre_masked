
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
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
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int*,int*,int ) ;
 int FUNC_2 (int,struct bpf_prog_info*,int*) ;
 void* FUNC_3 (struct bpf_object*,char*) ;
 scalar_t__ FUNC_4 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_5 (struct bpf_program*) ;
 struct bpf_program* FUNC_6 (struct bpf_program*,struct bpf_object*) ;
 scalar_t__ FUNC_7 (int,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int,char**,char const*) ;
 int FUNC_9 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct bpf_prog_info*,int ,int) ;
 int VAR_14 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (char*,...) ;
 int VAR_15 ;
 void* VAR_16 ;
 scalar_t__ FUNC_14 (int ,struct rlimit*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (char*,int,char*,char*) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (char*,int *,int ) ;
 int FUNC_19 (int ) ;
 int VAR_17 ;

int FUNC_20(int VAR_18, char **VAR_19)
{
 struct rlimit VAR_20 = {VAR_2, VAR_2};
 struct bpf_prog_load_attr VAR_21 = {
  .prog_type = VAR_0,
 };
 struct bpf_program *VAR_22, *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 struct bpf_prog_info VAR_27 = {};
 __u32 VAR_28 = sizeof(VAR_27);
 const char *VAR_29 = "FSN";
 struct bpf_object *VAR_30;
 char VAR_31[256];
 int VAR_32;
 int VAR_33, VAR_34 = 0;

 while ((VAR_26 = FUNC_8(VAR_18, VAR_19, VAR_29)) != -1) {
  switch (VAR_26) {
  case 'S':
   VAR_17 |= VAR_6;
   break;
  case 'N':
   VAR_17 |= VAR_5;
   break;
  case 'F':
   VAR_17 &= ~VAR_7;
   break;
  default:
   FUNC_19(FUNC_0(VAR_19[0]));
   return 1;
  }
 }

 if (VAR_14 == VAR_18) {
  FUNC_13("usage: %s <IFNAME|IFINDEX>_IN <IFNAME|IFINDEX>_OUT\n", VAR_19[0]);
  return 1;
 }

 if (FUNC_14(VAR_1, &VAR_20)) {
  FUNC_11("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 VAR_10 = FUNC_9(VAR_19[VAR_14]);
 if (!VAR_10)
  VAR_10 = FUNC_18(VAR_19[VAR_14], ((void*)0), 0);

 VAR_11 = FUNC_9(VAR_19[VAR_14 + 1]);
 if (!VAR_11)
  VAR_11 = FUNC_18(VAR_19[VAR_14 + 1], ((void*)0), 0);

 FUNC_13("input: %d output: %d\n", VAR_10, VAR_11);

 FUNC_16(VAR_31, sizeof(VAR_31), "%s_kern.o", VAR_19[0]);
 VAR_21.file = VAR_31;

 if (FUNC_4(&VAR_21, &VAR_30, &VAR_24))
  return 1;

 VAR_22 = FUNC_6(((void*)0), VAR_30);
 VAR_23 = FUNC_6(VAR_22, VAR_30);
 if (!VAR_22 || !VAR_23) {
  FUNC_13("finding a prog in obj file failed\n");
  return 1;
 }



 VAR_32 = FUNC_5(VAR_23);
 if (VAR_24 < 0 || VAR_32 < 0) {
  FUNC_13("bpf_prog_load_xattr: %s\n", FUNC_17(VAR_9));
  return 1;
 }

 VAR_25 = FUNC_3(VAR_30, "tx_port");
 VAR_16 = FUNC_3(VAR_30, "rxcnt");
 if (VAR_25 < 0 || VAR_16 < 0) {
  FUNC_13("bpf_object__find_map_fd_by_name failed\n");
  return 1;
 }

 if (FUNC_7(VAR_10, VAR_24, VAR_17) < 0) {
  FUNC_13("ERROR: link set xdp fd failed on %d\n", VAR_10);
  return 1;
 }

 VAR_33 = FUNC_2(VAR_24, &VAR_27, &VAR_28);
 if (VAR_33) {
  FUNC_13("can't get prog info - %s\n", FUNC_17(VAR_9));
  return VAR_33;
 }
 VAR_15 = VAR_27.id;


 if (FUNC_7(VAR_11, VAR_32,
       (VAR_17 | VAR_7)) < 0) {
  FUNC_13("WARN: link set xdp fd failed on %d\n", VAR_11);
  VAR_12 = 0;
 }

 FUNC_10(&VAR_27, 0, sizeof(VAR_27));
 VAR_33 = FUNC_2(VAR_32, &VAR_27, &VAR_28);
 if (VAR_33) {
  FUNC_13("can't get prog info - %s\n", FUNC_17(VAR_9));
  return VAR_33;
 }
 VAR_8 = VAR_27.id;

 FUNC_15(VAR_3, VAR_13);
 FUNC_15(VAR_4, VAR_13);


 VAR_33 = FUNC_1(VAR_25, &VAR_34, &VAR_11, 0);
 if (VAR_33) {
  FUNC_11("bpf_update_elem");
  goto out;
 }

 FUNC_12(2, VAR_11);

out:
 return 0;
}
