
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
struct bpf_prog_load_attr {char* file; int prog_type; } ;
struct bpf_prog_info {int id; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;
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
 int FUNC_1 (struct bpf_map*) ;
 struct bpf_map* FUNC_2 (int *,struct bpf_object*) ;
 int FUNC_3 (int,struct bpf_prog_info*,int*) ;
 scalar_t__ FUNC_4 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 scalar_t__ FUNC_5 (int ,int,int ) ;
 int VAR_8 ;
 int FUNC_6 (int,char**,char const*) ;
 int FUNC_7 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (char*,...) ;
 int VAR_12 ;
 scalar_t__ FUNC_11 (int ,struct rlimit*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,int,char*,char*) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_13 ;

int FUNC_16(int VAR_14, char **VAR_15)
{
 struct rlimit VAR_16 = {VAR_2, VAR_2};
 struct bpf_prog_load_attr VAR_17 = {
  .prog_type = VAR_0,
 };
 struct bpf_prog_info VAR_18 = {};
 __u32 VAR_19 = sizeof(VAR_18);
 const char *VAR_20 = "FSN";
 int VAR_21, VAR_22, VAR_23;
 struct bpf_object *VAR_24;
 struct bpf_map *VAR_25;
 char VAR_26[256];
 int VAR_27;

 while ((VAR_23 = FUNC_6(VAR_14, VAR_15, VAR_20)) != -1) {
  switch (VAR_23) {
  case 'S':
   VAR_13 |= VAR_6;
   break;
  case 'N':
   VAR_13 |= VAR_5;
   break;
  case 'F':
   VAR_13 &= ~VAR_7;
   break;
  default:
   FUNC_15(FUNC_0(VAR_15[0]));
   return 1;
  }
 }

 if (VAR_11 == VAR_14) {
  FUNC_15(FUNC_0(VAR_15[0]));
  return 1;
 }

 if (FUNC_11(VAR_1, &VAR_16)) {
  FUNC_8("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 VAR_9 = FUNC_7(VAR_15[VAR_11]);
 if (!VAR_9) {
  FUNC_8("if_nametoindex");
  return 1;
 }

 FUNC_13(VAR_26, sizeof(VAR_26), "%s_kern.o", VAR_15[0]);
 VAR_17.file = VAR_26;

 if (FUNC_4(&VAR_17, &VAR_24, &VAR_21))
  return 1;

 VAR_25 = FUNC_2(((void*)0), VAR_24);
 if (!VAR_25) {
  FUNC_10("finding a map in obj file failed\n");
  return 1;
 }
 VAR_22 = FUNC_1(VAR_25);

 if (!VAR_21) {
  FUNC_10("load_bpf_file: %s\n", FUNC_14(VAR_8));
  return 1;
 }

 FUNC_12(VAR_3, VAR_10);
 FUNC_12(VAR_4, VAR_10);

 if (FUNC_5(VAR_9, VAR_21, VAR_13) < 0) {
  FUNC_10("link set xdp fd failed\n");
  return 1;
 }

 VAR_27 = FUNC_3(VAR_21, &VAR_18, &VAR_19);
 if (VAR_27) {
  FUNC_10("can't get prog info - %s\n", FUNC_14(VAR_8));
  return VAR_27;
 }
 VAR_12 = VAR_18.id;

 FUNC_9(VAR_22, 2);

 return 0;
}
