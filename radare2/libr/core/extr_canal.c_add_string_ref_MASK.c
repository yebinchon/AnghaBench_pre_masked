
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_9__ {TYPE_1__* esil; } ;
struct TYPE_8__ {TYPE_3__* anal; int flags; } ;
struct TYPE_7__ {scalar_t__ address; } ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__*,scalar_t__,int*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,char*,scalar_t__,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,char,scalar_t__,int ,char*) ;
 int FUNC_7 (char*,int) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(RCore *VAR_3, ut64 VAR_4, ut64 VAR_5) {
 int VAR_6 = 0;
 if (VAR_5 == VAR_2 || !VAR_5) {
  return;
 }
 if (!VAR_4 || VAR_4 == VAR_2) {
  VAR_4 = VAR_3->anal->esil->address;
 }
 char *VAR_7 = FUNC_1 (VAR_3, VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_2 (VAR_3->anal, VAR_4, VAR_5, VAR_0);
  FUNC_7 (VAR_7, -1);
  char *VAR_8 = FUNC_8 ("str.%s", VAR_7);
  FUNC_5 (VAR_3->flags, VAR_1);
  FUNC_3 (VAR_3->flags, VAR_8, VAR_5, VAR_6);
  FUNC_4 (VAR_3->flags);
  FUNC_6 (VAR_3->anal, 's', VAR_5, VAR_5 + VAR_6, VAR_7);
  FUNC_0 (VAR_7);
 }
}
