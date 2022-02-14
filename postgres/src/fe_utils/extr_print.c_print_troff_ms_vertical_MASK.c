
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* const data; struct TYPE_6__* next; } ;
typedef TYPE_2__ printTableFooter ;
struct TYPE_7__ {char const* const title; char** cells; unsigned int ncolumns; char const* const* headers; TYPE_2__* footers; TYPE_1__* opt; } ;
typedef TYPE_3__ printTableContent ;
struct TYPE_5__ {int tuples_only; unsigned short border; int prior_records; scalar_t__ stop_table; scalar_t__ start_table; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char const* const,int *) ;

__attribute__((used)) static void
FUNC_4(const printTableContent *VAR_1, FILE *VAR_2)
{
 bool VAR_3 = VAR_1->opt->tuples_only;
 unsigned short VAR_4 = VAR_1->opt->border;
 unsigned long VAR_5 = VAR_1->opt->prior_records + 1;
 unsigned int VAR_6;
 const char *const *VAR_7;
 unsigned short VAR_8 = 0;

 if (VAR_0)
  return;

 if (VAR_4 > 2)
  VAR_4 = 2;

 if (VAR_1->opt->start_table)
 {

  if (!VAR_3 && VAR_1->title)
  {
   FUNC_2(".LP\n.DS C\n", VAR_2);
   FUNC_3(VAR_1->title, VAR_2);
   FUNC_2("\n.DE\n", VAR_2);
  }


  FUNC_2(".LP\n.TS\n", VAR_2);
  if (VAR_4 == 2)
   FUNC_2("center box;\n", VAR_2);
  else
   FUNC_2("center;\n", VAR_2);


  if (VAR_3)
   FUNC_2("c l;\n", VAR_2);
 }
 else
  VAR_8 = 2;


 for (VAR_6 = 0, VAR_7 = VAR_1->cells; *VAR_7; VAR_6++, VAR_7++)
 {

  if (VAR_6 % VAR_1->ncolumns == 0)
  {
   if (VAR_0)
    break;
   if (!VAR_3)
   {
    if (VAR_8 != 1)
    {
     if (VAR_4 == 2 && VAR_5 > 1)
      FUNC_2("_\n", VAR_2);
     if (VAR_8 != 0)
      FUNC_2(".T&\n", VAR_2);
     FUNC_2("c s.\n", VAR_2);
     VAR_8 = 1;
    }
    FUNC_0(VAR_2, "\\fIRecord %lu\\fP\n", VAR_5++);
   }
   if (VAR_4 >= 1)
    FUNC_2("_\n", VAR_2);
  }

  if (!VAR_3)
  {
   if (VAR_8 != 2)
   {
    if (VAR_8 != 0)
     FUNC_2(".T&\n", VAR_2);
    if (VAR_4 != 1)
     FUNC_2("c l.\n", VAR_2);
    else
     FUNC_2("c | l.\n", VAR_2);
    VAR_8 = 2;
   }
  }

  FUNC_3(VAR_1->headers[VAR_6 % VAR_1->ncolumns], VAR_2);
  FUNC_1('\t', VAR_2);
  FUNC_3(*VAR_7, VAR_2);

  FUNC_1('\n', VAR_2);
 }

 if (VAR_1->opt->stop_table)
 {
  FUNC_2(".TE\n.DS L\n", VAR_2);


  if (VAR_1->footers && !VAR_3 && !VAR_0)
  {
   printTableFooter *VAR_9;

   for (VAR_9 = VAR_1->footers; VAR_9; VAR_9 = VAR_9->next)
   {
    FUNC_3(VAR_9->data, VAR_2);
    FUNC_1('\n', VAR_2);
   }
  }

  FUNC_2(".DE\n", VAR_2);
 }
}
