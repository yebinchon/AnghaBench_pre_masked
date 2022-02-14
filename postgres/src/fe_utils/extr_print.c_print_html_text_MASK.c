
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char const* const data; struct TYPE_8__* next; } ;
typedef TYPE_2__ printTableFooter ;
struct TYPE_9__ {char const* const title; char** headers; char** cells; unsigned int ncolumns; char* aligns; TYPE_1__* opt; } ;
typedef TYPE_3__ printTableContent ;
struct TYPE_7__ {int tuples_only; unsigned short border; char* tableAttr; scalar_t__ stop_table; scalar_t__ start_table; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char const* const,int *) ;
 size_t FUNC_5 (char const* const,char*) ;

__attribute__((used)) static void
FUNC_6(const printTableContent *VAR_1, FILE *VAR_2)
{
 bool VAR_3 = VAR_1->opt->tuples_only;
 unsigned short VAR_4 = VAR_1->opt->border;
 const char *VAR_5 = VAR_1->opt->tableAttr;
 unsigned int VAR_6;
 const char *const *VAR_7;

 if (VAR_0)
  return;

 if (VAR_1->opt->start_table)
 {
  FUNC_1(VAR_2, "<table border=\"%d\"", VAR_4);
  if (VAR_5)
   FUNC_1(VAR_2, " %s", VAR_5);
  FUNC_3(">\n", VAR_2);


  if (!VAR_3 && VAR_1->title)
  {
   FUNC_3("  <caption>", VAR_2);
   FUNC_4(VAR_1->title, VAR_2);
   FUNC_3("</caption>\n", VAR_2);
  }


  if (!VAR_3)
  {
   FUNC_3("  <tr>\n", VAR_2);
   for (VAR_7 = VAR_1->headers; *VAR_7; VAR_7++)
   {
    FUNC_3("    <th align=\"center\">", VAR_2);
    FUNC_4(*VAR_7, VAR_2);
    FUNC_3("</th>\n", VAR_2);
   }
   FUNC_3("  </tr>\n", VAR_2);
  }
 }


 for (VAR_6 = 0, VAR_7 = VAR_1->cells; *VAR_7; VAR_6++, VAR_7++)
 {
  if (VAR_6 % VAR_1->ncolumns == 0)
  {
   if (VAR_0)
    break;
   FUNC_3("  <tr valign=\"top\">\n", VAR_2);
  }

  FUNC_1(VAR_2, "    <td align=\"%s\">", VAR_1->aligns[(VAR_6) % VAR_1->ncolumns] == 'r' ? "right" : "left");

  if ((*VAR_7)[FUNC_5(*VAR_7, " \t")] == '\0')
   FUNC_3("&nbsp; ", VAR_2);
  else
   FUNC_4(*VAR_7, VAR_2);

  FUNC_3("</td>\n", VAR_2);

  if ((VAR_6 + 1) % VAR_1->ncolumns == 0)
   FUNC_3("  </tr>\n", VAR_2);
 }

 if (VAR_1->opt->stop_table)
 {
  printTableFooter *VAR_8 = FUNC_0(VAR_1);

  FUNC_3("</table>\n", VAR_2);


  if (!VAR_3 && VAR_8 != ((void*)0) && !VAR_0)
  {
   printTableFooter *VAR_9;

   FUNC_3("<p>", VAR_2);
   for (VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->next)
   {
    FUNC_4(VAR_9->data, VAR_2);
    FUNC_3("<br />\n", VAR_2);
   }
   FUNC_3("</p>", VAR_2);
  }

  FUNC_2('\n', VAR_2);
 }
}
