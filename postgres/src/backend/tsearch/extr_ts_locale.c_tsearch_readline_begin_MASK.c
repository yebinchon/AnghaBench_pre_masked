
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* previous; void* arg; int callback; } ;
struct TYPE_4__ {char const* filename; TYPE_3__ cb; int * curline; scalar_t__ lineno; int * fp; } ;
typedef TYPE_1__ tsearch_readline_state ;


 int * FUNC_0 (char const*,char*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;

bool
FUNC_1(tsearch_readline_state *VAR_2,
        const char *VAR_3)
{
 if ((VAR_2->fp = FUNC_0(VAR_3, "r")) == ((void*)0))
  return 0;
 VAR_2->filename = VAR_3;
 VAR_2->lineno = 0;
 VAR_2->curline = ((void*)0);

 VAR_2->cb.callback = VAR_1;
 VAR_2->cb.arg = (void *) VAR_2;
 VAR_2->cb.previous = VAR_0;
 VAR_0 = &VAR_2->cb;
 return 1;
}
