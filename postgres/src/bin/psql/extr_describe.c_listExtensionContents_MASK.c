
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sverbuf ;
struct TYPE_9__ {int sversion; int quiet; int db; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (int ,TYPE_1__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_3__ VAR_1 ;
 int FUNC_11 (TYPE_1__*) ;

bool
FUNC_12(const char *VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 int VAR_5;

 if (VAR_1.sversion < 90100)
 {
  char VAR_6[32];

  FUNC_8("The server (version %s) does not support extensions.",
      FUNC_5(VAR_1.sversion, 0,
             VAR_6, sizeof(VAR_6)));
  return 1;
 }

 FUNC_6(&VAR_3);
 FUNC_9(&VAR_3,
       "SELECT e.extname, e.oid\n"
       "FROM pg_catalog.pg_extension e\n");

 FUNC_10(VAR_1.db, &VAR_3, VAR_2,
        0, 0,
        ((void*)0), "e.extname", ((void*)0),
        ((void*)0));

 FUNC_4(&VAR_3, "ORDER BY 1;");

 VAR_4 = FUNC_3(VAR_3.data);
 FUNC_11(&VAR_3);
 if (!VAR_4)
  return 0;

 if (FUNC_2(VAR_4) == 0)
 {
  if (!VAR_1.quiet)
  {
   if (VAR_2)
    FUNC_8("Did not find any extension named \"%s\".",
        VAR_2);
   else
    FUNC_8("Did not find any extensions.");
  }
  FUNC_0(VAR_4);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_4); VAR_5++)
 {
  const char *VAR_7;
  const char *VAR_8;

  VAR_7 = FUNC_1(VAR_4, VAR_5, 0);
  VAR_8 = FUNC_1(VAR_4, VAR_5, 1);

  if (!FUNC_7(VAR_7, VAR_8))
  {
   FUNC_0(VAR_4);
   return 0;
  }
  if (VAR_0)
  {
   FUNC_0(VAR_4);
   return 0;
  }
 }

 FUNC_0(VAR_4);
 return 1;
}
