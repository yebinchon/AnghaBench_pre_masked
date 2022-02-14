
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcpos {int first_column; int last_column; scalar_t__ last_line; scalar_t__ first_line; TYPE_1__* file; } ;
struct TYPE_2__ {int colno; scalar_t__ lineno; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(struct srcpos *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_1->file = VAR_0;

 VAR_1->first_line = VAR_0->lineno;
 VAR_1->first_column = VAR_0->colno;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_2[VAR_4] == '\n') {
   VAR_0->lineno++;
   VAR_0->colno = 1;
  } else {
   VAR_0->colno++;
  }

 VAR_1->last_line = VAR_0->lineno;
 VAR_1->last_column = VAR_0->colno;
}
