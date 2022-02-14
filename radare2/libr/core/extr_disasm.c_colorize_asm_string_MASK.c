
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int addr; } ;
struct TYPE_14__ {int print; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_13__ {char* opstr; int color_num; int color_reg; TYPE_2__* core; TYPE_1__ analop; int colorop; int show_color; int vat; scalar_t__ show_color_args; int at; int asmop; } ;
struct TYPE_12__ {int print; int anal; } ;
typedef TYPE_3__ RDisasmState ;
typedef TYPE_4__ RCore ;
typedef TYPE_5__ RAnalFunction ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 char* FUNC_7 (int ,char*,int ,int ,int,int ) ;
 char* FUNC_8 (char*,int) ;
 char* FUNC_9 (char*,char*,char*) ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static char *FUNC_12(RCore *VAR_2, RDisasmState *VAR_3, bool VAR_4) {
 char *VAR_5 = VAR_3->opstr? VAR_3->opstr: FUNC_3 (&VAR_3->asmop);
 char *VAR_6 = FUNC_5 (VAR_3->core->anal, VAR_1, VAR_3->at);
 bool VAR_7 = FUNC_2 (VAR_3) ? 1 : ((VAR_6 && *VAR_6) ? 1 : 0);
 FUNC_1 (VAR_6);
 RAnalFunction *VAR_8 = VAR_3->show_color_args ? FUNC_0 (VAR_3, VAR_3->vat, VAR_0) : ((void*)0);

 if (!VAR_3->show_color || !VAR_3->colorop) {
  return FUNC_10 (VAR_5);
 }

 if (VAR_4) {
  FUNC_4 (FUNC_6 (VAR_2->print, VAR_3->analop.type));
 }

 char *VAR_9 = FUNC_11 (VAR_5, "||");
 if (VAR_9) {
  char *VAR_10, *VAR_11 = FUNC_8 (VAR_5, VAR_9 - VAR_5);
  char *VAR_12, *VAR_13 = FUNC_10 (VAR_9 + 2);

  VAR_10 = FUNC_7 (VAR_3->core->print, VAR_11, VAR_3->color_reg, VAR_3->color_num, VAR_7, VAR_8 ? VAR_8->addr : 0);
  FUNC_1 (VAR_11);
  VAR_12 = FUNC_7 (VAR_3->core->print, VAR_13, VAR_3->color_reg, VAR_3->color_num, VAR_7, VAR_8 ? VAR_8->addr : 0);
  FUNC_1 (VAR_13);
  if (!VAR_10) {
   VAR_10 = FUNC_10 ("");
  }
  if (!VAR_12) {
   VAR_12 = FUNC_10 ("");
  }
  VAR_5 = FUNC_9 ("%s||%s", VAR_10, VAR_12);
  FUNC_1 (VAR_10);
  FUNC_1 (VAR_12);
  return VAR_5;
 }
 return FUNC_7 (VAR_3->core->print, VAR_5, VAR_3->color_reg, VAR_3->color_num, VAR_7, VAR_8 ? VAR_8->addr : 0);
}
