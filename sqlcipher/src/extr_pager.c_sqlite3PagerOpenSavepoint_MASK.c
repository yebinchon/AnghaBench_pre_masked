
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eState; int nSavepoint; scalar_t__ useJournal; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(Pager *VAR_2, int VAR_3){
  FUNC_0( VAR_2->eState>=VAR_0 );
  FUNC_0( FUNC_1(VAR_2) );

  if( VAR_3>VAR_2->nSavepoint && VAR_2->useJournal ){
    return FUNC_2(VAR_2, VAR_3);
  }else{
    return VAR_1;
  }
}
