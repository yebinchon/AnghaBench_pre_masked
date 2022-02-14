
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * fs; } ;
typedef TYPE_1__ LexState ;
typedef int FuncState ;
typedef int BlockCnt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int,int ,int) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void FUNC_12 (LexState *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10) {

  BlockCnt VAR_11;
  FuncState *VAR_12 = VAR_6->fs;
  int VAR_13, VAR_14;
  FUNC_0(VAR_6, 3);
  FUNC_2(VAR_6, VAR_5);
  VAR_13 = VAR_10 ? FUNC_6(VAR_12, VAR_2, VAR_7, VAR_0) : FUNC_8(VAR_12);
  FUNC_3(VAR_12, &VAR_11, 0);
  FUNC_0(VAR_6, VAR_9);
  FUNC_11(VAR_12, VAR_9);
  FUNC_1(VAR_6);
  FUNC_4(VAR_12);
  FUNC_10(VAR_12, VAR_13);
  if (VAR_10)
    VAR_14 = FUNC_6(VAR_12, VAR_1, VAR_7, VAR_0);
  else {
    FUNC_5(VAR_12, VAR_3, VAR_7, 0, VAR_9);
    FUNC_7(VAR_12, VAR_8);
    VAR_14 = FUNC_6(VAR_12, VAR_4, VAR_7 + 2, VAR_0);
  }
  FUNC_9(VAR_12, VAR_14, VAR_13 + 1);
  FUNC_7(VAR_12, VAR_8);
}
