
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int path ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int,int ,int *,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(pid_t VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 char VAR_8[100];

 FUNC_2(VAR_8, sizeof(VAR_8), "/proc/%d", VAR_4);
 VAR_6 = FUNC_1(VAR_8, VAR_1 | VAR_2 | VAR_0);
 if (VAR_6 < 0) {
  FUNC_4("Failed to open %s\n", VAR_8);
  return -1;
 }





 VAR_7 = FUNC_3(VAR_5, 0, ((void*)0), 0);
 if (VAR_7 < 0) {
  switch (VAR_3) {
  case 128:

   break;
  default:
   FUNC_4("Failed to signal process\n");
   FUNC_0(VAR_6);
   VAR_6 = -1;
  }
 }

 return VAR_6;
}
