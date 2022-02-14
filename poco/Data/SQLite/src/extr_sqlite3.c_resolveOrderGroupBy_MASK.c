
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef void* u16 ;
struct TYPE_17__ {int iOrderByCol; } ;
struct TYPE_18__ {TYPE_2__ x; } ;
struct ExprList_item {TYPE_3__ u; int * pExpr; } ;
struct TYPE_21__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_20__ {int * pParse; } ;
struct TYPE_19__ {TYPE_14__* pEList; } ;
struct TYPE_16__ {int pExpr; } ;
struct TYPE_15__ {int nExpr; TYPE_1__* a; } ;
typedef TYPE_4__ Select ;
typedef int Parse ;
typedef TYPE_5__ NameContext ;
typedef TYPE_6__ ExprList ;
typedef int Expr ;


 int FUNC_0 (int *,TYPE_14__*,int *) ;
 int FUNC_1 (int *,char const*,int,int) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,int*) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (int *,TYPE_4__*,TYPE_6__*,char const*) ;

__attribute__((used)) static int FUNC_8(
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
    Expr *VAR_11 = FUNC_5(VAR_10);
    if( VAR_3[0]!='G' ){
      VAR_6 = FUNC_0(VAR_8, VAR_1->pEList, VAR_11);
      if( VAR_6>0 ){




        VAR_7->u.x.iOrderByCol = (u16)VAR_6;
        continue;
      }
    }
    if( FUNC_4(VAR_11, &VAR_6) ){



      if( VAR_6<1 || VAR_6>0xffff ){
        FUNC_1(VAR_8, VAR_3, VAR_4+1, VAR_9);
        return 1;
      }
      VAR_7->u.x.iOrderByCol = (u16)VAR_6;
      continue;
    }


    VAR_7->u.x.iOrderByCol = 0;
    if( FUNC_6(VAR_0, VAR_10) ){
      return 1;
    }
    for(VAR_5=0; VAR_5<VAR_1->pEList->nExpr; VAR_5++){
      if( FUNC_3(0, VAR_10, VAR_1->pEList->a[VAR_5].pExpr, -1)==0 ){



        FUNC_2(VAR_1, VAR_10);
        VAR_7->u.x.iOrderByCol = VAR_5+1;
      }
    }
  }
  return FUNC_7(VAR_8, VAR_1, VAR_2, VAR_3);
}
