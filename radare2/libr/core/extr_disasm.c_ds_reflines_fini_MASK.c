
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * reflines; } ;
struct TYPE_6__ {int prev_line_col; int refline2; int refline; TYPE_1__* core; } ;
struct TYPE_5__ {TYPE_3__* anal; } ;
typedef TYPE_2__ RDisasmState ;
typedef TYPE_3__ RAnal ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(RDisasmState *VAR_0) {
 RAnal *VAR_1 = VAR_0->core->anal;
 FUNC_1 (VAR_1->reflines);
 VAR_1->reflines = ((void*)0);
 FUNC_0 (VAR_0->refline);
 FUNC_0 (VAR_0->refline2);
 FUNC_0 (VAR_0->prev_line_col);
}
