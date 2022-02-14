
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int quiet; int popt; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const* const,char*) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_4 (char const* const,int *) ;
 char* FUNC_5 (int ,int ,int *,int) ;

__attribute__((used)) static backslashResult
FUNC_6(PsqlScanState VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_5)
 {
  char *VAR_7 = FUNC_5(VAR_4,
              VAR_0, ((void*)0), 0);
  char *VAR_8 = FUNC_5(VAR_4,
              VAR_0, ((void*)0), 0);

  if (!VAR_7)
  {


   int VAR_9;
   static const char *const VAR_10[] = {
    "border", "columns", "csv_fieldsep", "expanded", "fieldsep",
    "fieldsep_zero", "footer", "format", "linestyle", "null",
    "numericlocale", "pager", "pager_min_lines",
    "recordsep", "recordsep_zero",
    "tableattr", "title", "tuples_only",
    "unicode_border_linestyle",
    "unicode_column_linestyle",
    "unicode_header_linestyle",
    ((void*)0)
   };

   for (VAR_9 = 0; VAR_10[VAR_9] != ((void*)0); VAR_9++)
   {
    char *VAR_11 = FUNC_4(VAR_10[VAR_9], &VAR_3.popt);

    FUNC_3("%-24s %s\n", VAR_10[VAR_9], VAR_11);
    FUNC_1(VAR_11);
   }

   VAR_6 = 1;
  }
  else
   VAR_6 = FUNC_0(VAR_7, VAR_8, &VAR_3.popt, VAR_3.quiet);

  FUNC_1(VAR_7);
  FUNC_1(VAR_8);
 }
 else
  FUNC_2(VAR_4);

 return VAR_6 ? VAR_2 : VAR_1;
}
