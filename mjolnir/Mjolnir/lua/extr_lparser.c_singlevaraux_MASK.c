
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ k; } ;
typedef TYPE_1__ expdesc ;
struct TYPE_12__ {struct TYPE_12__* prev; } ;
typedef int TString ;
typedef TYPE_2__ FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_5 (FuncState *VAR_3, TString *VAR_4, expdesc *VAR_5, int VAR_6) {
  if (VAR_3 == ((void*)0))
    FUNC_0(VAR_5, VAR_2, 0);
  else {
    int VAR_7 = FUNC_4(VAR_3, VAR_4);
    if (VAR_7 >= 0) {
      FUNC_0(VAR_5, VAR_0, VAR_7);
      if (!VAR_6)
        FUNC_1(VAR_3, VAR_7);
    }
    else {
      int VAR_8 = FUNC_3(VAR_3, VAR_4);
      if (VAR_8 < 0) {
        FUNC_5(VAR_3->prev, VAR_4, VAR_5, 0);
        if (VAR_5->k == VAR_2)
          return;

        VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5);
      }
      FUNC_0(VAR_5, VAR_1, VAR_8);
    }
  }
}
