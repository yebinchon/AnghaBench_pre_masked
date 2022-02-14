
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
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (TYPE_1__*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(PGconn *VAR_4)
{
 PQExpBuffer VAR_5 = FUNC_4();
 PGresult *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_3 >= 90600)
  FUNC_9(VAR_5,
        "SELECT rolname "
        "FROM %s "
        "WHERE rolname !~ '^pg_' "
        "ORDER BY 1", VAR_2);
 else if (VAR_3 >= 80100)
  FUNC_9(VAR_5,
        "SELECT rolname "
        "FROM %s "
        "ORDER BY 1", VAR_2);
 else
  FUNC_9(VAR_5,
        "SELECT usename as rolname "
        "FROM pg_shadow "
        "UNION "
        "SELECT groname as rolname "
        "FROM pg_group "
        "ORDER BY 1");

 VAR_6 = FUNC_6(VAR_4, VAR_5->data);

 VAR_7 = FUNC_1(VAR_6, "rolname");

 if (FUNC_3(VAR_6) > 0)
  FUNC_8(VAR_0, "--\n-- Drop roles\n--\n\n");

 for (VAR_8 = 0; VAR_8 < FUNC_3(VAR_6); VAR_8++)
 {
  const char *VAR_9;

  VAR_9 = FUNC_2(VAR_6, VAR_8, VAR_7);

  FUNC_8(VAR_0, "DROP ROLE %s%d;\n",
    VAR_1 ? "IF EXISTS " : "",
    FUNC_7(VAR_9));
 }

 FUNC_0(VAR_6);
 FUNC_5(VAR_5);

 FUNC_8(VAR_0, "\n\n");
}
