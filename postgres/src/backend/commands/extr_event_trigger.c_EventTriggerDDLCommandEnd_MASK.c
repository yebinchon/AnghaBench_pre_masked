
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int List ;
typedef int EventTriggerData ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,char*,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

void
FUNC_4(Node *VAR_4)
{
 List *VAR_5;
 EventTriggerData VAR_6;





 if (!VAR_1)
  return;
 if (!VAR_3)
  return;

 VAR_5 = FUNC_1(VAR_4,
           VAR_0, "ddl_command_end",
           &VAR_6);
 if (VAR_5 == VAR_2)
  return;





 FUNC_0();


 FUNC_2(VAR_5, &VAR_6);


 FUNC_3(VAR_5);
}
