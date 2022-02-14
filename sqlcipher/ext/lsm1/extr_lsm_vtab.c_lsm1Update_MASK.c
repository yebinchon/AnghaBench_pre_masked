
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int val ;
typedef int u8 ;
typedef int sqlite_int64 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int r ;
struct TYPE_6__ {int nVal; int pDb; int keyType; } ;
typedef TYPE_1__ lsm1_vtab ;
struct TYPE_7__ {int a; int n; scalar_t__ errNoMem; } ;
typedef TYPE_2__ lsm1_vblob ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (int ,int *,unsigned char*,int const**,int*) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (TYPE_2__*,...) ;
 int FUNC_3 (TYPE_2__*,scalar_t__ const) ;
 int FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (int ,int const*,int,int ,int ) ;
 scalar_t__ FUNC_6 (int const*,int const*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (int ) ;
 int* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 double FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

int FUNC_15(
  sqlite3_vtab *VAR_4,
  int VAR_5,
  sqlite3_value **VAR_6,
  sqlite_int64 *VAR_7
){
  lsm1_vtab *VAR_8 = (lsm1_vtab*)VAR_4;
  int VAR_9, VAR_10;
  int VAR_11;
  int VAR_12 = VAR_0;
  const u8 *VAR_13, *VAR_14;
  unsigned char VAR_15[16];
  unsigned char VAR_16[16];
  lsm1_vblob VAR_17;

  if( VAR_5==1 ){

    FUNC_0(VAR_8->keyType, VAR_6[0], VAR_15, &VAR_13, &VAR_9);
    FUNC_4(VAR_8->pDb, VAR_13, VAR_9);
    return VAR_3;
  }

  if( FUNC_14(VAR_6[0])!=129 ){

    FUNC_0(VAR_8->keyType, VAR_6[0], VAR_15, &VAR_13, &VAR_9);
    FUNC_0(VAR_8->keyType, VAR_6[1], VAR_16, &VAR_14, &VAR_10);
    if( VAR_9!=VAR_10 || FUNC_6(VAR_13, VAR_14, VAR_9)!=0 ){

      FUNC_4(VAR_8->pDb, VAR_13, VAR_9);
    }

  }




  if( FUNC_14(VAR_6[3+VAR_8->nVal])!=129 ){
    return VAR_3;
  }
  FUNC_0(VAR_8->keyType, VAR_6[2], VAR_15, &VAR_13, &VAR_9);
  FUNC_7(&VAR_17, 0, sizeof(VAR_17));
  for(VAR_11=0; VAR_11<VAR_8->nVal; VAR_11++){
    sqlite3_value *VAR_18 = VAR_6[3+VAR_11];
    u8 VAR_19 = FUNC_14(VAR_18);
    switch( VAR_19 ){
      case 129: {
        FUNC_3(&VAR_17, 129);
        break;
      }
      case 130: {
        sqlite3_int64 VAR_20 = FUNC_12(VAR_18);
        if( VAR_20>=0 && VAR_20<=240/6 ){
          FUNC_3(&VAR_17, VAR_20*6);
        }else{
          int VAR_21 = FUNC_1(VAR_16, VAR_20);
          FUNC_3(&VAR_17, 130 + VAR_21*6);
          FUNC_2(&VAR_17, VAR_16, VAR_21);
        }
        break;
      }
      case 131: {
        double VAR_22 = FUNC_11(VAR_18);
        FUNC_3(&VAR_17, 131 + 8*6);
        FUNC_2(&VAR_17, (u8*)&VAR_22, sizeof(VAR_22));
        break;
      }
      case 132: {
        int VAR_23 = FUNC_10(VAR_18);
        FUNC_3(&VAR_17, VAR_23*6 + 132);
        FUNC_2(&VAR_17, FUNC_9(VAR_18), VAR_23);
        break;
      }
      case 128: {
        int VAR_24 = FUNC_10(VAR_18);
        FUNC_3(&VAR_17, VAR_24*6 + 128);
        FUNC_2(&VAR_17, FUNC_13(VAR_18), VAR_24);
        break;
      }
    }
  }
  if( VAR_17.errNoMem ){
    return VAR_2;
  }
  VAR_12 = FUNC_5(VAR_8->pDb, VAR_13, VAR_9, VAR_17.a, VAR_17.n);
  FUNC_8(VAR_17.a);
  return VAR_12==VAR_0 ? VAR_3 : VAR_1;
}
