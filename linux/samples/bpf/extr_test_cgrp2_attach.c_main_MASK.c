
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (char*,int) ;
 int VAR_6 ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*) ;

int FUNC_8(int VAR_7, char **VAR_8)
{
 int VAR_9 = 0, VAR_10 = 1;
 enum bpf_attach_type VAR_11;
 int VAR_12, VAR_13, VAR_14;

 while ((VAR_12 = FUNC_2(VAR_7, VAR_8, "Dd")) != -1) {
  switch (VAR_12) {
  case 'd':
   VAR_10 = 0;
   break;
  case 'D':
   VAR_9 = 1;
   break;
  default:
   return FUNC_7(VAR_8[0]);
  }
 }

 if (VAR_7 - VAR_6 < 2)
  return FUNC_7(VAR_8[0]);

 if (FUNC_5(VAR_8[VAR_6 + 1], "ingress") == 0)
  VAR_11 = VAR_1;
 else if (FUNC_5(VAR_8[VAR_6 + 1], "egress") == 0)
  VAR_11 = VAR_0;
 else
  return FUNC_7(VAR_8[0]);

 VAR_13 = FUNC_3(VAR_8[VAR_6], VAR_3 | VAR_4);
 if (VAR_13 < 0) {
  FUNC_4("Failed to open cgroup path: '%s'\n", FUNC_6(VAR_5));
  return VAR_2;
 }

 if (VAR_9) {
  VAR_14 = FUNC_1(VAR_13, VAR_11);
  FUNC_4("bpf_prog_detach() returned '%s' (%d)\n",
         FUNC_6(VAR_5), VAR_5);
 } else
  VAR_14 = FUNC_0(VAR_13, VAR_11, VAR_10);

 return VAR_14;
}
