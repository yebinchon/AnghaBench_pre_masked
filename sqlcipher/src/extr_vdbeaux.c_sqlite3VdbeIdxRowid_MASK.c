
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int sqlite3 ;
typedef int i64 ;
struct TYPE_7__ {int i; } ;
struct TYPE_8__ {int n; scalar_t__ szMalloc; TYPE_1__ u; int * z; } ;
typedef TYPE_2__ Mem ;
typedef int BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* VAR_3 ;
 int FUNC_4 (int *,int ,int,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int,TYPE_2__*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(sqlite3 *VAR_4, BtCursor *VAR_5, i64 *VAR_6){
  i64 VAR_7 = 0;
  int VAR_8;
  u32 VAR_9;
  u32 VAR_10;
  u32 VAR_11;
  Mem VAR_12, VAR_13;






  FUNC_0( FUNC_2(VAR_5) );
  VAR_7 = FUNC_3(VAR_5);
  FUNC_0( (VAR_7 & VAR_1)==(u64)VAR_7 );


  FUNC_5(&VAR_12, VAR_4, 0);
  VAR_8 = FUNC_4(VAR_5, 0, (u32)VAR_7, &VAR_12);
  if( VAR_8 ){
    return VAR_8;
  }


  (void)FUNC_1((u8*)VAR_12.z, VAR_9);
  FUNC_8( VAR_9==3 );
  FUNC_8( VAR_9==VAR_12.n );
  FUNC_8( VAR_9>0x7fffffff );
  FUNC_0( VAR_12.n>=0 );
  if( FUNC_9(VAR_9<3 || VAR_9>(unsigned)VAR_12.n) ){
    goto idx_rowid_corruption;
  }



  (void)FUNC_1((u8*)&VAR_12.z[VAR_9-1], VAR_10);
  FUNC_8( VAR_10==1 );
  FUNC_8( VAR_10==2 );
  FUNC_8( VAR_10==3 );
  FUNC_8( VAR_10==4 );
  FUNC_8( VAR_10==5 );
  FUNC_8( VAR_10==6 );
  FUNC_8( VAR_10==8 );
  FUNC_8( VAR_10==9 );
  if( FUNC_9(VAR_10<1 || VAR_10>9 || VAR_10==7) ){
    goto idx_rowid_corruption;
  }
  VAR_11 = VAR_3[VAR_10];
  FUNC_8( (u32)VAR_12.n==VAR_9+VAR_11 );
  if( FUNC_9((u32)VAR_12.n<VAR_9+VAR_11) ){
    goto idx_rowid_corruption;
  }


  FUNC_7((u8*)&VAR_12.z[VAR_12.n-VAR_11], VAR_10, &VAR_13);
  *VAR_6 = VAR_13.u.i;
  FUNC_6(&VAR_12);
  return VAR_2;



idx_rowid_corruption:
  FUNC_8( VAR_12.szMalloc!=0 );
  FUNC_6(&VAR_12);
  return VAR_0;
}
