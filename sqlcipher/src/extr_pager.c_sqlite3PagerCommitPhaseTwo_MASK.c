
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int errCode; scalar_t__ eState; scalar_t__ journalMode; scalar_t__ journalOff; int setMaster; int iDataVersion; scalar_t__ exclusiveMode; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int) ;

int FUNC_9(Pager *VAR_6){
  int VAR_7 = VAR_5;




  if( FUNC_1(VAR_6->errCode) ) return VAR_6->errCode;

  FUNC_4( VAR_6->eState==VAR_4
       || VAR_6->eState==VAR_3
       || (FUNC_6(VAR_6) && VAR_6->eState==VAR_2)
  );
  FUNC_4( FUNC_5(VAR_6) );
  if( VAR_6->eState==VAR_4
   && VAR_6->exclusiveMode
   && VAR_6->journalMode==VAR_0
  ){
    FUNC_4( VAR_6->journalOff==FUNC_0(VAR_6) || !VAR_6->journalOff );
    VAR_6->eState = VAR_1;
    return VAR_5;
  }

  FUNC_3(("COMMIT %d\n", FUNC_2(VAR_6)));
  VAR_6->iDataVersion++;
  VAR_7 = FUNC_7(VAR_6, VAR_6->setMaster, 1);
  return FUNC_8(VAR_6, VAR_7);
}
