
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int zErrMsg; } ;
struct TYPE_12__ {size_t nSrc; TYPE_2__ base; TYPE_4__* aSrc; scalar_t__ bSwarm; } ;
typedef TYPE_3__ UnionTab ;
struct TYPE_13__ {scalar_t__ iMin; scalar_t__ iMax; int zTab; int db; } ;
typedef TYPE_4__ UnionSrc ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_14__ {size_t iTab; scalar_t__ iMaxRowid; int pStmt; TYPE_1__ base; } ;
typedef TYPE_5__ UnionCsr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,size_t) ;
 int FUNC_4 (TYPE_3__*,size_t,int *) ;
 int FUNC_5 (int*,int *,int ,char*,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(UnionCsr *VAR_2){
  int VAR_3 = VAR_0;
  FUNC_0( VAR_2->pStmt );
  if( FUNC_1(VAR_2->pStmt)!=VAR_1 ){
    UnionTab *VAR_4 = (UnionTab*)VAR_2->base.pVtab;
    VAR_3 = FUNC_2(VAR_2);
    if( VAR_3==VAR_0 && VAR_4->bSwarm ){
      VAR_2->iTab++;
      if( VAR_2->iTab<VAR_4->nSrc ){
        UnionSrc *VAR_5 = &VAR_4->aSrc[VAR_2->iTab];
        if( VAR_2->iMaxRowid>=VAR_5->iMin ){

          VAR_3 = FUNC_4(VAR_4, VAR_2->iTab, &VAR_4->base.zErrMsg);
          VAR_2->pStmt = FUNC_5(&VAR_3, &VAR_4->base.zErrMsg, VAR_5->db,
              "SELECT rowid, * FROM %Q %s %lld",
              VAR_5->zTab,
              (VAR_5->iMax>VAR_2->iMaxRowid ? "WHERE _rowid_ <=" : "-- "),
              VAR_2->iMaxRowid
          );
          if( VAR_3==VAR_0 ){
            FUNC_0( VAR_2->pStmt );
            FUNC_3(VAR_4, VAR_2->iTab);
            VAR_3 = VAR_1;
          }
        }
      }
    }
  }

  return VAR_3;
}
