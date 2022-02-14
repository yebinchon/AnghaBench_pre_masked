
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_18__ {int mutex; TYPE_1__* pVtabCtx; int mallocFailed; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_19__ {int tabFlags; scalar_t__ nCol; scalar_t__ aCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_20__ {int declareVtab; int nQueryLoop; TYPE_13__* pNewTable; scalar_t__ pVdbe; TYPE_2__* db; } ;
struct TYPE_17__ {TYPE_3__* pTab; } ;
struct TYPE_16__ {int tabFlags; scalar_t__ aCol; scalar_t__ nCol; int pSelect; } ;
typedef TYPE_4__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_13__*) ;
 int FUNC_4 (TYPE_2__*,int,char*,...) ;
 int FUNC_5 (TYPE_4__*,char const*,char**) ;
 TYPE_4__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(sqlite3 *VAR_6, const char *VAR_7){
  Parse *VAR_8;

  int VAR_9 = VAR_4;
  Table *VAR_10;
  char *VAR_11 = 0;

  FUNC_9(VAR_6->mutex);
  if( !VAR_6->pVtabCtx || !(VAR_10 = VAR_6->pVtabCtx->pTab) ){
    FUNC_4(VAR_6, VAR_1, 0);
    FUNC_10(VAR_6->mutex);
    return VAR_2;
  }
  FUNC_0( (VAR_10->tabFlags & VAR_5)!=0 );

  VAR_8 = FUNC_6(VAR_6, sizeof(*VAR_8));
  if( VAR_8==0 ){
    VAR_9 = VAR_3;
  }else{
    VAR_8->declareVtab = 1;
    VAR_8->db = VAR_6;
    VAR_8->nQueryLoop = 1;

    if( VAR_4==FUNC_5(VAR_8, VAR_7, &VAR_11)
     && VAR_8->pNewTable
     && !VAR_6->mallocFailed
     && !VAR_8->pNewTable->pSelect
     && (VAR_8->pNewTable->tabFlags & VAR_5)==0
    ){
      if( !VAR_10->aCol ){
        VAR_10->aCol = VAR_8->pNewTable->aCol;
        VAR_10->nCol = VAR_8->pNewTable->nCol;
        VAR_8->pNewTable->nCol = 0;
        VAR_8->pNewTable->aCol = 0;
      }
      VAR_6->pVtabCtx->pTab = 0;
    }else{
      FUNC_4(VAR_6, VAR_0, (VAR_11 ? "%s" : 0), VAR_11);
      FUNC_2(VAR_6, VAR_11);
      VAR_9 = VAR_0;
    }
    VAR_8->declareVtab = 0;

    if( VAR_8->pVdbe ){
      FUNC_8(VAR_8->pVdbe);
    }
    FUNC_3(VAR_6, VAR_8->pNewTable);
    FUNC_7(VAR_6, VAR_8);
  }

  FUNC_0( (VAR_9&0xff)==VAR_9 );
  VAR_9 = FUNC_1(VAR_6, VAR_9);
  FUNC_10(VAR_6->mutex);
  return VAR_9;
}
