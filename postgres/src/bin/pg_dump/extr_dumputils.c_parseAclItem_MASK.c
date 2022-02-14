
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;


 int FUNC_0 (char,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char const*) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_10(const char *VAR_0, const char *VAR_1,
    const char *VAR_2, const char *VAR_3, int VAR_4,
    PQExpBuffer VAR_5, PQExpBuffer VAR_6,
    PQExpBuffer VAR_7, PQExpBuffer VAR_8)
{
 char *VAR_9;
 bool VAR_10 = 1;
 bool VAR_11 = 1;
 char *VAR_12;
 char *VAR_13;
 char *VAR_14;

 VAR_9 = FUNC_5(VAR_0);


 VAR_12 = FUNC_3(VAR_5, VAR_9);
 if (*VAR_12 != '=')
 {
  FUNC_4(VAR_9);
  return 0;
 }


 VAR_13 = FUNC_8(VAR_12 + 1, '/');
 if (VAR_13)
 {
  *VAR_13++ = '\0';
  VAR_13 = FUNC_3(VAR_6, VAR_13);
  if (*VAR_13 != '\0')
  {
   FUNC_4(VAR_9);
   return 0;
  }
 }
 else
 {
  FUNC_4(VAR_9);
  return 0;
 }
 FUNC_7(VAR_7);
 FUNC_7(VAR_8);

 if (FUNC_9(VAR_1, "TABLE") == 0 || FUNC_9(VAR_1, "SEQUENCE") == 0 ||
  FUNC_9(VAR_1, "TABLES") == 0 || FUNC_9(VAR_1, "SEQUENCES") == 0)
 {
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'r'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "SELECT", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "SELECT", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);

  if (FUNC_9(VAR_1, "SEQUENCE") == 0 ||
   FUNC_9(VAR_1, "SEQUENCES") == 0)

   do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'U'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "USAGE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "USAGE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
  else
  {

   do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'a'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "INSERT", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "INSERT", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
   do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'x'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "REFERENCES", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "REFERENCES", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);

   if (VAR_3 == ((void*)0))
   {
    do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'd'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "DELETE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "DELETE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
    do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 't'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "TRIGGER", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "TRIGGER", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
    if (VAR_4 >= 80400)
     do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'D'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "TRUNCATE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "TRUNCATE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
   }
  }


  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'w'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "UPDATE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "UPDATE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 }
 else if (FUNC_9(VAR_1, "FUNCTION") == 0 ||
    FUNC_9(VAR_1, "FUNCTIONS") == 0)
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'X'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "EXECUTE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "EXECUTE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 else if (FUNC_9(VAR_1, "PROCEDURE") == 0 ||
    FUNC_9(VAR_1, "PROCEDURES") == 0)
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'X'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "EXECUTE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "EXECUTE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 else if (FUNC_9(VAR_1, "LANGUAGE") == 0)
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'U'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "USAGE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "USAGE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 else if (FUNC_9(VAR_1, "SCHEMA") == 0 ||
    FUNC_9(VAR_1, "SCHEMAS") == 0)
 {
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'C'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "CREATE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "CREATE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'U'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "USAGE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "USAGE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 }
 else if (FUNC_9(VAR_1, "DATABASE") == 0)
 {
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'C'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "CREATE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "CREATE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'c'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "CONNECT", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "CONNECT", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'T'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "TEMPORARY", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "TEMPORARY", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 }
 else if (FUNC_9(VAR_1, "TABLESPACE") == 0)
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'C'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "CREATE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "CREATE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 else if (FUNC_9(VAR_1, "TYPE") == 0 ||
    FUNC_9(VAR_1, "TYPES") == 0)
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'U'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "USAGE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "USAGE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 else if (FUNC_9(VAR_1, "FOREIGN DATA WRAPPER") == 0)
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'U'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "USAGE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "USAGE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 else if (FUNC_9(VAR_1, "FOREIGN SERVER") == 0)
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'U'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "USAGE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "USAGE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 else if (FUNC_9(VAR_1, "FOREIGN TABLE") == 0)
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'r'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "SELECT", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "SELECT", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 else if (FUNC_9(VAR_1, "LARGE OBJECT") == 0)
 {
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'r'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "SELECT", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "SELECT", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
  do { if ((VAR_14 = FUNC_8(VAR_12 + 1, 'w'))) { if (*(VAR_14 + 1) == '*') { FUNC_0(VAR_8, "UPDATE", VAR_3); VAR_11 = 0; } else { FUNC_0(VAR_7, "UPDATE", VAR_3); VAR_10 = 0; } } else VAR_10 = VAR_11 = 0; } while (0);
 }
 else
  FUNC_1();



 if (VAR_10)
 {
  FUNC_7(VAR_7);
  FUNC_6(VAR_8, "ALL");
  if (VAR_3)
   FUNC_2(VAR_8, "(%s)", VAR_3);
 }
 else if (VAR_11)
 {
  FUNC_7(VAR_8);
  FUNC_6(VAR_7, "ALL");
  if (VAR_3)
   FUNC_2(VAR_7, "(%s)", VAR_3);
 }

 FUNC_4(VAR_9);

 return 1;
}
