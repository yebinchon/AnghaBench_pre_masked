
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3 ;
typedef int i64 ;
struct TYPE_8__ {int * pCursor; } ;
struct TYPE_9__ {scalar_t__ eCurType; TYPE_1__ uc; } ;
typedef TYPE_2__ VdbeCursor ;
typedef int UnpackedRecord ;
struct TYPE_10__ {int z; int n; } ;
typedef TYPE_3__ Mem ;
typedef int BtCursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,int *,int ) ;

int FUNC_7(
  sqlite3 *VAR_3,
  VdbeCursor *VAR_4,
  UnpackedRecord *VAR_5,
  int *VAR_6
){
  i64 VAR_7 = 0;
  int VAR_8;
  BtCursor *VAR_9;
  Mem VAR_10;

  FUNC_0( VAR_4->eCurType==VAR_0 );
  VAR_9 = VAR_4->uc.pCursor;
  FUNC_0( FUNC_1(VAR_9) );
  VAR_7 = FUNC_2(VAR_9);


  if( VAR_7<=0 || VAR_7>0x7fffffff ){
    *VAR_6 = 0;
    return VAR_1;
  }
  FUNC_4(&VAR_10, VAR_3, 0);
  VAR_8 = FUNC_3(VAR_9, 0, (u32)VAR_7, &VAR_10);
  if( VAR_8 ){
    return VAR_8;
  }
  *VAR_6 = FUNC_6(VAR_10.n, VAR_10.z, VAR_5, 0);
  FUNC_5(&VAR_10);
  return VAR_2;
}
