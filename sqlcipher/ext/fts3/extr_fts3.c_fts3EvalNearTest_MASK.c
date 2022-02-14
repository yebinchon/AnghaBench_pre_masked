
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_10__ {scalar_t__ eType; int nNear; TYPE_3__* pPhrase; TYPE_2__* pRight; struct TYPE_10__* pParent; struct TYPE_10__* pLeft; } ;
struct TYPE_7__ {scalar_t__ nList; char* pList; } ;
struct TYPE_9__ {int nToken; TYPE_1__ doclist; } ;
struct TYPE_8__ {TYPE_3__* pPhrase; } ;
typedef TYPE_3__ Fts3Phrase ;
typedef TYPE_4__ Fts3Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char**,int*,TYPE_3__*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(Fts3Expr *VAR_3, int *VAR_4){
  int VAR_5 = 1;
  if( *VAR_4==VAR_2
   && VAR_3->eType==VAR_0
   && (VAR_3->pParent==0 || VAR_3->pParent->eType!=VAR_0)
  ){
    Fts3Expr *VAR_6;
    sqlite3_int64 VAR_7 = 0;
    char *VAR_8;


    for(VAR_6=VAR_3; VAR_6->pLeft; VAR_6=VAR_6->pLeft){
      FUNC_0( VAR_6->pRight->pPhrase->doclist.nList>0 );
      VAR_7 += VAR_6->pRight->pPhrase->doclist.nList;
    }
    VAR_7 += VAR_6->pPhrase->doclist.nList;
    VAR_8 = FUNC_3(VAR_7*2);
    if( !VAR_8 ){
      *VAR_4 = VAR_1;
      VAR_5 = 0;
    }else{
      char *VAR_9 = VAR_6->pPhrase->doclist.pList;
      int VAR_10 = VAR_6->pPhrase->nToken;

      for(VAR_6=VAR_6->pParent;VAR_5 && VAR_6 && VAR_6->eType==VAR_0; VAR_6=VAR_6->pParent){
        Fts3Phrase *VAR_11 = VAR_6->pRight->pPhrase;
        int VAR_12 = VAR_6->nNear;
        VAR_5 = FUNC_1(VAR_12, VAR_8, &VAR_9, &VAR_10, VAR_11);
      }

      VAR_9 = VAR_3->pRight->pPhrase->doclist.pList;
      VAR_10 = VAR_3->pRight->pPhrase->nToken;
      for(VAR_6=VAR_3->pLeft; VAR_6 && VAR_5; VAR_6=VAR_6->pLeft){
        int VAR_13;
        Fts3Phrase *VAR_14;
        FUNC_0( VAR_6->pParent && VAR_6->pParent->pLeft==VAR_6 );
        VAR_13 = VAR_6->pParent->nNear;
        VAR_14 = (
            VAR_6->eType==VAR_0 ? VAR_6->pRight->pPhrase : VAR_6->pPhrase
        );
        VAR_5 = FUNC_1(VAR_13, VAR_8, &VAR_9, &VAR_10, VAR_14);
      }
    }

    FUNC_2(VAR_8);
  }

  return VAR_5;
}
