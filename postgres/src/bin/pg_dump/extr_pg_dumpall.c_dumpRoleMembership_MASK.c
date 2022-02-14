
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *,int ) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_1__*,char*,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_10(PGconn *VAR_2)
{
 PQExpBuffer VAR_3 = FUNC_4();
 PGresult *VAR_4;
 int VAR_5;

 FUNC_9(VAR_3, "SELECT ur.rolname AS roleid, "
       "um.rolname AS member, "
       "a.admin_option, "
       "ug.rolname AS grantor "
       "FROM pg_auth_members a "
       "LEFT JOIN %s ur on ur.oid = a.roleid "
       "LEFT JOIN %s um on um.oid = a.member "
       "LEFT JOIN %s ug on ug.oid = a.grantor "
       "WHERE NOT (ur.rolname ~ '^pg_' AND um.rolname ~ '^pg_')"
       "ORDER BY 1,2,3", VAR_1, VAR_1, VAR_1);
 VAR_4 = FUNC_6(VAR_2, VAR_3->data);

 if (FUNC_3(VAR_4) > 0)
  FUNC_8(VAR_0, "--\n-- Role memberships\n--\n\n");

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_4); VAR_5++)
 {
  char *VAR_6 = FUNC_2(VAR_4, VAR_5, 0);
  char *VAR_7 = FUNC_2(VAR_4, VAR_5, 1);
  char *VAR_8 = FUNC_2(VAR_4, VAR_5, 2);

  FUNC_8(VAR_0, "GRANT %s", FUNC_7(VAR_6));
  FUNC_8(VAR_0, " TO %s", FUNC_7(VAR_7));
  if (*VAR_8 == 't')
   FUNC_8(VAR_0, " WITH ADMIN OPTION");





  if (!FUNC_1(VAR_4, VAR_5, 3))
  {
   char *VAR_9 = FUNC_2(VAR_4, VAR_5, 3);

   FUNC_8(VAR_0, " GRANTED BY %s", FUNC_7(VAR_9));
  }
  FUNC_8(VAR_0, ";\n");
 }

 FUNC_0(VAR_4);
 FUNC_5(VAR_3);

 FUNC_8(VAR_0, "\n\n");
}
