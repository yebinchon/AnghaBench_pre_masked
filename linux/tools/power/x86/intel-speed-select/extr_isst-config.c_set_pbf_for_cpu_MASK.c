
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,char*,char*,int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(int VAR_1, void *VAR_2, void *VAR_3, void *VAR_4,
       void *VAR_5)
{
 int VAR_6;
 int VAR_7 = *(int *)VAR_5;

 VAR_6 = FUNC_1(VAR_1, 1, VAR_7);
 if (VAR_6) {
  FUNC_2("isst_set_pbf");
 } else {
  if (VAR_7)
   FUNC_0(VAR_1, VAR_0, "base-freq", "enable",
         VAR_6);
  else
   FUNC_0(VAR_1, VAR_0, "base-freq", "disable",
         VAR_6);
 }
}
