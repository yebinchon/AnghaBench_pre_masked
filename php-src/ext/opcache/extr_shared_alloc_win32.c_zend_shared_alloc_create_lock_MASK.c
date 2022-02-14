
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(void)
{
 VAR_3 = FUNC_0(((void*)0), VAR_2, FUNC_2(VAR_1));
 if (!VAR_3) {
  FUNC_3(VAR_0, "Cannot create mutex");
  return;
 }
 FUNC_1(VAR_3);
}
