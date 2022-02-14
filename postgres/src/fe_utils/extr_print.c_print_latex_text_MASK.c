
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char const* const data; struct TYPE_8__* next; } ;
typedef TYPE_2__ printTableFooter ;
struct TYPE_9__ {char const* const title; unsigned int ncolumns; char* aligns; char** headers; char** cells; TYPE_1__* opt; } ;
typedef TYPE_3__ printTableContent ;
struct TYPE_7__ {int tuples_only; unsigned short border; scalar_t__ stop_table; scalar_t__ start_table; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char const* const,int *) ;

__attribute__((used)) static void
FUNC_4(const printTableContent *VAR_1, FILE *VAR_2)
{
 bool VAR_3 = VAR_1->opt->tuples_only;
 unsigned short VAR_4 = VAR_1->opt->border;
 unsigned int VAR_5;
 const char *const *VAR_6;

 if (VAR_0)
  return;

 if (VAR_4 > 3)
  VAR_4 = 3;

 if (VAR_1->opt->start_table)
 {

  if (!VAR_3 && VAR_1->title)
  {
   FUNC_2("\\begin{center}\n", VAR_2);
   FUNC_3(VAR_1->title, VAR_2);
   FUNC_2("\n\\end{center}\n\n", VAR_2);
  }


  FUNC_2("\\begin{tabular}{", VAR_2);

  if (VAR_4 >= 2)
   FUNC_2("| ", VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_1->ncolumns; VAR_5++)
  {
   FUNC_1(*(VAR_1->aligns + VAR_5), VAR_2);
   if (VAR_4 != 0 && VAR_5 < VAR_1->ncolumns - 1)
    FUNC_2(" | ", VAR_2);
  }
  if (VAR_4 >= 2)
   FUNC_2(" |", VAR_2);

  FUNC_2("}\n", VAR_2);

  if (!VAR_3 && VAR_4 >= 2)
   FUNC_2("\\hline\n", VAR_2);


  if (!VAR_3)
  {
   for (VAR_5 = 0, VAR_6 = VAR_1->headers; VAR_5 < VAR_1->ncolumns; VAR_5++, VAR_6++)
   {
    if (VAR_5 != 0)
     FUNC_2(" & ", VAR_2);
    FUNC_2("\\textit{", VAR_2);
    FUNC_3(*VAR_6, VAR_2);
    FUNC_1('}', VAR_2);
   }
   FUNC_2(" \\\\\n", VAR_2);
   FUNC_2("\\hline\n", VAR_2);
  }
 }


 for (VAR_5 = 0, VAR_6 = VAR_1->cells; *VAR_6; VAR_5++, VAR_6++)
 {
  FUNC_3(*VAR_6, VAR_2);

  if ((VAR_5 + 1) % VAR_1->ncolumns == 0)
  {
   FUNC_2(" \\\\\n", VAR_2);
   if (VAR_4 == 3)
    FUNC_2("\\hline\n", VAR_2);
   if (VAR_0)
    break;
  }
  else
   FUNC_2(" & ", VAR_2);
 }

 if (VAR_1->opt->stop_table)
 {
  printTableFooter *VAR_7 = FUNC_0(VAR_1);

  if (VAR_4 == 2)
   FUNC_2("\\hline\n", VAR_2);

  FUNC_2("\\end{tabular}\n\n\\noindent ", VAR_2);


  if (VAR_7 && !VAR_3 && !VAR_0)
  {
   printTableFooter *VAR_8;

   for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next)
   {
    FUNC_3(VAR_8->data, VAR_2);
    FUNC_2(" \\\\\n", VAR_2);
   }
  }

  FUNC_1('\n', VAR_2);
 }
}
