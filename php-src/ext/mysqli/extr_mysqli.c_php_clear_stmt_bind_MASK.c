
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* query; int link_handle; int result; int param; scalar_t__ stmt; } ;
typedef TYPE_1__ MY_STMT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(MY_STMT *VAR_4)
{
 if (VAR_4->stmt) {
  if (FUNC_2(VAR_4->stmt, VAR_3)) {
   FUNC_3(((void*)0), VAR_0, "Error occurred while closing statement");
   return;
  }
 }







 FUNC_4(VAR_4->param, VAR_2);

 FUNC_4(VAR_4->result, VAR_1);

 if (!FUNC_0(VAR_4->link_handle)) {
  FUNC_5(&VAR_4->link_handle);
 }

 if (VAR_4->query) {
  FUNC_1(VAR_4->query);
 }
 FUNC_1(VAR_4);
}
