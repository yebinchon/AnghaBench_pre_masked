
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6(void)
{
 FUNC_4(VAR_1, VAR_0, "%s/%s", VAR_2, VAR_3);
 switch (VAR_5)
 {
  case 128:




  case 129:
  default:
   FUNC_0("cp", VAR_1, VAR_8);
   break;
 }







 if (FUNC_5(VAR_2, &VAR_6) != 0)
 {
  FUNC_3(VAR_7, "%s: archive location \"%s\" does not exist\n", VAR_4, VAR_2);
  FUNC_2(VAR_7);
  FUNC_1(2);
 }
}
