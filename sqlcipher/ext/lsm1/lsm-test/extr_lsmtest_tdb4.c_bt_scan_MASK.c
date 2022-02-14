
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
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (void*,void const*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int,void const**,int*) ;
 int FUNC_7 (int *,void const**,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int **) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,void*,int,int ) ;

__attribute__((used)) static int FUNC_13(
  TestDb *VAR_6,
  void *VAR_7,
  int VAR_8,
  void *VAR_9, int VAR_10,
  void *VAR_11, int VAR_12,
  void (*VAR_13)(void *, void *, int , void *, int)
){
  BtDb *VAR_14 = (BtDb*)VAR_6;
  bt_cursor *VAR_15 = 0;
  int VAR_16;
  int VAR_17;

  VAR_16 = FUNC_1(VAR_14, 1, &VAR_17);

  if( VAR_16==VAR_5 ){
    if( VAR_14->bFastInsert ) FUNC_4(VAR_14->pBt, VAR_0, 0);
    VAR_16 = FUNC_10(VAR_14->pBt, 0, &VAR_15);
  }
  if( VAR_16==VAR_5 ){
    if( VAR_8 ){
      if( VAR_11 ){
        VAR_16 = FUNC_12(VAR_15, VAR_11, VAR_12, VAR_2);
      }else{
        VAR_16 = FUNC_8(VAR_15);
      }
    }else{
      VAR_16 = FUNC_12(VAR_15, VAR_9, VAR_10, VAR_1);
    }
    if( VAR_16==VAR_3 ) VAR_16 = VAR_5;

    while( VAR_16==VAR_5 ){
      const void *VAR_18 = 0; int VAR_19 = 0;
      const void *VAR_20 = 0; int VAR_21 = 0;

      VAR_16 = FUNC_7(VAR_15, &VAR_18, &VAR_19);
      if( VAR_16==VAR_5 ){
        VAR_16 = FUNC_6(VAR_15, 0, -1, &VAR_20, &VAR_21);
      }

      if( VAR_16!=VAR_5 ) break;
      if( VAR_8 ){
        if( VAR_9 ){
          int VAR_22;
          int VAR_23 = FUNC_0(VAR_19, VAR_10);
          VAR_22 = FUNC_3(VAR_9, VAR_18, VAR_23);
          if( VAR_22>0 || (VAR_22==0 && VAR_19<VAR_10) ) break;
        }
      }else{
        if( VAR_11 ){
          int VAR_24;
          int VAR_25 = FUNC_0(VAR_19, VAR_12);
          VAR_24 = FUNC_3(VAR_11, VAR_18, VAR_25);
          if( VAR_24<0 || (VAR_24==0 && VAR_19>VAR_12) ) break;
        }
      }

      VAR_13(VAR_7, (void*)VAR_18, VAR_19, (void*)VAR_20, VAR_21);
      if( VAR_8 ){
        VAR_16 = FUNC_11(VAR_15);
      }else{
        VAR_16 = FUNC_9(VAR_15);
      }
    }
    if( VAR_16==VAR_4 ) VAR_16 = VAR_5;

    FUNC_5(VAR_15);
  }

  VAR_16 = FUNC_2(VAR_14, VAR_17, VAR_16);
  return VAR_16;
}
