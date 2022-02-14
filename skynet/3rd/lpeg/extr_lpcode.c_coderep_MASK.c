
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cs; } ;
typedef int TTree ;
typedef int CompileState ;
typedef TYPE_1__ Charset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ,int,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__ const*) ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;
 scalar_t__ FUNC_11 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_12 (CompileState *VAR_6, TTree *VAR_7, int VAR_8,
                     const Charset *VAR_9) {
  Charset VAR_10;
  if (FUNC_11(VAR_7, &VAR_10)) {
    FUNC_1(VAR_6, VAR_3, 0);
    FUNC_0(VAR_6, VAR_10.cs);
  }
  else {
    int VAR_11 = FUNC_6(VAR_7, VAR_5, &VAR_10);
    if (FUNC_8(VAR_7) || (!VAR_11 && FUNC_5(&VAR_10, VAR_9))) {

      int VAR_12;
      int VAR_13 = FUNC_4(VAR_6, &VAR_10, 0);
      FUNC_3(VAR_6, VAR_7, 0, VAR_13, VAR_5);
      VAR_12 = FUNC_2(VAR_6, VAR_1);
      FUNC_9(VAR_6, VAR_13);
      FUNC_10(VAR_6, VAR_12, VAR_13);
    }
    else {


      int VAR_14, VAR_15;
      int VAR_16 = FUNC_4(VAR_6, &VAR_10, VAR_11);
      int VAR_17 = VAR_4;
      if (VAR_8)
        FUNC_9(VAR_6, FUNC_2(VAR_6, VAR_2));
      else
        VAR_17 = FUNC_2(VAR_6, VAR_0);
      VAR_15 = FUNC_7(VAR_6);
      FUNC_3(VAR_6, VAR_7, 0, VAR_4, VAR_5);
      VAR_14 = FUNC_2(VAR_6, VAR_2);
      FUNC_10(VAR_6, VAR_14, VAR_15);
      FUNC_9(VAR_6, VAR_17);
      FUNC_9(VAR_6, VAR_16);
    }
  }
}
