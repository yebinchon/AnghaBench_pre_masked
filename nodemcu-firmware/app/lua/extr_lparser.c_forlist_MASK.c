
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_14__ {int freereg; } ;
struct TYPE_13__ {int linenumber; TYPE_2__* fs; } ;
typedef int TString ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ FuncState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int * FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char) ;

__attribute__((used)) static void FUNC_9 (LexState *VAR_1, TString *VAR_2) {

  FuncState *VAR_3 = VAR_1->fs;
  expdesc VAR_4;
  int VAR_5 = 0;
  int VAR_6;
  int VAR_7 = VAR_3->freereg;

  FUNC_6(VAR_1, "(for generator)", VAR_5++);
  FUNC_6(VAR_1, "(for state)", VAR_5++);
  FUNC_6(VAR_1, "(for control)", VAR_5++);

  FUNC_5(VAR_1, VAR_2, VAR_5++);
  while (FUNC_8(VAR_1, ','))
    FUNC_5(VAR_1, FUNC_7(VAR_1), VAR_5++);
  FUNC_1(VAR_1, VAR_0);
  VAR_6 = VAR_1->linenumber;
  FUNC_0(VAR_1, 3, FUNC_2(VAR_1, &VAR_4), &VAR_4);
  FUNC_4(VAR_3, 3);
  FUNC_3(VAR_1, VAR_7, VAR_6, VAR_5 - 3, 0);
}
