
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lineno; int tline; int * fname; int * lval; scalar_t__ nerr; } ;
typedef TYPE_1__ parser_state ;



void
FUNC_0(parser_state* VAR_0)
{
  VAR_0->nerr = 0;
  VAR_0->lval = ((void*)0);
  VAR_0->fname = ((void*)0);
  VAR_0->lineno = 1;
  VAR_0->tline = 1;
}
