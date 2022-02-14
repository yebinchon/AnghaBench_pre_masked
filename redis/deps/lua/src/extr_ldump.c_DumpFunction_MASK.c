
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ strip; } ;
struct TYPE_14__ {int maxstacksize; int is_vararg; int numparams; int nups; int lastlinedefined; int linedefined; int const* source; } ;
typedef int TString ;
typedef TYPE_1__ Proto ;
typedef TYPE_2__ DumpState ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int const*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(const Proto* VAR_0, const TString* VAR_1, DumpState* VAR_2)
{
 FUNC_5((VAR_0->source==VAR_1 || VAR_2->strip) ? ((void*)0) : VAR_0->source,VAR_2);
 FUNC_4(VAR_0->linedefined,VAR_2);
 FUNC_4(VAR_0->lastlinedefined,VAR_2);
 FUNC_0(VAR_0->nups,VAR_2);
 FUNC_0(VAR_0->numparams,VAR_2);
 FUNC_0(VAR_0->is_vararg,VAR_2);
 FUNC_0(VAR_0->maxstacksize,VAR_2);
 FUNC_1(VAR_0,VAR_2);
 FUNC_2(VAR_0,VAR_2);
 FUNC_3(VAR_0,VAR_2);
}
