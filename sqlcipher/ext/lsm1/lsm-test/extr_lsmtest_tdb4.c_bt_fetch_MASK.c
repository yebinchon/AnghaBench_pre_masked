
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int bt_cursor ;
typedef int TestDb ;
struct TYPE_2__ {int nBuffer; int pBt; int * aBuffer; scalar_t__ bFastInsert; } ;
typedef TYPE_1__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,void const*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int,void const**,int*) ;
 int FUNC_8 (int ,int ,int **) ;
 int FUNC_9 (int *,void*,int,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(
  TestDb *VAR_5,
  void *VAR_6, int VAR_7,
  void **VAR_8, int *VAR_9
){
  BtDb *VAR_10 = (BtDb*)VAR_5;
  bt_cursor *VAR_11 = 0;
  int VAR_12;
  int VAR_13 = VAR_4;

  VAR_12 = FUNC_10(VAR_10->pBt);
  if( VAR_12==0 ){
    VAR_13 = FUNC_3(VAR_10->pBt, 1);
    if( VAR_13!=VAR_4 ) return VAR_13;
  }

  if( VAR_10->bFastInsert ) FUNC_5(VAR_10->pBt, VAR_0, 0);
  VAR_13 = FUNC_8(VAR_10->pBt, 0, &VAR_11);
  if( VAR_13==VAR_4 ){
    VAR_13 = FUNC_9(VAR_11, VAR_6, VAR_7, VAR_1);
    if( VAR_13==VAR_4 ){
      const void *VAR_14 = 0;
      int VAR_15 = 0;
      VAR_13 = FUNC_7(VAR_11, 0, -1, &VAR_14, &VAR_15);
      if( VAR_13==VAR_4 ){
        if( VAR_15>VAR_10->nBuffer ){
          FUNC_0(VAR_10->aBuffer);
          VAR_10->aBuffer = (u8*)FUNC_1(VAR_15*2);
          VAR_10->nBuffer = VAR_15*2;
        }
        FUNC_2(VAR_10->aBuffer, VAR_14, VAR_15);
        *VAR_9 = VAR_15;
        *VAR_8 = (void*)(VAR_10->aBuffer);
      }

    }else if( VAR_13==VAR_2 || VAR_13==VAR_3 ){
      *VAR_8 = 0;
      *VAR_9 = -1;
      VAR_13 = VAR_4;
    }
    FUNC_6(VAR_11);
  }

  if( VAR_12==0 ) FUNC_4(VAR_10->pBt, 0);
  return VAR_13;
}
