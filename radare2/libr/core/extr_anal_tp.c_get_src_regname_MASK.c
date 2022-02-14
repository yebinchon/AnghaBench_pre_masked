
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_13__ {int bits; int reg; } ;
struct TYPE_12__ {int esil; } ;
struct TYPE_11__ {TYPE_4__* anal; } ;
struct TYPE_10__ {int size; } ;
typedef TYPE_1__ RRegItem ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RAnalOp ;
typedef TYPE_4__ RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ,int) ;
 char* FUNC_4 (int ,char*) ;
 TYPE_1__* FUNC_5 (int ,char*,int) ;
 char const* FUNC_6 (int *) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static void FUNC_10(RCore *VAR_2, ut64 VAR_3, char *VAR_4, int VAR_5) {
 RAnal *VAR_6 = VAR_2->anal;
 RAnalOp *VAR_7 = FUNC_3 (VAR_2, VAR_3, VAR_1 | VAR_0);
 if (!VAR_7) {
  return;
 }
 char *VAR_8 = FUNC_8 (FUNC_6 (&VAR_7->esil));
 char *VAR_9 = FUNC_7 (VAR_8, ',');
 if (VAR_9) {
  *VAR_9 = '\0';
 }
 FUNC_1 (VAR_4, 0, VAR_5);
 RRegItem *VAR_10 = FUNC_5 (VAR_6->reg, VAR_8, -1);
 if (VAR_10) {
  if ((VAR_6->bits == 64) && (VAR_10->size == 32)) {
   const char *VAR_11 = FUNC_4 (VAR_6->reg, VAR_8);
   if (VAR_11) {
    FUNC_0 (VAR_8);
    VAR_8 = FUNC_8 (VAR_11);
   }
  }
  FUNC_9 (VAR_4, VAR_8, VAR_5 - 1);
 }
 FUNC_0 (VAR_8);
 FUNC_2 (VAR_7);
}
