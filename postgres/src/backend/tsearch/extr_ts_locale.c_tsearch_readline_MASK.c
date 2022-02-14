
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* curline; int fp; int lineno; } ;
typedef TYPE_1__ tsearch_readline_state ;


 char* FUNC_0 (int ) ;

char *
FUNC_1(tsearch_readline_state *VAR_0)
{
 char *VAR_1;

 VAR_0->lineno++;
 VAR_0->curline = ((void*)0);
 VAR_1 = FUNC_0(VAR_0->fp);
 VAR_0->curline = VAR_1;
 return VAR_1;
}
