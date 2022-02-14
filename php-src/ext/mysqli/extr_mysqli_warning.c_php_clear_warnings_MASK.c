
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int sqlstate; int reason; } ;
typedef TYPE_1__ MYSQLI_WARNING ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(MYSQLI_WARNING *VAR_0)
{
 MYSQLI_WARNING *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  FUNC_1(&(VAR_0->reason));
  FUNC_1(&(VAR_0->sqlstate));
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
