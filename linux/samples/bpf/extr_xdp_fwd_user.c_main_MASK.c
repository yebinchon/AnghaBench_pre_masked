
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
struct bpf_prog_load_attr {char* file; int prog_type; } ;
struct bpf_object {int dummy; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bpf_object*,char*) ;
 struct bpf_program* FUNC_4 (struct bpf_object*,char const*) ;
 int FUNC_5 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_6 (struct bpf_program*) ;
 int FUNC_7 (int,int,int,char*) ;
 int FUNC_8 (int,char*) ;
 int VAR_3 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (char*) ;
 int VAR_4 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,int,char*,char*) ;
 int VAR_5 ;
 char* FUNC_14 (int) ;
 int FUNC_15 (char*,int *,int ) ;
 int FUNC_16 (int ) ;

int FUNC_17(int VAR_6, char **VAR_7)
{
 struct bpf_prog_load_attr VAR_8 = {
  .prog_type = VAR_0,
 };
 const char *VAR_9 = "xdp_fwd";
 struct bpf_program *VAR_10;
 int VAR_11, VAR_12 = -1;
 char VAR_13[VAR_2];
 struct bpf_object *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19 = 1;
 int VAR_20 = 0;

 while ((VAR_15 = FUNC_10(VAR_6, VAR_7, ":dD")) != -1) {
  switch (VAR_15) {
  case 'd':
   VAR_19 = 0;
   break;
  case 'D':
   VAR_9 = "xdp_fwd_direct";
   break;
  default:
   FUNC_16(FUNC_1(VAR_7[0]));
   return 1;
  }
 }

 if (VAR_4 == VAR_6) {
  FUNC_16(FUNC_1(VAR_7[0]));
  return 1;
 }

 if (VAR_19) {
  FUNC_13(VAR_13, sizeof(VAR_13), "%s_kern.o", VAR_7[0]);
  VAR_8.file = VAR_13;

  if (FUNC_0(VAR_13, VAR_1) < 0) {
   FUNC_12("error accessing file %s: %s\n",
    VAR_13, FUNC_14(VAR_3));
   return 1;
  }

  VAR_18 = FUNC_5(&VAR_8, &VAR_14, &VAR_11);
  if (VAR_18) {
   FUNC_12("Does kernel support devmap lookup?\n");



   return 1;
  }

  VAR_10 = FUNC_4(VAR_14, VAR_9);
  VAR_11 = FUNC_6(VAR_10);
  if (VAR_11 < 0) {
   FUNC_12("program not found: %s\n", FUNC_14(VAR_11));
   return 1;
  }
  VAR_12 = FUNC_2(FUNC_3(VAR_14,
       "xdp_tx_ports"));
  if (VAR_12 < 0) {
   FUNC_12("map not found: %s\n", FUNC_14(VAR_12));
   return 1;
  }
 }

 for (VAR_16 = VAR_4; VAR_16 < VAR_6; ++VAR_16) {
  VAR_17 = FUNC_11(VAR_7[VAR_16]);
  if (!VAR_17)
   VAR_17 = FUNC_15(VAR_7[VAR_16], ((void*)0), 0);

  if (!VAR_17) {
   FUNC_9(VAR_5, "Invalid arg\n");
   return 1;
  }
  if (!VAR_19) {
   VAR_18 = FUNC_8(VAR_17, VAR_7[VAR_16]);
   if (VAR_18)
    VAR_20 = VAR_18;
  } else {
   VAR_18 = FUNC_7(VAR_17, VAR_11, VAR_12, VAR_7[VAR_16]);
   if (VAR_18)
    VAR_20 = VAR_18;
  }
 }

 return VAR_20;
}
