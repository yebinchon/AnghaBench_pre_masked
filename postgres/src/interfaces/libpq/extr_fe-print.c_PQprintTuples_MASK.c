
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int FILE ;


 int FUNC_0 (int const*,int) ;
 char* FUNC_1 (int const*,int,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,char*,...) ;
 int VAR_0 ;

void
FUNC_10(const PGresult *VAR_1,
     FILE *VAR_2,
     int VAR_3,
     int VAR_4,
     int VAR_5
)
{
 int VAR_6;
 int VAR_7;
 int VAR_8,
    VAR_9;
 char VAR_10[80];
 char *VAR_11 = ((void*)0);

 VAR_6 = FUNC_2(VAR_1);
 VAR_7 = FUNC_3(VAR_1);

 if (VAR_5 > 0)
  FUNC_9(VAR_10, "%%s %%-%ds", VAR_5);
 else
  FUNC_9(VAR_10, "%%s %%s");

 if (VAR_6 > 0)
 {

  if (!VAR_4)
  {
   int VAR_12;

   VAR_12 = VAR_6 * 14;
   VAR_11 = (char *) FUNC_8(VAR_12 + 1);
   if (!VAR_11)
   {
    FUNC_5(&VAR_0, FUNC_7("out of memory\n"));
    FUNC_4();
   }
   for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
    VAR_11[VAR_8] = '-';
   VAR_11[VAR_12] = '\0';
   FUNC_5(VAR_2, "%s\n", VAR_11);
  }

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  {
   if (VAR_3)
   {
    FUNC_5(VAR_2, VAR_10,
      VAR_4 ? "" : "|",
      FUNC_0(VAR_1, VAR_8));
   }
  }

  if (VAR_3)
  {
   if (VAR_4)
    FUNC_5(VAR_2, "\n");
   else
    FUNC_5(VAR_2, "|\n%s\n", VAR_11);
  }

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  {
   for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
   {
    const char *VAR_13 = FUNC_1(VAR_1, VAR_8, VAR_9);

    FUNC_5(VAR_2, VAR_10,
      VAR_4 ? "" : "|",
      VAR_13 ? VAR_13 : "");
   }
   if (VAR_4)
    FUNC_5(VAR_2, "\n");
   else
    FUNC_5(VAR_2, "|\n%s\n", VAR_11);
  }
 }

 if (VAR_11)
  FUNC_6(VAR_11);
}
