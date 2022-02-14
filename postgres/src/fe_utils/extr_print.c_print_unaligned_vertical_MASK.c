
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* const data; struct TYPE_7__* next; } ;
typedef TYPE_2__ printTableFooter ;
struct TYPE_8__ {char const* const title; char** cells; char const* const* headers; unsigned int ncolumns; TYPE_1__* opt; TYPE_2__* footers; } ;
typedef TYPE_3__ printTableContent ;
struct TYPE_9__ {scalar_t__ separator_zero; } ;
struct TYPE_6__ {int tuples_only; TYPE_5__ recordSep; scalar_t__ stop_table; TYPE_5__ fieldSep; scalar_t__ start_table; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char,int *) ;
 int FUNC_1 (char const* const,int *) ;
 int FUNC_2 (TYPE_5__,int *) ;

__attribute__((used)) static void
FUNC_3(const printTableContent *VAR_1, FILE *VAR_2)
{
 bool VAR_3 = VAR_1->opt->tuples_only;
 unsigned int VAR_4;
 const char *const *VAR_5;
 bool VAR_6 = 0;

 if (VAR_0)
  return;

 if (VAR_1->opt->start_table)
 {

  if (!VAR_3 && VAR_1->title)
  {
   FUNC_1(VAR_1->title, VAR_2);
   VAR_6 = 1;
  }
 }
 else

  VAR_6 = 1;


 for (VAR_4 = 0, VAR_5 = VAR_1->cells; *VAR_5; VAR_4++, VAR_5++)
 {
  if (VAR_6)
  {

   FUNC_2(VAR_1->opt->recordSep, VAR_2);
   FUNC_2(VAR_1->opt->recordSep, VAR_2);
   VAR_6 = 0;
   if (VAR_0)
    break;
  }

  FUNC_1(VAR_1->headers[VAR_4 % VAR_1->ncolumns], VAR_2);
  FUNC_2(VAR_1->opt->fieldSep, VAR_2);
  FUNC_1(*VAR_5, VAR_2);

  if ((VAR_4 + 1) % VAR_1->ncolumns)
   FUNC_2(VAR_1->opt->recordSep, VAR_2);
  else
   VAR_6 = 1;
 }

 if (VAR_1->opt->stop_table)
 {

  if (!VAR_3 && VAR_1->footers != ((void*)0) && !VAR_0)
  {
   printTableFooter *VAR_7;

   FUNC_2(VAR_1->opt->recordSep, VAR_2);
   for (VAR_7 = VAR_1->footers; VAR_7; VAR_7 = VAR_7->next)
   {
    FUNC_2(VAR_1->opt->recordSep, VAR_2);
    FUNC_1(VAR_7->data, VAR_2);
   }
  }


  if (VAR_6)
  {
   if (VAR_1->opt->recordSep.separator_zero)
    FUNC_2(VAR_1->opt->recordSep, VAR_2);
   else
    FUNC_0('\n', VAR_2);
  }
 }
}
