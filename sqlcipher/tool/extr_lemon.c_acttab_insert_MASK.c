
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lookahead_action {int lookahead; int action; } ;
struct TYPE_3__ {int nLookahead; int nsymbol; int nAction; int nActionAlloc; int mnLookahead; int mnAction; int mxLookahead; int nterminal; struct lookahead_action* aLookahead; struct lookahead_action* aAction; } ;
typedef TYPE_1__ acttab ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct lookahead_action*,int) ;
 int VAR_0 ;

int FUNC_5(acttab *VAR_1, int VAR_2){
  int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
  FUNC_0( VAR_1->nLookahead>0 );





  VAR_6 = VAR_1->nsymbol + 1;
  if( VAR_1->nAction + VAR_6 >= VAR_1->nActionAlloc ){
    int VAR_8 = VAR_1->nActionAlloc;
    VAR_1->nActionAlloc = VAR_1->nAction + VAR_6 + VAR_1->nActionAlloc + 20;
    VAR_1->aAction = (struct lookahead_action *) FUNC_4( VAR_1->aAction,
                          sizeof(VAR_1->aAction[0])*VAR_1->nActionAlloc);
    if( VAR_1->aAction==0 ){
      FUNC_2(VAR_0,"malloc failed\n");
      FUNC_1(1);
    }
    for(VAR_3=VAR_8; VAR_3<VAR_1->nActionAlloc; VAR_3++){
      VAR_1->aAction[VAR_3].lookahead = -1;
      VAR_1->aAction[VAR_3].action = -1;
    }
  }







  VAR_7 = VAR_2 ? VAR_1->mnLookahead : 0;
  for(VAR_3=VAR_1->nAction-1; VAR_3>=VAR_7; VAR_3--){
    if( VAR_1->aAction[VAR_3].lookahead==VAR_1->mnLookahead ){


      if( VAR_1->aAction[VAR_3].action!=VAR_1->mnAction ) continue;
      for(VAR_4=0; VAR_4<VAR_1->nLookahead; VAR_4++){
        VAR_5 = VAR_1->aLookahead[VAR_4].lookahead - VAR_1->mnLookahead + VAR_3;
        if( VAR_5<0 || VAR_5>=VAR_1->nAction ) break;
        if( VAR_1->aLookahead[VAR_4].lookahead!=VAR_1->aAction[VAR_5].lookahead ) break;
        if( VAR_1->aLookahead[VAR_4].action!=VAR_1->aAction[VAR_5].action ) break;
      }
      if( VAR_4<VAR_1->nLookahead ) continue;



      VAR_6 = 0;
      for(VAR_4=0; VAR_4<VAR_1->nAction; VAR_4++){
        if( VAR_1->aAction[VAR_4].lookahead<0 ) continue;
        if( VAR_1->aAction[VAR_4].lookahead==VAR_4+VAR_1->mnLookahead-VAR_3 ) VAR_6++;
      }
      if( VAR_6==VAR_1->nLookahead ){
        break;
      }
    }
  }





  if( VAR_3<VAR_7 ){




    VAR_3 = VAR_2 ? VAR_1->mnLookahead : 0;
    for(; VAR_3<VAR_1->nActionAlloc - VAR_1->mxLookahead; VAR_3++){
      if( VAR_1->aAction[VAR_3].lookahead<0 ){
        for(VAR_4=0; VAR_4<VAR_1->nLookahead; VAR_4++){
          VAR_5 = VAR_1->aLookahead[VAR_4].lookahead - VAR_1->mnLookahead + VAR_3;
          if( VAR_5<0 ) break;
          if( VAR_1->aAction[VAR_5].lookahead>=0 ) break;
        }
        if( VAR_4<VAR_1->nLookahead ) continue;
        for(VAR_4=0; VAR_4<VAR_1->nAction; VAR_4++){
          if( VAR_1->aAction[VAR_4].lookahead==VAR_4+VAR_1->mnLookahead-VAR_3 ) break;
        }
        if( VAR_4==VAR_1->nAction ){
          break;
        }
      }
    }
  }
  for(VAR_4=0; VAR_4<VAR_1->nLookahead; VAR_4++){
    VAR_5 = VAR_1->aLookahead[VAR_4].lookahead - VAR_1->mnLookahead + VAR_3;
    VAR_1->aAction[VAR_5] = VAR_1->aLookahead[VAR_4];
    if( VAR_5>=VAR_1->nAction ) VAR_1->nAction = VAR_5+1;
  }
  if( VAR_2 && VAR_3+VAR_1->nterminal>=VAR_1->nAction ) VAR_1->nAction = VAR_3+VAR_1->nterminal+1;
  VAR_1->nLookahead = 0;



  return VAR_3 - VAR_1->mnLookahead;
}
