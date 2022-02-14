
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int filename; int gccounter; TYPE_2__* gcfun; } ;
typedef TYPE_1__ js_State ;
struct TYPE_19__ {int line; int script; int strict; char* name; int filename; struct TYPE_19__* gcnext; scalar_t__ gcmark; } ;
typedef TYPE_2__ js_Function ;
struct TYPE_20__ {char* string; } ;
typedef TYPE_3__ js_Ast ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static js_Function *FUNC_4(js_State *VAR_0, int VAR_1, js_Ast *VAR_2, js_Ast *VAR_3, js_Ast *VAR_4, int VAR_5, int VAR_6)
{
 js_Function *VAR_7 = FUNC_2(VAR_0, sizeof *VAR_7);
 FUNC_3(VAR_7, 0, sizeof *VAR_7);
 VAR_7->gcmark = 0;
 VAR_7->gcnext = VAR_0->gcfun;
 VAR_0->gcfun = VAR_7;
 ++VAR_0->gccounter;

 VAR_7->filename = FUNC_1(VAR_0, VAR_0->filename);
 VAR_7->line = VAR_1;
 VAR_7->script = VAR_5;
 VAR_7->strict = VAR_6;
 VAR_7->name = VAR_2 ? VAR_2->string : "";

 FUNC_0(VAR_0, VAR_7, VAR_2, VAR_3, VAR_4);

 return VAR_7;
}
