
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* const data; struct TYPE_6__* next; } ;
typedef TYPE_2__ printTableFooter ;
struct TYPE_7__ {char const* const title; char** cells; unsigned int ncolumns; char const* const* headers; char* aligns; TYPE_2__* footers; TYPE_1__* opt; } ;
typedef TYPE_3__ printTableContent ;
struct TYPE_5__ {int tuples_only; unsigned short border; char* tableAttr; int prior_records; scalar_t__ stop_table; scalar_t__ start_table; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char const* const,int *) ;
 size_t FUNC_4 (char const* const,char*) ;

__attribute__((used)) static void
FUNC_5(const printTableContent *VAR_1, FILE *VAR_2)
{
 bool VAR_3 = VAR_1->opt->tuples_only;
 unsigned short VAR_4 = VAR_1->opt->border;
 const char *VAR_5 = VAR_1->opt->tableAttr;
 unsigned long VAR_6 = VAR_1->opt->prior_records + 1;
 unsigned int VAR_7;
 const char *const *VAR_8;

 if (VAR_0)
  return;

 if (VAR_1->opt->start_table)
 {
  FUNC_0(VAR_2, "<table border=\"%d\"", VAR_4);
  if (VAR_5)
   FUNC_0(VAR_2, " %s", VAR_5);
  FUNC_2(">\n", VAR_2);


  if (!VAR_3 && VAR_1->title)
  {
   FUNC_2("  <caption>", VAR_2);
   FUNC_3(VAR_1->title, VAR_2);
   FUNC_2("</caption>\n", VAR_2);
  }
 }


 for (VAR_7 = 0, VAR_8 = VAR_1->cells; *VAR_8; VAR_7++, VAR_8++)
 {
  if (VAR_7 % VAR_1->ncolumns == 0)
  {
   if (VAR_0)
    break;
   if (!VAR_3)
    FUNC_0(VAR_2,
      "\n  <tr><td colspan=\"2\" align=\"center\">Record %lu</td></tr>\n",
      VAR_6++);
   else
    FUNC_2("\n  <tr><td colspan=\"2\">&nbsp;</td></tr>\n", VAR_2);
  }
  FUNC_2("  <tr valign=\"top\">\n"
     "    <th>", VAR_2);
  FUNC_3(VAR_1->headers[VAR_7 % VAR_1->ncolumns], VAR_2);
  FUNC_2("</th>\n", VAR_2);

  FUNC_0(VAR_2, "    <td align=\"%s\">", VAR_1->aligns[VAR_7 % VAR_1->ncolumns] == 'r' ? "right" : "left");

  if ((*VAR_8)[FUNC_4(*VAR_8, " \t")] == '\0')
   FUNC_2("&nbsp; ", VAR_2);
  else
   FUNC_3(*VAR_8, VAR_2);

  FUNC_2("</td>\n  </tr>\n", VAR_2);
 }

 if (VAR_1->opt->stop_table)
 {
  FUNC_2("</table>\n", VAR_2);


  if (!VAR_3 && VAR_1->footers != ((void*)0) && !VAR_0)
  {
   printTableFooter *VAR_9;

   FUNC_2("<p>", VAR_2);
   for (VAR_9 = VAR_1->footers; VAR_9; VAR_9 = VAR_9->next)
   {
    FUNC_3(VAR_9->data, VAR_2);
    FUNC_2("<br />\n", VAR_2);
   }
   FUNC_2("</p>", VAR_2);
  }

  FUNC_1('\n', VAR_2);
 }
}
