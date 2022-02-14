
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int nConstraint; TYPE_1__* aConstraint; } ;
typedef TYPE_4__ sqlite3_index_info ;
struct TYPE_16__ {char* zName; } ;
struct TYPE_15__ {int pRight; scalar_t__ pLeft; } ;
struct TYPE_14__ {int pParse; TYPE_3__* pWC; } ;
struct TYPE_12__ {TYPE_2__* a; } ;
struct TYPE_11__ {TYPE_6__* pExpr; } ;
struct TYPE_10__ {int iTermOffset; } ;
typedef TYPE_5__ HiddenIndexInfo ;
typedef TYPE_6__ Expr ;
typedef TYPE_7__ CollSeq ;


 TYPE_7__* FUNC_0 (int ,scalar_t__,int ) ;
 char* VAR_0 ;

const char *FUNC_1(sqlite3_index_info *VAR_1, int VAR_2){
  HiddenIndexInfo *VAR_3 = (HiddenIndexInfo*)&VAR_1[1];
  const char *VAR_4 = 0;
  if( VAR_2>=0 && VAR_2<VAR_1->nConstraint ){
    CollSeq *VAR_5 = 0;
    int VAR_6 = VAR_1->aConstraint[VAR_2].iTermOffset;
    Expr *VAR_7 = VAR_3->pWC->a[VAR_6].pExpr;
    if( VAR_7->pLeft ){
      VAR_5 = FUNC_0(VAR_3->pParse, VAR_7->pLeft, VAR_7->pRight);
    }
    VAR_4 = (VAR_5 ? VAR_5->zName : VAR_0);
  }
  return VAR_4;
}
