
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_16__ {int reg; } ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {scalar_t__ ret; } ;
struct TYPE_13__ {TYPE_4__* anal; } ;
typedef int RRegItem ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAnalHint ;
typedef TYPE_3__ RAnalFunction ;
typedef TYPE_4__ RAnal ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (TYPE_4__*,int ) ;
 char* FUNC_1 (TYPE_4__*,char const*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_4__*,int ) ;
 int * FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_7 (RCore *VAR_1, ut64 VAR_2) {
 RAnal *VAR_3 = VAR_1->anal;
 RAnalHint *VAR_4 = FUNC_4 (VAR_3, VAR_2);
 RAnalFunction *VAR_5 = FUNC_2 (VAR_3, VAR_2, 0);

 if (!VAR_4 || !VAR_5 || !VAR_5->name) {
  goto beach;
 }
 if (VAR_4->ret == VAR_0) {
  goto beach;
 }
 const char *VAR_6 = FUNC_0 (VAR_1->anal, VAR_5->name);
 const char *VAR_7 = FUNC_1 (VAR_3, VAR_6);
 if (VAR_7) {
  RRegItem *VAR_8 = FUNC_5 (VAR_3->reg, VAR_7, -1);
  if (VAR_8) {
   FUNC_6 (VAR_3->reg, VAR_8, VAR_4->ret);
  }
 }
beach:
 FUNC_3 (VAR_4);
 return;
}
