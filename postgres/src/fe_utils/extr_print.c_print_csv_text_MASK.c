
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char** headers; char** cells; int ncolumns; TYPE_1__* opt; } ;
typedef TYPE_2__ printTableContent ;
struct TYPE_4__ {char* csvFieldSep; int tuples_only; scalar_t__ start_table; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const* const,int *,char) ;
 int FUNC_1 (char,int *) ;

__attribute__((used)) static void
FUNC_2(const printTableContent *VAR_1, FILE *VAR_2)
{
 const char *const *VAR_3;
 int VAR_4;

 if (VAR_0)
  return;
 if (VAR_1->opt->start_table && !VAR_1->opt->tuples_only)
 {

  for (VAR_3 = VAR_1->headers; *VAR_3; VAR_3++)
  {
   if (VAR_3 != VAR_1->headers)
    FUNC_1(VAR_1->opt->csvFieldSep[0], VAR_2);
   FUNC_0(*VAR_3, VAR_2, VAR_1->opt->csvFieldSep[0]);
  }
  FUNC_1('\n', VAR_2);
 }


 for (VAR_4 = 0, VAR_3 = VAR_1->cells; *VAR_3; VAR_4++, VAR_3++)
 {
  FUNC_0(*VAR_3, VAR_2, VAR_1->opt->csvFieldSep[0]);
  if ((VAR_4 + 1) % VAR_1->ncolumns)
   FUNC_1(VAR_1->opt->csvFieldSep[0], VAR_2);
  else
   FUNC_1('\n', VAR_2);
 }
}
