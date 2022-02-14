
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int iPrevId; int pDeferred; } ;
struct TYPE_15__ {int eType; int iDocid; int bEof; int bDeferred; TYPE_3__* pPhrase; struct TYPE_15__* pRight; struct TYPE_15__* pLeft; TYPE_1__* pParent; } ;
struct TYPE_13__ {int pList; int bFreeList; } ;
struct TYPE_14__ {TYPE_2__ doclist; } ;
struct TYPE_12__ {int const eType; } ;
typedef TYPE_3__ Fts3Phrase ;
typedef TYPE_4__ Fts3Expr ;
typedef TYPE_5__ Fts3Cursor ;






 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,int*) ;

__attribute__((used)) static int FUNC_4(
  Fts3Cursor *VAR_1,
  Fts3Expr *VAR_2,
  int *VAR_3
){
  int VAR_4 = 1;
  if( *VAR_3==VAR_0 ){
    switch( VAR_2->eType ){
      case 130:
      case 131:
        VAR_4 = (
            FUNC_4(VAR_1, VAR_2->pLeft, VAR_3)
         && FUNC_4(VAR_1, VAR_2->pRight, VAR_3)
         && FUNC_3(VAR_2, VAR_3)
        );
        if( VAR_4==0
         && VAR_2->eType==130
         && (VAR_2->pParent==0 || VAR_2->pParent->eType!=130)
        ){
          Fts3Expr *VAR_5;
          for(VAR_5=VAR_2; VAR_5->pPhrase==0; VAR_5=VAR_5->pLeft){
            if( VAR_5->pRight->iDocid==VAR_1->iPrevId ){
              FUNC_2(VAR_5->pRight->pPhrase);
            }
          }
          if( VAR_5->iDocid==VAR_1->iPrevId ){
            FUNC_2(VAR_5->pPhrase);
          }
        }

        break;

      case 128: {
        int VAR_6 = FUNC_4(VAR_1, VAR_2->pLeft, VAR_3);
        int VAR_7 = FUNC_4(VAR_1, VAR_2->pRight, VAR_3);
        VAR_4 = VAR_6 || VAR_7;
        break;
      }

      case 129:
        VAR_4 = (
            FUNC_4(VAR_1, VAR_2->pLeft, VAR_3)
         && !FUNC_4(VAR_1, VAR_2->pRight, VAR_3)
        );
        break;

      default: {

        if( VAR_1->pDeferred
         && (VAR_2->iDocid==VAR_1->iPrevId || VAR_2->bDeferred)
        ){
          Fts3Phrase *VAR_8 = VAR_2->pPhrase;
          FUNC_0( VAR_2->bDeferred || VAR_8->doclist.bFreeList==0 );
          if( VAR_2->bDeferred ){
            FUNC_2(VAR_8);
          }
          *VAR_3 = FUNC_1(VAR_1, VAR_8);
          VAR_4 = (VAR_8->doclist.pList!=0);
          VAR_2->iDocid = VAR_1->iPrevId;
        }else

        {
          VAR_4 = (VAR_2->bEof==0 && VAR_2->iDocid==VAR_1->iPrevId);
        }
        break;
      }
    }
  }
  return VAR_4;
}
