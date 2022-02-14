
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ncolumns; int nrows; char* aligns; } ;
typedef TYPE_1__ printTableContent ;
struct TYPE_13__ {scalar_t__ numericLocale; } ;
struct TYPE_12__ {int n_translate_columns; char* nullPrint; char** footers; scalar_t__* translate_columns; TYPE_4__ topt; int translate_header; int title; } ;
typedef TYPE_2__ printQueryOpt ;
typedef int PGresult ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int) ;
 scalar_t__ FUNC_3 (int const*,int,int) ;
 char* FUNC_4 (int const*,int,int) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*,int *,int,int *) ;
 int FUNC_10 (TYPE_1__*,char*,int,int) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,TYPE_4__*,int ,int ,int ) ;

void
FUNC_15(const PGresult *VAR_1, const printQueryOpt *VAR_2,
     FILE *VAR_3, bool VAR_4, FILE *VAR_5)
{
 printTableContent VAR_6;
 int VAR_7,
    VAR_8,
    VAR_9;

 if (VAR_0)
  return;

 FUNC_14(&VAR_6, &VAR_2->topt, VAR_2->title,
       FUNC_5(VAR_1), FUNC_6(VAR_1));


 FUNC_0(VAR_2->translate_columns == ((void*)0) ||
     VAR_2->n_translate_columns >= VAR_6.ncolumns);

 for (VAR_7 = 0; VAR_7 < VAR_6.ncolumns; VAR_7++)
 {
  FUNC_12(&VAR_6, FUNC_1(VAR_1, VAR_7),
       VAR_2->translate_header,
       FUNC_7(FUNC_2(VAR_1, VAR_7)));
 }


 for (VAR_8 = 0; VAR_8 < VAR_6.nrows; VAR_8++)
 {
  for (VAR_9 = 0; VAR_9 < VAR_6.ncolumns; VAR_9++)
  {
   char *VAR_10;
   bool VAR_11 = 0;
   bool VAR_12;

   if (FUNC_3(VAR_1, VAR_8, VAR_9))
    VAR_10 = VAR_2->nullPrint ? VAR_2->nullPrint : "";
   else
   {
    VAR_10 = FUNC_4(VAR_1, VAR_8, VAR_9);
    if (VAR_6.aligns[VAR_9] == 'r' && VAR_2->topt.numericLocale)
    {
     VAR_10 = FUNC_8(VAR_10);
     VAR_11 = 1;
    }
   }

   VAR_12 = (VAR_2->translate_columns && VAR_2->translate_columns[VAR_9]);
   FUNC_10(&VAR_6, VAR_10, VAR_12, VAR_11);
  }
 }


 if (VAR_2->footers)
 {
  char **VAR_13;

  for (VAR_13 = VAR_2->footers; *VAR_13; VAR_13++)
   FUNC_11(&VAR_6, *VAR_13);
 }

 FUNC_9(&VAR_6, VAR_3, VAR_4, VAR_5);
 FUNC_13(&VAR_6);
}
