
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sversion; } ;
typedef int PQExpBuffer ;


 int FUNC_0 (int ,char*,char const*,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(PQExpBuffer VAR_1, const char *VAR_2)
{
 if (VAR_0.sversion >= 80100)
  FUNC_0(VAR_1,
        "pg_catalog.array_to_string(%s, E'\\n') AS \"%s\"",
        VAR_2, FUNC_1("Access privileges"));
 else
  FUNC_0(VAR_1,
        "pg_catalog.array_to_string(%s, '\\n') AS \"%s\"",
        VAR_2, FUNC_1("Access privileges"));
}
