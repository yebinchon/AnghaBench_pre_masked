
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char const* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char) ;
 int FUNC_5 (TYPE_1__*,char const*,int *) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (int *,char const*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int *,int ,char*,char const*,int *,int *,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,char*,int,...) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_13(PGconn *VAR_3, const char *VAR_4)
{
 PQExpBuffer VAR_5 = FUNC_6();
 int VAR_6 = 1;
 bool VAR_7 = 1;

 for (;;)
 {
  PGresult *VAR_8;

  if (VAR_2 >= 90000)
   FUNC_11(VAR_5, "SELECT setconfig[%d] FROM pg_db_role_setting WHERE "
         "setdatabase = 0 AND setrole = "
         "(SELECT oid FROM %s WHERE rolname = ", VAR_6, VAR_1);
  else if (VAR_2 >= 80100)
   FUNC_11(VAR_5, "SELECT rolconfig[%d] FROM %s WHERE rolname = ", VAR_6, VAR_1);
  else
   FUNC_11(VAR_5, "SELECT useconfig[%d] FROM pg_shadow WHERE usename = ", VAR_6);
  FUNC_5(VAR_5, VAR_4, VAR_3);
  if (VAR_2 >= 90000)
   FUNC_4(VAR_5, ')');

  VAR_8 = FUNC_8(VAR_3, VAR_5->data);
  if (FUNC_3(VAR_8) == 1 &&
   !FUNC_1(VAR_8, 0, 0))
  {

   if (VAR_7)
   {
    FUNC_9(VAR_0, "--\n-- User Configurations\n--\n\n");
    VAR_7 = 0;
   }

   FUNC_9(VAR_0, "--\n-- User Config \"%s\"\n--\n\n", VAR_4);
   FUNC_12(VAR_5);
   FUNC_10(VAR_3, FUNC_2(VAR_8, 0, 0),
           "ROLE", VAR_4, ((void*)0), ((void*)0),
           VAR_5);
   FUNC_9(VAR_0, "%s", VAR_5->data);
   FUNC_0(VAR_8);
   VAR_6++;
  }
  else
  {
   FUNC_0(VAR_8);
   break;
  }
 }

 FUNC_7(VAR_5);
}
