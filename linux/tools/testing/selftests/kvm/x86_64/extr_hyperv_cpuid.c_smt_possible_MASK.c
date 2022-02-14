
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 char VAR_0[16];
 FILE *VAR_1;
 bool VAR_2 = 1;

 VAR_1 = FUNC_1("/sys/devices/system/cpu/smt/control", "r");
 if (VAR_1) {
  if (FUNC_2(VAR_0, sizeof(*VAR_0), sizeof(VAR_0), VAR_1) > 0) {
   if (!FUNC_3(VAR_0, "forceoff", 8) ||
       !FUNC_3(VAR_0, "notsupported", 12))
    VAR_2 = 0;
  }
  FUNC_0(VAR_1);
 }

 return VAR_2;
}
