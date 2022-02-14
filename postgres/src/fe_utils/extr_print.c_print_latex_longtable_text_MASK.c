
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ncolumns; char* aligns; char** headers; char const* const title; char** cells; TYPE_1__* opt; } ;
typedef TYPE_2__ printTableContent ;
struct TYPE_4__ {int tuples_only; unsigned short border; char* tableAttr; scalar_t__ stop_table; scalar_t__ start_table; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char const*,int ,int,int *) ;
 int FUNC_3 (char const* const,int *) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*,int ) ;

__attribute__((used)) static void
FUNC_6(const printTableContent *VAR_2, FILE *VAR_3)
{
 bool VAR_4 = VAR_2->opt->tuples_only;
 unsigned short VAR_5 = VAR_2->opt->border;
 unsigned int VAR_6;
 const char *VAR_7 = VAR_2->opt->tableAttr;
 const char *VAR_8 = VAR_7;
 const char *VAR_9 = ((void*)0);
 const char *const *VAR_10;

 if (VAR_1)
  return;

 if (VAR_5 > 3)
  VAR_5 = 3;

 if (VAR_2->opt->start_table)
 {

  FUNC_1("\\begin{longtable}{", VAR_3);

  if (VAR_5 >= 2)
   FUNC_1("| ", VAR_3);

  for (VAR_6 = 0; VAR_6 < VAR_2->ncolumns; VAR_6++)
  {


   if (*(VAR_2->aligns + VAR_6) == 'l' && VAR_7)
   {



    VAR_8 += FUNC_5(VAR_8,
               " \t\n");

    if (VAR_8[0] != '\0')
    {
     FUNC_1("p{", VAR_3);
     FUNC_2(VAR_8, FUNC_4(VAR_8,
                " \t\n"), 1, VAR_3);
     VAR_9 = VAR_8;
     VAR_8 += FUNC_4(VAR_8,
              " \t\n");
     FUNC_1("\\textwidth}", VAR_3);
    }

    else if (VAR_9 != ((void*)0))
    {
     FUNC_1("p{", VAR_3);
     FUNC_2(VAR_9, FUNC_4(VAR_9,
                " \t\n"), 1, VAR_3);
     FUNC_1("\\textwidth}", VAR_3);
    }
    else
     FUNC_0('l', VAR_3);
   }
   else
    FUNC_0(*(VAR_2->aligns + VAR_6), VAR_3);

   if (VAR_5 != 0 && VAR_6 < VAR_2->ncolumns - 1)
    FUNC_1(" | ", VAR_3);
  }

  if (VAR_5 >= 2)
   FUNC_1(" |", VAR_3);

  FUNC_1("}\n", VAR_3);


  if (!VAR_4)
  {

   if (VAR_5 >= 2)
    FUNC_1("\\toprule\n", VAR_3);
   for (VAR_6 = 0, VAR_10 = VAR_2->headers; VAR_6 < VAR_2->ncolumns; VAR_6++, VAR_10++)
   {
    if (VAR_6 != 0)
     FUNC_1(" & ", VAR_3);
    FUNC_1("\\small\\textbf{\\textit{", VAR_3);
    FUNC_3(*VAR_10, VAR_3);
    FUNC_1("}}", VAR_3);
   }
   FUNC_1(" \\\\\n", VAR_3);
   FUNC_1("\\midrule\n\\endfirsthead\n", VAR_3);


   if (VAR_5 >= 2)
    FUNC_1("\\toprule\n", VAR_3);
   for (VAR_6 = 0, VAR_10 = VAR_2->headers; VAR_6 < VAR_2->ncolumns; VAR_6++, VAR_10++)
   {
    if (VAR_6 != 0)
     FUNC_1(" & ", VAR_3);
    FUNC_1("\\small\\textbf{\\textit{", VAR_3);
    FUNC_3(*VAR_10, VAR_3);
    FUNC_1("}}", VAR_3);
   }
   FUNC_1(" \\\\\n", VAR_3);

   if (VAR_5 != 3)
    FUNC_1("\\midrule\n", VAR_3);
   FUNC_1("\\endhead\n", VAR_3);


   if (!VAR_4 && VAR_2->title)
   {

    if (VAR_5 == 2)
     FUNC_1("\\bottomrule\n", VAR_3);
    FUNC_1("\\caption[", VAR_3);
    FUNC_3(VAR_2->title, VAR_3);
    FUNC_1(" (Continued)]{", VAR_3);
    FUNC_3(VAR_2->title, VAR_3);
    FUNC_1("}\n\\endfoot\n", VAR_3);
    if (VAR_5 == 2)
     FUNC_1("\\bottomrule\n", VAR_3);
    FUNC_1("\\caption[", VAR_3);
    FUNC_3(VAR_2->title, VAR_3);
    FUNC_1("]{", VAR_3);
    FUNC_3(VAR_2->title, VAR_3);
    FUNC_1("}\n\\endlastfoot\n", VAR_3);
   }

   else if (VAR_5 >= 2)
   {
    FUNC_1("\\bottomrule\n\\endfoot\n", VAR_3);
    FUNC_1("\\bottomrule\n\\endlastfoot\n", VAR_3);
   }
  }
 }


 for (VAR_6 = 0, VAR_10 = VAR_2->cells; *VAR_10; VAR_6++, VAR_10++)
 {

  if (VAR_6 != 0 && VAR_6 % VAR_2->ncolumns != 0)
   FUNC_1("\n&\n", VAR_3);
  FUNC_1("\\raggedright{", VAR_3);
  FUNC_3(*VAR_10, VAR_3);
  FUNC_0('}', VAR_3);
  if ((VAR_6 + 1) % VAR_2->ncolumns == 0)
  {
   FUNC_1(" \\tabularnewline\n", VAR_3);
   if (VAR_5 == 3)
    FUNC_1(" \\hline\n", VAR_3);
  }
  if (VAR_1)
   break;
 }

 if (VAR_2->opt->stop_table)
  FUNC_1("\\end{longtable}\n", VAR_3);
}
