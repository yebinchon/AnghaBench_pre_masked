
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_13__ {int nAux; int zReadAuxSql; int db; } ;
struct TYPE_12__ {int bAuxValid; scalar_t__ pReadAux; } ;
struct TYPE_11__ {int iCell; } ;
typedef TYPE_2__ RtreeSearchPoint ;
typedef int RtreeNode ;
typedef TYPE_3__ RtreeCursor ;
typedef TYPE_4__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *,int ) ;
 int * FUNC_1 (TYPE_3__*,int*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ,int ,int,int ,scalar_t__*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(sqlite3_vtab_cursor *VAR_3, sqlite3_context *VAR_4, int VAR_5){
  Rtree *VAR_6 = (Rtree *)VAR_3->pVtab;
  RtreeCursor *VAR_7 = (RtreeCursor *)VAR_3;
  RtreeSearchPoint *VAR_8 = FUNC_2(VAR_7);
  int VAR_9 = VAR_1;
  RtreeNode *VAR_10 = FUNC_1(VAR_7, &VAR_9);

  if( VAR_9 ) return VAR_9;
  if( VAR_8==0 ) return VAR_1;
  if( VAR_5==0 && FUNC_9(VAR_4) ) return VAR_1;
  if( VAR_5<=VAR_6->nAux ){
    if( !VAR_7->bAuxValid ){
      if( VAR_7->pReadAux==0 ){
        VAR_9 = FUNC_5(VAR_6->db, VAR_6->zReadAuxSql, -1, 0,
                                &VAR_7->pReadAux, 0);
        if( VAR_9 ) return VAR_9;
      }
      FUNC_3(VAR_7->pReadAux, 1,
          FUNC_0(VAR_6, VAR_10, VAR_8->iCell));
      VAR_9 = FUNC_8(VAR_7->pReadAux);
      if( VAR_9==VAR_2 ){
        VAR_7->bAuxValid = 1;
      }else{
        FUNC_6(VAR_7->pReadAux);
        if( VAR_9==VAR_0 ) VAR_9 = VAR_1;
        return VAR_9;
      }
    }
    FUNC_7(VAR_4, FUNC_4(VAR_7->pReadAux, VAR_5+2));
  }
  return VAR_1;
}
