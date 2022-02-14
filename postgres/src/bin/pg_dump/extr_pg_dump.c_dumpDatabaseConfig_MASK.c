
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int remoteVersion; } ;
struct TYPE_11__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;
typedef int Oid ;
typedef TYPE_2__ Archive ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int * FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 char const* FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,char const*,char*,char const*,char*,char const*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,int,...) ;

__attribute__((used)) static void
FUNC_10(Archive *VAR_1, PQExpBuffer VAR_2,
       const char *VAR_3, Oid VAR_4)
{
 PGconn *VAR_5 = FUNC_1(VAR_1);
 PQExpBuffer VAR_6 = FUNC_6();
 PGresult *VAR_7;
 int VAR_8 = 1;





 for (;;)
 {
  if (VAR_1->remoteVersion >= 90000)
   FUNC_9(VAR_6, "SELECT setconfig[%d] FROM pg_db_role_setting "
         "WHERE setrole = 0 AND setdatabase = '%u'::oid",
         VAR_8, VAR_4);
  else
   FUNC_9(VAR_6, "SELECT datconfig[%d] FROM pg_database WHERE oid = '%u'::oid", VAR_8, VAR_4);

  VAR_7 = FUNC_0(VAR_1, VAR_6->data, VAR_0);

  if (FUNC_5(VAR_7) == 1 &&
   !FUNC_3(VAR_7, 0, 0))
  {
   FUNC_8(VAR_5, FUNC_4(VAR_7, 0, 0),
           "DATABASE", VAR_3, ((void*)0), ((void*)0),
           VAR_2);
   FUNC_2(VAR_7);
   VAR_8++;
  }
  else
  {
   FUNC_2(VAR_7);
   break;
  }
 }


 if (VAR_1->remoteVersion >= 90000)
 {

  FUNC_9(VAR_6, "SELECT rolname, unnest(setconfig) "
        "FROM pg_db_role_setting s, pg_roles r "
        "WHERE setrole = r.oid AND setdatabase = '%u'::oid",
        VAR_4);

  VAR_7 = FUNC_0(VAR_1, VAR_6->data, VAR_0);

  if (FUNC_5(VAR_7) > 0)
  {
   int VAR_9;

   for (VAR_9 = 0; VAR_9 < FUNC_5(VAR_7); VAR_9++)
    FUNC_8(VAR_5, FUNC_4(VAR_7, VAR_9, 1),
            "ROLE", FUNC_4(VAR_7, VAR_9, 0),
            "DATABASE", VAR_3,
            VAR_2);
  }

  FUNC_2(VAR_7);
 }

 FUNC_7(VAR_6);
}
