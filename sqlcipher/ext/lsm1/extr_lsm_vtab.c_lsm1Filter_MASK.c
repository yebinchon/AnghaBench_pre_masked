
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef int sqlite3_uint64 ;
typedef int sqlite3_int64 ;
struct TYPE_5__ {int keyType; } ;
typedef TYPE_2__ lsm1_vtab ;
struct TYPE_4__ {scalar_t__ pVtab; } ;
struct TYPE_6__ {int atEof; scalar_t__ pKey2; int isDesc; int bUnique; int pLsmCur; int nKey2; TYPE_1__ base; } ;
typedef TYPE_3__ lsm1_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,int const**,int*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int const*,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (scalar_t__) ;
 void* FUNC_8 (int ) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(
  sqlite3_vtab_cursor *VAR_9,
  int VAR_10, const char *VAR_11,
  int VAR_12, sqlite3_value **VAR_13
){
  lsm1_cursor *VAR_14 = (lsm1_cursor *)VAR_9;
  lsm1_vtab *VAR_15 = (lsm1_vtab*)(VAR_14->base.pVtab);
  int VAR_16 = VAR_0;
  int VAR_17 = -1;
  const u8 *VAR_18 = 0;
  int VAR_19;
  u8 VAR_20 = VAR_15->keyType;
  u8 VAR_21[16];

  VAR_14->atEof = 1;
  FUNC_7(VAR_14->pKey2);
  VAR_14->pKey2 = 0;
  if( VAR_10<99 ){
    FUNC_1(VAR_20, VAR_13[0], VAR_21, &VAR_18, &VAR_19);
  }
  switch( VAR_10 ){
    case 0: {
      FUNC_0( VAR_12==1 );
      VAR_17 = VAR_1;
      VAR_14->isDesc = 0;
      VAR_14->bUnique = 1;
      break;
    }
    case 1: {
      u8 VAR_22[12];
      VAR_17 = VAR_2;
      VAR_14->isDesc = 0;
      VAR_14->bUnique = 0;
      if( VAR_20==VAR_6 ){
        sqlite3_int64 VAR_23 = FUNC_11(VAR_13[1]);
        if( VAR_23<0 ) VAR_23 = 0;
        VAR_14->nKey2 = FUNC_2(VAR_22, (sqlite3_uint64)VAR_23);
        VAR_14->pKey2 = FUNC_8( VAR_14->nKey2 );
        if( VAR_14->pKey2==0 ) return VAR_7;
        FUNC_6(VAR_14->pKey2, VAR_22, VAR_14->nKey2);
      }else{
        VAR_14->nKey2 = FUNC_10(VAR_13[1]);
        VAR_14->pKey2 = FUNC_8( VAR_14->nKey2 );
        if( VAR_14->pKey2==0 ) return VAR_7;
        if( VAR_20==VAR_4 ){
          FUNC_6(VAR_14->pKey2, FUNC_9(VAR_13[1]), VAR_14->nKey2);
        }else{
          FUNC_6(VAR_14->pKey2, FUNC_12(VAR_13[1]), VAR_14->nKey2);
        }
      }
      break;
    }
    case 2: {
      VAR_17 = VAR_2;
      VAR_14->isDesc = 0;
      VAR_14->bUnique = 0;
      break;
    }
    case 3: {
      VAR_17 = VAR_3;
      VAR_14->isDesc = 1;
      VAR_14->bUnique = 0;
      break;
    }
    default: {
      VAR_14->isDesc = 0;
      VAR_14->bUnique = 0;
      break;
    }
  }
  if( VAR_18 ){
    VAR_16 = FUNC_4(VAR_14->pLsmCur, VAR_18, VAR_19, VAR_17);
  }else{
    VAR_16 = FUNC_3(VAR_14->pLsmCur);
  }
  if( VAR_16==VAR_0 && FUNC_5(VAR_14->pLsmCur)!=0 ){
    VAR_14->atEof = 0;
  }
  return VAR_16==VAR_0 ? VAR_8 : VAR_5;
}
