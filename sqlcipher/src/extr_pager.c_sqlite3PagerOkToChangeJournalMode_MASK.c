
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eState; scalar_t__ journalOff; int jfd; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(Pager *VAR_1){
  FUNC_1( FUNC_2(VAR_1) );
  if( VAR_1->eState>=VAR_0 ) return 0;
  if( FUNC_0(FUNC_3(VAR_1->jfd) && VAR_1->journalOff>0) ) return 0;
  return 1;
}
