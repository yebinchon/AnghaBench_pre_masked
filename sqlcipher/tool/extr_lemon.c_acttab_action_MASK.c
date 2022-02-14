
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lookahead_action {int lookahead; int action; } ;
struct TYPE_3__ {size_t nLookahead; size_t nLookaheadAlloc; int mxLookahead; int mnLookahead; int mnAction; struct lookahead_action* aLookahead; } ;
typedef TYPE_1__ acttab ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct lookahead_action*,int) ;
 int VAR_0 ;

void FUNC_3(acttab *VAR_1, int VAR_2, int VAR_3){
  if( VAR_1->nLookahead>=VAR_1->nLookaheadAlloc ){
    VAR_1->nLookaheadAlloc += 25;
    VAR_1->aLookahead = (struct lookahead_action *) FUNC_2( VAR_1->aLookahead,
                             sizeof(VAR_1->aLookahead[0])*VAR_1->nLookaheadAlloc );
    if( VAR_1->aLookahead==0 ){
      FUNC_1(VAR_0,"malloc failed\n");
      FUNC_0(1);
    }
  }
  if( VAR_1->nLookahead==0 ){
    VAR_1->mxLookahead = VAR_2;
    VAR_1->mnLookahead = VAR_2;
    VAR_1->mnAction = VAR_3;
  }else{
    if( VAR_1->mxLookahead<VAR_2 ) VAR_1->mxLookahead = VAR_2;
    if( VAR_1->mnLookahead>VAR_2 ){
      VAR_1->mnLookahead = VAR_2;
      VAR_1->mnAction = VAR_3;
    }
  }
  VAR_1->aLookahead[VAR_1->nLookahead].lookahead = VAR_2;
  VAR_1->aLookahead[VAR_1->nLookahead].action = VAR_3;
  VAR_1->nLookahead++;
}
