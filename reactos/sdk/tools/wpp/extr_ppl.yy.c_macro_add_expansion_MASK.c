
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char** ppargs; int nargs; char* curarg; scalar_t__ curargsize; scalar_t__ curargalloc; TYPE_1__* ppp; } ;
typedef TYPE_2__ macexpstackentry_t ;
struct TYPE_7__ {char* input; int line_number; } ;
struct TYPE_5__ {scalar_t__ expanding; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int,int,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 char* FUNC_3 (char*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 macexpstackentry_t *VAR_3 = FUNC_4();

 FUNC_0(VAR_3->ppp->expanding == 0);

 VAR_3->ppargs[VAR_3->nargs-1] = FUNC_3(VAR_3->curarg ? VAR_3->curarg : "");
 FUNC_2(VAR_3->curarg);
 VAR_3->curargalloc = VAR_3->curargsize = 0;
 VAR_3->curarg = ((void*)0);

 if(VAR_0)
  FUNC_1(VAR_2, "macro_add_expansion: %s:%d: %d -> '%s'\n",
   VAR_1.input,
   VAR_1.line_number,
   VAR_3->nargs-1,
   VAR_3->ppargs[VAR_3->nargs-1] ? VAR_3->ppargs[VAR_3->nargs-1] : "");
}
