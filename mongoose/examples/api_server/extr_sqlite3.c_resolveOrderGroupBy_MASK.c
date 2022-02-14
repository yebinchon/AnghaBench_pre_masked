
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef void* u16 ;
struct ExprList_item {int iOrderByCol; int * pExpr; } ;
struct TYPE_16__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_15__ {int * pParse; } ;
struct TYPE_14__ {TYPE_11__* pEList; } ;
struct TYPE_13__ {int pExpr; } ;
struct TYPE_12__ {int nExpr; TYPE_1__* a; } ;
typedef TYPE_2__ Select ;
typedef int Parse ;
typedef TYPE_3__ NameContext ;
typedef TYPE_4__ ExprList ;
typedef int Expr ;


 int FUNC_0 (int *,TYPE_11__*,int *) ;
 int FUNC_1 (int *,char const*,int,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int *,TYPE_2__*,TYPE_4__*,char const*) ;

__attribute__((used)) static int FUNC_7(
  NameContext *VAR_0,
  Select *VAR_1,
  ExprList *VAR_2,
  const char *VAR_3
){
  int VAR_4, VAR_5;
  int VAR_6;
  struct ExprList_item *VAR_7;
  Parse *VAR_8;
  int VAR_9;

  if( VAR_2==0 ) return 0;
  VAR_9 = VAR_1->pEList->nExpr;
  VAR_8 = VAR_0->pParse;
  for(VAR_4=0, VAR_7=VAR_2->a; VAR_4<VAR_2->nExpr; VAR_4++, VAR_7++){
    Expr *VAR_10 = VAR_7->pExpr;
    VAR_6 = FUNC_0(VAR_8, VAR_1->pEList, VAR_10);
    if( VAR_6>0 ){




      VAR_7->iOrderByCol = (u16)VAR_6;
      continue;
    }
    if( FUNC_3(FUNC_4(VAR_10), &VAR_6) ){



      if( VAR_6<1 || VAR_6>0xffff ){
        FUNC_1(VAR_8, VAR_3, VAR_4+1, VAR_9);
        return 1;
      }
      VAR_7->iOrderByCol = (u16)VAR_6;
      continue;
    }


    VAR_7->iOrderByCol = 0;
    if( FUNC_5(VAR_0, VAR_10) ){
      return 1;
    }
    for(VAR_5=0; VAR_5<VAR_1->pEList->nExpr; VAR_5++){
      if( FUNC_2(VAR_10, VAR_1->pEList->a[VAR_5].pExpr)==0 ){
        VAR_7->iOrderByCol = VAR_5+1;
      }
    }
  }
  return FUNC_6(VAR_8, VAR_1, VAR_2, VAR_3);
}
