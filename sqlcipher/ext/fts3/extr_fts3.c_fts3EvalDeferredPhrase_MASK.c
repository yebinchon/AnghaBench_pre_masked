
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int iPrevId; } ;
struct TYPE_7__ {int bFreeList; char* pList; int nList; int iDocid; } ;
struct TYPE_9__ {int nToken; int iDoclistToken; TYPE_1__ doclist; TYPE_2__* aToken; } ;
struct TYPE_8__ {int * pDeferred; } ;
typedef TYPE_2__ Fts3PhraseToken ;
typedef TYPE_3__ Fts3Phrase ;
typedef int Fts3DeferredToken ;
typedef TYPE_4__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char**,int,int ,int,char**,char**) ;
 int FUNC_2 (int *,char**,int*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(Fts3Cursor *VAR_2, Fts3Phrase *VAR_3){
  int VAR_4;
  char *VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7 = -1;

  FUNC_0( VAR_3->doclist.bFreeList==0 );

  for(VAR_4=0; VAR_4<VAR_3->nToken; VAR_4++){
    Fts3PhraseToken *VAR_8 = &VAR_3->aToken[VAR_4];
    Fts3DeferredToken *VAR_9 = VAR_8->pDeferred;

    if( VAR_9 ){
      char *VAR_10;
      int VAR_11;
      int VAR_12 = FUNC_2(VAR_9, &VAR_10, &VAR_11);
      if( VAR_12!=VAR_1 ) return VAR_12;

      if( VAR_10==0 ){
        FUNC_3(VAR_5);
        VAR_3->doclist.pList = 0;
        VAR_3->doclist.nList = 0;
        return VAR_1;

      }else if( VAR_5==0 ){
        VAR_5 = VAR_10;
        VAR_6 = VAR_11;

      }else{
        char *VAR_13 = VAR_10;
        char *VAR_14 = VAR_5;
        char *VAR_15 = VAR_13;

        FUNC_0( VAR_7>=0 );
        FUNC_1(&VAR_13, VAR_4-VAR_7, 0, 1, &VAR_14, &VAR_15);
        FUNC_3(VAR_5);
        VAR_5 = VAR_10;
        VAR_6 = (int)(VAR_13 - VAR_5);
        if( VAR_6==0 ){
          FUNC_3(VAR_5);
          VAR_3->doclist.pList = 0;
          VAR_3->doclist.nList = 0;
          return VAR_1;
        }
      }
      VAR_7 = VAR_4;
    }
  }

  if( VAR_7>=0 ){
    int VAR_16 = VAR_3->iDoclistToken;
    if( VAR_16<0 ){
      VAR_3->doclist.pList = VAR_5;
      VAR_3->doclist.nList = VAR_6;
      VAR_3->doclist.iDocid = VAR_2->iPrevId;
      VAR_3->doclist.bFreeList = 1;
    }else{
      int VAR_17;
      char *VAR_18;
      char *VAR_19;
      char *VAR_20;

      if( VAR_16>VAR_7 ){
        VAR_18 = VAR_5;
        VAR_19 = VAR_3->doclist.pList;
        VAR_17 = VAR_16 - VAR_7;
      }else{
        VAR_18 = VAR_3->doclist.pList;
        VAR_19 = VAR_5;
        VAR_17 = VAR_7 - VAR_16;
      }

      VAR_20 = (char *)FUNC_4(VAR_6+8);
      if( !VAR_20 ){
        FUNC_3(VAR_5);
        return VAR_0;
      }

      VAR_3->doclist.pList = VAR_20;
      if( FUNC_1(&VAR_20, VAR_17, 0, 1, &VAR_18, &VAR_19) ){
        VAR_3->doclist.bFreeList = 1;
        VAR_3->doclist.nList = (int)(VAR_20 - VAR_3->doclist.pList);
      }else{
        FUNC_3(VAR_20);
        VAR_3->doclist.pList = 0;
        VAR_3->doclist.nList = 0;
      }
      FUNC_3(VAR_5);
    }
  }

  return VAR_1;
}
