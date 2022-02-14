
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;


 int VAR_3 ;




 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10(FILE *VAR_4, const char *VAR_5, enum ECPGttype VAR_6,
      char *VAR_7,
      char *VAR_8,
      const char *VAR_9,
      const char *VAR_10,
      int VAR_11)
{
 if (VAR_6 == VAR_1)
  FUNC_2(VAR_4, "\n\tECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ");
 else if (VAR_6 == VAR_2)

  FUNC_2(VAR_4, "\n\tECPGt_descriptor, %s, 1L, 1L, 1L, ", VAR_5);
 else if (VAR_6 == VAR_3)
  FUNC_2(VAR_4, "\n\tECPGt_sqlda, &%s, 0L, 0L, 0L, ", VAR_5);
 else
 {
  char *VAR_12 = (char *) FUNC_5(FUNC_9(VAR_5) + ((VAR_10 == ((void*)0)) ? 0 : FUNC_9(VAR_10)) + 4);
  char *VAR_13 = (char *) FUNC_5(FUNC_9(VAR_5) + FUNC_9("sizeof(struct varchar_)") + 1 + FUNC_9(VAR_7) + sizeof(int) * VAR_0 * 10 / 3);
  char *VAR_14;

  switch (VAR_6)
  {





   case 128:
   case 138:





    if (((FUNC_0(VAR_8) > 0) ||
      (FUNC_0(VAR_8) == 0 && FUNC_7(VAR_8, "0") != 0)) &&
     VAR_9 == ((void*)0))
     FUNC_6(VAR_12, "(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);
    else
     FUNC_6(VAR_12, "&(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);





    if (VAR_6 == 128)
     VAR_14 = "struct varchar";
    else
     VAR_14 = "struct bytea";

    if (VAR_11)
     FUNC_6(VAR_13, "sizeof(%s_%d)", VAR_14, VAR_11);
    else
     FUNC_6(VAR_13, "sizeof(%s)", VAR_14);
    break;
   case 137:
   case 129:
   case 136:
   case 131:
    {
     char *VAR_15 = "char";





     if ((FUNC_0(VAR_7) > 1 ||
       (FUNC_0(VAR_8) > 0) ||
       (FUNC_0(VAR_7) == 0 && FUNC_7(VAR_7, "0") != 0) ||
       (FUNC_0(VAR_8) == 0 && FUNC_7(VAR_8, "0") != 0))
      && VAR_9 == ((void*)0))
     {
      FUNC_6(VAR_12, "(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);
      if ((VAR_6 == 137 || VAR_6 == 129) &&
       FUNC_7(VAR_7, "0") == 0)
      {




       VAR_15 = "char *";
      }
     }
     else
      FUNC_6(VAR_12, "&(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);

     FUNC_6(VAR_13, "(%s)*sizeof(%s)", FUNC_7(VAR_7, "0") == 0 ? "1" : VAR_7, VAR_15);
     break;
    }
   case 132:




    FUNC_6(VAR_12, "&(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);
    FUNC_6(VAR_13, "sizeof(numeric)");
    break;
   case 133:




    FUNC_6(VAR_12, "&(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);
    FUNC_6(VAR_13, "sizeof(interval)");
    break;
   case 134:




    FUNC_6(VAR_12, "&(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);
    FUNC_6(VAR_13, "sizeof(date)");
    break;
   case 130:




    FUNC_6(VAR_12, "&(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);
    FUNC_6(VAR_13, "sizeof(timestamp)");
    break;
   case 135:




    FUNC_6(VAR_12, "\"%s\"", VAR_5);
    FUNC_6(VAR_13, "strlen(\"%s\")", VAR_5);
    break;
   default:





    if (((FUNC_0(VAR_8) > 0) ||
      (FUNC_0(VAR_8) == 0 && FUNC_7(VAR_8, "0") != 0)) &&
     VAR_9 == ((void*)0))
     FUNC_6(VAR_12, "(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);
    else
     FUNC_6(VAR_12, "&(%s%s)", VAR_10 ? VAR_10 : "", VAR_5);

    FUNC_6(VAR_13, "sizeof(%s)", FUNC_1(VAR_6));
    break;
  }





  if (FUNC_0(VAR_8) < 0 && !VAR_9)
   FUNC_8(VAR_8, "1");





  if (VAR_9 == ((void*)0) || FUNC_9(VAR_9) == 0)
   FUNC_2(VAR_4, "\n\t%s,%s,(long)%s,(long)%s,%s, ", FUNC_4(VAR_6), VAR_12, VAR_7, VAR_8, VAR_13);
  else
   FUNC_2(VAR_4, "\n\t%s,%s,(long)%s,(long)%s,%s, ", FUNC_4(VAR_6), VAR_12, VAR_7, VAR_8, VAR_9);

  FUNC_3(VAR_12);
  FUNC_3(VAR_13);
 }
}
