
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int k; } ;
typedef TYPE_1__ expdesc ;
typedef int LexState ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char) ;

__attribute__((used)) static void FUNC_6 (LexState *VAR_1) {

  int VAR_2 = 0;
  int VAR_3;
  expdesc VAR_4;
  do {
    FUNC_3(VAR_1, FUNC_4(VAR_1), VAR_2++);
  } while (FUNC_5(VAR_1, ','));
  if (FUNC_5(VAR_1, '='))
    VAR_3 = FUNC_2(VAR_1, &VAR_4);
  else {
    VAR_4.k = VAR_0;
    VAR_3 = 0;
  }
  FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4);
  FUNC_1(VAR_1, VAR_2);
}
