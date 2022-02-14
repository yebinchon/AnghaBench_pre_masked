
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
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_map*) ;
 struct bpf_map* FUNC_2 (int *,struct bpf_object*) ;
 int FUNC_3 (int,struct bpf_prog_info*,int*) ;
 scalar_t__ FUNC_4 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 scalar_t__ FUNC_5 (void*,int,int ) ;
 int VAR_8 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int,char**,char const*) ;
 void* FUNC_8 (int ) ;
 void* VAR_9 ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,unsigned int) ;
 int FUNC_12 (char*,...) ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (int ,struct rlimit*) ;
 int FUNC_14 (int ,int (*) (int )) ;
 int FUNC_15 (char*,int,char*,char*) ;
 int VAR_12 ;
 char* FUNC_16 (int ) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char*) ;
 int VAR_13 ;

int FUNC_19(int VAR_14, char **VAR_15)
{
 struct rlimit VAR_16 = {VAR_2, VAR_2};
 struct bpf_prog_load_attr VAR_17 = {
  .prog_type = VAR_0,
 };
 unsigned char VAR_18[256] = {};
 const char *VAR_19 = "i:T:SNFh";
 struct bpf_prog_info VAR_20 = {};
 __u32 VAR_21 = sizeof(VAR_20);
 unsigned int VAR_22 = 0;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 struct bpf_object *VAR_27;
 struct bpf_map *VAR_28;
 char VAR_29[256];
 int VAR_30;

 for (VAR_23 = 0; VAR_23 < FUNC_17(VAR_19); VAR_23++)
  if (VAR_19[VAR_23] != 'h' && 'a' <= VAR_19[VAR_23] && VAR_19[VAR_23] <= 'z')
   VAR_18[(unsigned char)VAR_19[VAR_23]] = 1;

 while ((VAR_26 = FUNC_7(VAR_14, VAR_15, VAR_19)) != -1) {

  switch (VAR_26) {
  case 'i':
   VAR_9 = FUNC_8(VAR_10);
   if (!VAR_9)
    VAR_9 = FUNC_0(VAR_10);
   break;
  case 'T':
   VAR_22 = FUNC_0(VAR_10);
   break;
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
   FUNC_18(VAR_15[0]);
   return 1;
  }
  VAR_18[VAR_26] = 0;
 }

 for (VAR_23 = 0; VAR_23 < FUNC_17(VAR_19); VAR_23++) {
  if (VAR_18[(unsigned int)VAR_19[VAR_23]]) {
   FUNC_6(VAR_12, "Missing argument -%c\n", VAR_19[VAR_23]);
   FUNC_18(VAR_15[0]);
   return 1;
  }
 }

 if (FUNC_13(VAR_1, &VAR_16)) {
  FUNC_10("setrlimit(RLIMIT_MEMLOCK, RLIM_INFINITY)");
  return 1;
 }

 if (!VAR_9) {
  FUNC_6(VAR_12, "Invalid ifname\n");
  return 1;
 }

 FUNC_15(VAR_29, sizeof(VAR_29), "%s_kern.o", VAR_15[0]);
 VAR_17.file = VAR_29;

 if (FUNC_4(&VAR_17, &VAR_27, &VAR_24))
  return 1;

 VAR_28 = FUNC_2(((void*)0), VAR_27);
 if (!VAR_28) {
  FUNC_12("finding a map in obj file failed\n");
  return 1;
 }
 VAR_25 = FUNC_1(VAR_28);

 if (!VAR_24) {
  FUNC_12("load_bpf_file: %s\n", FUNC_16(VAR_8));
  return 1;
 }

 FUNC_14(VAR_3, FUNC_9);
 FUNC_14(VAR_4, FUNC_9);

 if (FUNC_5(VAR_9, VAR_24, VAR_13) < 0) {
  FUNC_12("link set xdp fd failed\n");
  return 1;
 }

 VAR_30 = FUNC_3(VAR_24, &VAR_20, &VAR_21);
 if (VAR_30) {
  FUNC_12("can't get prog info - %s\n", FUNC_16(VAR_8));
  return 1;
 }
 VAR_11 = VAR_20.id;

 FUNC_11(VAR_25, VAR_22);
 FUNC_9(0);

 return 0;
}
