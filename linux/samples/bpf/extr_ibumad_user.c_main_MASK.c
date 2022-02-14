
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bpf_file ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,char**,char*,int ,int*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int VAR_6 ;
 unsigned long FUNC_7 (char*,int *,int ) ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_7, char **VAR_8)
{
 unsigned long VAR_9 = 5;
 int VAR_10 = 0;
 int VAR_11;
 char VAR_12[256];




 FUNC_6(VAR_12, sizeof(VAR_12), "%s_kern.o", VAR_8[0]);


 FUNC_4(VAR_0, VAR_3);
 FUNC_4(VAR_1, VAR_3);

 while ((VAR_11 = FUNC_2(VAR_7, VAR_8, "hd:rSw",
      VAR_4, &VAR_10)) != -1) {
  switch (VAR_11) {
  case 'd':
   VAR_9 = FUNC_7(VAR_5, ((void*)0), 0);
   if (VAR_9 == VAR_2 || VAR_9 < 0 ||
       VAR_9 > 1000000) {
    FUNC_1(VAR_6, "ERROR: invalid delay : %s\n",
     VAR_5);
    FUNC_8(VAR_8[0]);
    return 1;
   }
   break;
  default:
  case 'h':
   FUNC_8(VAR_8[0]);
   return 1;
  }
 }

 if (FUNC_3(VAR_12)) {
  FUNC_1(VAR_6, "ERROR: failed to load eBPF from file : %s\n",
   VAR_12);
  return 1;
 }

 while (1) {
  FUNC_5(VAR_9);
  FUNC_0();
 }

 return 0;
}
