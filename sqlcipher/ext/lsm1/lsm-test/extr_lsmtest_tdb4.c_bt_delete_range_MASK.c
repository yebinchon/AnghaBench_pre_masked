
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bt_cursor ;
typedef int TestDb ;
struct TYPE_4__ {int pBt; scalar_t__ bFastInsert; } ;
typedef TYPE_1__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (void*,void const*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void const**,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int **) ;
 int FUNC_10 (int *,void*,int,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(
  TestDb *VAR_5,
  void *VAR_6, int VAR_7,
  void *VAR_8, int VAR_9
){
  BtDb *VAR_10 = (BtDb*)VAR_5;
  bt_cursor *VAR_11 = 0;
  int VAR_12 = VAR_4;
  int VAR_13;

  VAR_12 = FUNC_2(VAR_10, 2, &VAR_13);
  if( VAR_12==VAR_4 ){
    if( VAR_10->bFastInsert ) FUNC_5(VAR_10->pBt, VAR_0, 0);
    VAR_12 = FUNC_9(VAR_10->pBt, 0, &VAR_11);
  }
  while( VAR_12==VAR_4 ){
    const void *VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17;

    VAR_12 = FUNC_10(VAR_11, VAR_6, VAR_7, VAR_1);
    if( VAR_12==VAR_2 ) VAR_12 = VAR_4;
    if( VAR_12!=VAR_4 ) break;

    VAR_12 = FUNC_7(VAR_11, &VAR_14, &VAR_15);
    if( VAR_12!=VAR_4 ) break;

    VAR_16 = FUNC_0(VAR_15, VAR_7);
    VAR_17 = FUNC_4(VAR_6, VAR_14, VAR_16);
    FUNC_1( VAR_17<0 || (VAR_17==0 && VAR_7<=VAR_15) );
    if( VAR_17==0 && VAR_7==VAR_15 ){
      VAR_12 = FUNC_8(VAR_11);
      if( VAR_12!=VAR_4 ) break;
      VAR_12 = FUNC_7(VAR_11, &VAR_14, &VAR_15);
      if( VAR_12!=VAR_4 ) break;
    }

    VAR_16 = FUNC_0(VAR_15, VAR_9);
    VAR_17 = FUNC_4(VAR_8, VAR_14, VAR_16);
    if( VAR_17<0 || (VAR_17==0 && VAR_9<=VAR_15) ) break;

    VAR_12 = FUNC_11(VAR_11);
  }
  if( VAR_12==VAR_3 ) VAR_12 = VAR_4;

  FUNC_6(VAR_11);

  VAR_12 = FUNC_3(VAR_10, VAR_13, VAR_12);
  return VAR_12;
}
