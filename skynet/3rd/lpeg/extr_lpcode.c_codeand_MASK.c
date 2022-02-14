
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TTree ;
typedef int CompileState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6 (CompileState *VAR_6, TTree *VAR_7, int VAR_8) {
  int VAR_9 = FUNC_3(VAR_7);
  if (VAR_9 >= 0 && VAR_9 <= VAR_4 && !FUNC_4(VAR_7)) {
    FUNC_2(VAR_6, VAR_7, 0, VAR_8, VAR_5);
    if (VAR_9 > 0)
      FUNC_0(VAR_6, VAR_1, VAR_9);
  }
  else {
    int VAR_10;
    int VAR_11 = FUNC_1(VAR_6, VAR_2);
    FUNC_2(VAR_6, VAR_7, 0, VAR_8, VAR_5);
    VAR_10 = FUNC_1(VAR_6, VAR_0);
    FUNC_5(VAR_6, VAR_11);
    FUNC_0(VAR_6, VAR_3, 0);
    FUNC_5(VAR_6, VAR_10);
  }
}
