
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int priority; int data; } ;
typedef TYPE_1__ spl_pqueue_elem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zval *VAR_3, spl_pqueue_elem *VAR_4, int VAR_5)
{
 if ((VAR_5 & VAR_0) == VAR_0) {
  FUNC_4(VAR_3);
  FUNC_2(VAR_4->data);
  FUNC_3(VAR_3, "data", sizeof("data") - 1, &VAR_4->data);
  FUNC_2(VAR_4->priority);
  FUNC_3(VAR_3, "priority", sizeof("priority") - 1, &VAR_4->priority);
  return;
 }

 if (VAR_5 & VAR_1) {
  FUNC_1(VAR_3, &VAR_4->data);
  return;
 }

 if (VAR_5 & VAR_2) {
  FUNC_1(VAR_3, &VAR_4->priority);
  return;
 }

 FUNC_0(0);
}
