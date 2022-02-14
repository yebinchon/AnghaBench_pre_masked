
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * reflines; } ;
struct TYPE_8__ {int show_lines_call; int linesout; int l; int len; int buf; int addr; scalar_t__ pj; scalar_t__ show_lines_bb; TYPE_1__* core; } ;
struct TYPE_7__ {TYPE_3__* anal; } ;
typedef TYPE_2__ RDisasmState ;
typedef TYPE_3__ RAnal ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_3__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(RDisasmState *VAR_2) {
 RAnal *VAR_3 = VAR_2->core->anal;

 VAR_1 = VAR_0;

 if (VAR_2->show_lines_bb || VAR_2->pj) {
  FUNC_0 (VAR_2);
  VAR_3->reflines = FUNC_1 (VAR_3,
   VAR_2->addr, VAR_2->buf, VAR_2->len, VAR_2->l,
   VAR_2->linesout, VAR_2->show_lines_call);
 } else {
  FUNC_2 (VAR_3->reflines);
  VAR_3->reflines = ((void*)0);
 }
}
