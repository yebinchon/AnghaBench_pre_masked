
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filename; int lineno; scalar_t__ curline; } ;
typedef TYPE_1__ tsearch_readline_state ;


 int FUNC_0 (char*,int ,int ,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 tsearch_readline_state *VAR_1 = (tsearch_readline_state *) VAR_0;
 if (VAR_1->curline)
  FUNC_0("line %d of configuration file \"%s\": \"%s\"",
       VAR_1->lineno,
       VAR_1->filename,
       VAR_1->curline);
 else
  FUNC_0("line %d of configuration file \"%s\"",
       VAR_1->lineno,
       VAR_1->filename);
}
