
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ iOrderByCol; } ;
struct TYPE_15__ {TYPE_1__ x; } ;
struct ExprList_item {int pExpr; TYPE_2__ u; } ;
struct TYPE_16__ {int* aLimit; scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_19__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_18__ {TYPE_3__* db; } ;
struct TYPE_17__ {TYPE_6__* pEList; } ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ ExprList ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,scalar_t__,int ,char const*,int ) ;
 int FUNC_2 (TYPE_5__*,char const*,int,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,char*,char const*) ;

int FUNC_4(
  Parse *VAR_1,
  Select *VAR_2,
  ExprList *VAR_3,
  const char *VAR_4
){
  int VAR_5;
  sqlite3 *VAR_6 = VAR_1->db;
  ExprList *VAR_7;
  struct ExprList_item *VAR_8;

  if( VAR_3==0 || VAR_1->db->mallocFailed ) return 0;
  if( VAR_3->nExpr>VAR_6->aLimit[VAR_0] ){
    FUNC_3(VAR_1, "too many terms in %s BY clause", VAR_4);
    return 1;
  }
  VAR_7 = VAR_2->pEList;
  FUNC_0( VAR_7!=0 );
  for(VAR_5=0, VAR_8=VAR_3->a; VAR_5<VAR_3->nExpr; VAR_5++, VAR_8++){
    if( VAR_8->u.x.iOrderByCol ){
      if( VAR_8->u.x.iOrderByCol>VAR_7->nExpr ){
        FUNC_2(VAR_1, VAR_4, VAR_5+1, VAR_7->nExpr);
        return 1;
      }
      FUNC_1(VAR_1, VAR_7, VAR_8->u.x.iOrderByCol-1, VAR_8->pExpr,
                   VAR_4,0);
    }
  }
  return 0;
}
