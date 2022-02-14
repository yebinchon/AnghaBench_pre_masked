
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nargs; char* curarg; scalar_t__ curargsize; scalar_t__ curargalloc; int * ppargs; TYPE_1__* ppp; } ;
typedef TYPE_2__ macexpstackentry_t ;
struct TYPE_4__ {scalar_t__ expanding; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 macexpstackentry_t *VAR_0 = FUNC_3();

 FUNC_0(VAR_0->ppp->expanding == 0);

 VAR_0->ppargs[VAR_0->nargs-1] = FUNC_2(VAR_0->curarg ? VAR_0->curarg : "");
 FUNC_1(VAR_0->curarg);
 VAR_0->curargalloc = VAR_0->curargsize = 0;
 VAR_0->curarg = ((void*)0);
}
