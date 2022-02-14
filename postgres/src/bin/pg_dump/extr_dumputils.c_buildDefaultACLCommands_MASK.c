
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (char*,int *,int *,char const*,char const*,char const*,char const*,int ,int,TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

bool
FUNC_7(const char *VAR_0, const char *VAR_1,
      const char *VAR_2, const char *VAR_3,
      const char *VAR_4, const char *VAR_5,
      const char *VAR_6,
      int VAR_7,
      PQExpBuffer VAR_8)
{
 PQExpBuffer VAR_9;

 VAR_9 = FUNC_3();







 FUNC_0(VAR_9, "ALTER DEFAULT PRIVILEGES FOR ROLE %s ",
       FUNC_5(VAR_6));
 if (VAR_1)
  FUNC_0(VAR_9, "IN SCHEMA %s ", FUNC_5(VAR_1));

 if (FUNC_6(VAR_4) != 0 || FUNC_6(VAR_5) != 0)
 {
  FUNC_1(VAR_8, "SELECT pg_catalog.binary_upgrade_set_record_init_privs(true);\n");
  if (!FUNC_2("", ((void*)0), ((void*)0), VAR_0,
         VAR_4, VAR_5, VAR_6,
         VAR_9->data, VAR_7, VAR_8))
  {
   FUNC_4(VAR_9);
   return 0;
  }
  FUNC_1(VAR_8, "SELECT pg_catalog.binary_upgrade_set_record_init_privs(false);\n");
 }

 if (!FUNC_2("", ((void*)0), ((void*)0), VAR_0,
        VAR_2, VAR_3, VAR_6,
        VAR_9->data, VAR_7, VAR_8))
 {
  FUNC_4(VAR_9);
  return 0;
 }

 FUNC_4(VAR_9);

 return 1;
}
