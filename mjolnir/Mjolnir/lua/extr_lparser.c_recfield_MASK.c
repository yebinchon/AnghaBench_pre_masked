
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct ConsControl {TYPE_3__* t; int nh; } ;
typedef int expdesc ;
struct TYPE_18__ {int freereg; } ;
struct TYPE_14__ {scalar_t__ token; } ;
struct TYPE_17__ {TYPE_1__ t; TYPE_5__* fs; } ;
struct TYPE_15__ {int info; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
typedef TYPE_4__ LexState ;
typedef TYPE_5__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,char) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int,int) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_7 (LexState *VAR_3, struct ConsControl *VAR_4) {

  FuncState *VAR_5 = VAR_3->fs;
  int VAR_6 = VAR_3->fs->freereg;
  expdesc VAR_7, VAR_8;
  int VAR_9;
  if (VAR_3->t.token == VAR_2) {
    FUNC_0(VAR_5, VAR_4->nh, VAR_0, "items in a constructor");
    FUNC_1(VAR_3, &VAR_7);
  }
  else
    FUNC_6(VAR_3, &VAR_7);
  VAR_4->nh++;
  FUNC_2(VAR_3, '=');
  VAR_9 = FUNC_5(VAR_5, &VAR_7);
  FUNC_3(VAR_3, &VAR_8);
  FUNC_4(VAR_5, VAR_1, VAR_4->t->u.info, VAR_9, FUNC_5(VAR_5, &VAR_8));
  VAR_5->freereg = VAR_6;
}
