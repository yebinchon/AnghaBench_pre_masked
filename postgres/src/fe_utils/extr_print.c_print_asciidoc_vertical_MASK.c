
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* data; struct TYPE_6__* next; } ;
typedef TYPE_2__ printTableFooter ;
struct TYPE_7__ {char* title; char** cells; unsigned int ncolumns; char const* const* headers; char* aligns; TYPE_2__* footers; TYPE_1__* opt; } ;
typedef TYPE_3__ printTableContent ;
struct TYPE_5__ {int tuples_only; unsigned short border; int prior_records; scalar_t__ stop_table; scalar_t__ start_table; } ;
typedef int FILE ;


 int FUNC_0 (char const* const,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*,int *) ;
 size_t FUNC_3 (char const* const,char*) ;

__attribute__((used)) static void
FUNC_4(const printTableContent *VAR_1, FILE *VAR_2)
{
 bool VAR_3 = VAR_1->opt->tuples_only;
 unsigned short VAR_4 = VAR_1->opt->border;
 unsigned long VAR_5 = VAR_1->opt->prior_records + 1;
 unsigned int VAR_6;
 const char *const *VAR_7;

 if (VAR_0)
  return;

 if (VAR_1->opt->start_table)
 {

  FUNC_2("\n", VAR_2);


  if (!VAR_3 && VAR_1->title)
  {
   FUNC_2(".", VAR_2);
   FUNC_2(VAR_1->title, VAR_2);
   FUNC_2("\n", VAR_2);
  }


  FUNC_2("[cols=\"h,l\"", VAR_2);
  switch (VAR_4)
  {
   case 0:
    FUNC_2(",frame=\"none\",grid=\"none\"", VAR_2);
    break;
   case 1:
    FUNC_2(",frame=\"none\"", VAR_2);
    break;
   case 2:
    FUNC_2(",frame=\"all\",grid=\"all\"", VAR_2);
    break;
  }
  FUNC_2("]\n", VAR_2);
  FUNC_2("|====\n", VAR_2);
 }


 for (VAR_6 = 0, VAR_7 = VAR_1->cells; *VAR_7; VAR_6++, VAR_7++)
 {
  if (VAR_6 % VAR_1->ncolumns == 0)
  {
   if (VAR_0)
    break;
   if (!VAR_3)
    FUNC_1(VAR_2,
      "2+^|Record %lu\n",
      VAR_5++);
   else
    FUNC_2("2+|\n", VAR_2);
  }

  FUNC_2("<l|", VAR_2);
  FUNC_0(VAR_1->headers[VAR_6 % VAR_1->ncolumns], VAR_2);

  FUNC_1(VAR_2, " %s|", VAR_1->aligns[VAR_6 % VAR_1->ncolumns] == 'r' ? ">l" : "<l");

  if ((*VAR_7)[FUNC_3(*VAR_7, " \t")] == '\0')
   FUNC_2(" ", VAR_2);
  else
   FUNC_0(*VAR_7, VAR_2);
  FUNC_2("\n", VAR_2);
 }

 FUNC_2("|====\n", VAR_2);

 if (VAR_1->opt->stop_table)
 {

  if (!VAR_3 && VAR_1->footers != ((void*)0) && !VAR_0)
  {
   printTableFooter *VAR_8;

   FUNC_2("\n....\n", VAR_2);
   for (VAR_8 = VAR_1->footers; VAR_8; VAR_8 = VAR_8->next)
   {
    FUNC_2(VAR_8->data, VAR_2);
    FUNC_2("\n", VAR_2);
   }
   FUNC_2("....\n", VAR_2);
  }
 }
}
