
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int *,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(PGconn *VAR_1)
{
 PQExpBuffer VAR_2 = FUNC_3();
 PGresult *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_1,
        "SELECT groname, grolist FROM pg_group ORDER BY 1");

 if (FUNC_2(VAR_3) > 0)
  FUNC_7(VAR_0, "--\n-- Role memberships\n--\n\n");

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_3); VAR_4++)
 {
  char *VAR_5 = FUNC_1(VAR_3, VAR_4, 0);
  char *VAR_6 = FUNC_1(VAR_3, VAR_4, 1);
  PGresult *VAR_7;
  int VAR_8;




  if (FUNC_12(VAR_6) < 3)
   continue;

  VAR_6 = FUNC_9(VAR_6);
  VAR_6[0] = '(';
  VAR_6[FUNC_12(VAR_6) - 1] = ')';
  FUNC_10(VAR_2,
        "SELECT usename FROM pg_shadow "
        "WHERE usesysid IN %s ORDER BY 1",
        VAR_6);
  FUNC_8(VAR_6);

  VAR_7 = FUNC_5(VAR_1, VAR_2->data);

  for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_7); VAR_8++)
  {
   char *VAR_9 = FUNC_1(VAR_7, VAR_8, 0);





   if (FUNC_11(VAR_5, VAR_9) == 0)
    continue;

   FUNC_7(VAR_0, "GRANT %s", FUNC_6(VAR_5));
   FUNC_7(VAR_0, " TO %s;\n", FUNC_6(VAR_9));
  }

  FUNC_0(VAR_7);
 }

 FUNC_0(VAR_3);
 FUNC_4(VAR_2);

 FUNC_7(VAR_0, "\n\n");
}
