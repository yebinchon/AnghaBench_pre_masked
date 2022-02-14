
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,char*,char*,int) ;
 int FUNC_1 (int,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(int VAR_2, void *VAR_3, void *VAR_4, void *VAR_5,
       void *VAR_6)
{
 int VAR_7;
 int VAR_8 = *(int *)VAR_6;

 VAR_7 = FUNC_1(VAR_2, VAR_8, VAR_0);
 if (VAR_7) {
  FUNC_2("isst_pm_qos_config");
 } else {
  if (VAR_8)
   FUNC_0(VAR_2, VAR_1, "core-power", "enable",
         VAR_7);
  else
   FUNC_0(VAR_2, VAR_1, "core-power", "disable",
         VAR_7);
 }
}
