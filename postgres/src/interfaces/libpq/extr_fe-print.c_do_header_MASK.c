
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* fieldSep; scalar_t__ html3; scalar_t__ standard; } ;
typedef TYPE_1__ PQprintOpt ;
typedef int PGresult ;
typedef int FILE ;


 char* FUNC_0 (int const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int *) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char *
FUNC_7(FILE *VAR_1, const PQprintOpt *VAR_2, const int VAR_3, int *VAR_4,
    const char **VAR_5, unsigned char *VAR_6,
    const int VAR_7, const PGresult *VAR_8)
{
 int VAR_9;
 char *VAR_10 = ((void*)0);

 if (VAR_2->html3)
  FUNC_3("<tr>", VAR_1);
 else
 {
  int VAR_11 = 0;
  int VAR_12 = 0;
  char *VAR_13 = ((void*)0);

  for (; VAR_12 < VAR_3; VAR_12++)
   VAR_11 += VAR_4[VAR_12] + VAR_7 + (VAR_2->standard ? 2 : 0);
  if (VAR_2->standard)
   VAR_11 += VAR_7 * 2 + 2;
  VAR_10 = FUNC_5(VAR_11 + 1);
  if (!VAR_10)
  {
   FUNC_2(&VAR_0, FUNC_4("out of memory\n"));
   FUNC_1();
  }
  VAR_13 = VAR_10;
  if (VAR_2->standard)
  {
   char *VAR_14 = VAR_2->fieldSep;

   while (*VAR_14++)
    *VAR_13++ = '+';
  }
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  {
   int VAR_15;

   for (VAR_15 = VAR_4[VAR_9] + (VAR_2->standard ? 2 : 0); VAR_15--; *VAR_13++ = '-');
   if (VAR_2->standard || (VAR_9 + 1) < VAR_3)
   {
    char *VAR_16 = VAR_2->fieldSep;

    while (*VAR_16++)
     *VAR_13++ = '+';
   }
  }
  *VAR_13 = '\0';
  if (VAR_2->standard)
   FUNC_2(VAR_1, "%s\n", VAR_10);
 }
 if (VAR_2->standard)
  FUNC_3(VAR_2->fieldSep, VAR_1);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
 {
  const char *VAR_17 = FUNC_0(VAR_8, VAR_9);

  if (VAR_2->html3)
  {
   FUNC_2(VAR_1, "<th align=\"%s\">%s</th>",
     VAR_6[VAR_9] ? "left" : "right", VAR_5[VAR_9]);
  }
  else
  {
   int VAR_18 = FUNC_6(VAR_17);

   if (VAR_18 > VAR_4[VAR_9])
    VAR_4[VAR_9] = VAR_18;
   if (VAR_2->standard)
    FUNC_2(VAR_1,
      VAR_6[VAR_9] ? " %-*s " : " %*s ",
      VAR_4[VAR_9], VAR_17);
   else
    FUNC_2(VAR_1, VAR_6[VAR_9] ? "%-*s" : "%*s", VAR_4[VAR_9], VAR_17);
   if (VAR_2->standard || (VAR_9 + 1) < VAR_3)
    FUNC_3(VAR_2->fieldSep, VAR_1);
  }
 }
 if (VAR_2->html3)
  FUNC_3("</tr>\n", VAR_1);
 else
  FUNC_2(VAR_1, "\n%s\n", VAR_10);
 return VAR_10;
}
