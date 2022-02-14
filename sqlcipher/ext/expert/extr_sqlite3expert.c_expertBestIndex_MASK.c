
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct sqlite3_index_constraint {size_t iColumn; int const op; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_19__ {int nConstraint; int nOrderBy; double estimatedCost; TYPE_5__* aOrderBy; TYPE_2__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_6__ sqlite3_index_info ;
struct TYPE_22__ {TYPE_4__* pTab; TYPE_1__* pExpert; } ;
struct TYPE_21__ {size_t iCol; int bRange; struct TYPE_21__* pLink; struct TYPE_21__* pNext; int bDesc; } ;
struct TYPE_20__ {TYPE_8__* pOrder; TYPE_8__* pRange; TYPE_8__* pEq; struct TYPE_20__* pNextScan; TYPE_4__* pTab; } ;
struct TYPE_18__ {int iColumn; int desc; } ;
struct TYPE_17__ {TYPE_3__* aCol; } ;
struct TYPE_16__ {scalar_t__ iPk; char const* zColl; } ;
struct TYPE_15__ {int argvIndex; } ;
struct TYPE_14__ {TYPE_7__* pScan; } ;
typedef TYPE_7__ IdxScan ;
typedef TYPE_8__ IdxConstraint ;
typedef TYPE_9__ ExpertVtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_0 (int*,int) ;
 TYPE_8__* FUNC_1 (int*,char const*) ;
 char* FUNC_2 (TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_6, sqlite3_index_info *VAR_7){
  ExpertVtab *VAR_8 = (ExpertVtab*)VAR_6;
  int VAR_9 = VAR_5;
  int VAR_10 = 0;
  IdxScan *VAR_11;
  const int VAR_12 =
    VAR_0 | VAR_2 |
    VAR_4 | VAR_1 |
    VAR_3;

  VAR_11 = FUNC_0(&VAR_9, sizeof(IdxScan));
  if( VAR_11 ){
    int VAR_13;


    VAR_11->pTab = VAR_8->pTab;
    VAR_11->pNextScan = VAR_8->pExpert->pScan;
    VAR_8->pExpert->pScan = VAR_11;


    for(VAR_13=0; VAR_13<VAR_7->nConstraint; VAR_13++){
      struct sqlite3_index_constraint *VAR_14 = &VAR_7->aConstraint[VAR_13];
      if( VAR_14->usable
       && VAR_14->iColumn>=0
       && VAR_8->pTab->aCol[VAR_14->iColumn].iPk==0
       && (VAR_14->op & VAR_12)
      ){
        IdxConstraint *VAR_15;
        const char *VAR_16 = FUNC_2(VAR_7, VAR_13);
        VAR_15 = FUNC_1(&VAR_9, VAR_16);
        if( VAR_15 ){
          VAR_15->iCol = VAR_14->iColumn;
          if( VAR_14->op==VAR_0 ){
            VAR_15->pNext = VAR_11->pEq;
            VAR_11->pEq = VAR_15;
          }else{
            VAR_15->bRange = 1;
            VAR_15->pNext = VAR_11->pRange;
            VAR_11->pRange = VAR_15;
          }
        }
        VAR_10++;
        VAR_7->aConstraintUsage[VAR_13].argvIndex = VAR_10;
      }
    }


    for(VAR_13=VAR_7->nOrderBy-1; VAR_13>=0; VAR_13--){
      int VAR_17 = VAR_7->aOrderBy[VAR_13].iColumn;
      if( VAR_17>=0 ){
        IdxConstraint *VAR_18 = FUNC_1(&VAR_9, VAR_8->pTab->aCol[VAR_17].zColl);
        if( VAR_18 ){
          VAR_18->iCol = VAR_17;
          VAR_18->bDesc = VAR_7->aOrderBy[VAR_13].desc;
          VAR_18->pNext = VAR_11->pOrder;
          VAR_18->pLink = VAR_11->pOrder;
          VAR_11->pOrder = VAR_18;
          VAR_10++;
        }
      }
    }
  }

  VAR_7->estimatedCost = 1000000.0 / (VAR_10+1);
  return VAR_9;
}
