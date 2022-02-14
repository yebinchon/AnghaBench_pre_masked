
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nDeps; scalar_t__ objType; char const* name; int * dependencies; int ext_member; } ;
typedef int PQExpBuffer ;
typedef TYPE_1__ DumpableObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char const*,char const*) ;
 TYPE_1__* FUNC_3 (int ) ;
 char const* FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(PQExpBuffer VAR_1,
        DumpableObject *VAR_2,
        const char *VAR_3,
        const char *VAR_4,
        const char *VAR_5)
{
 DumpableObject *VAR_6 = ((void*)0);
 int VAR_7;

 if (!VAR_2->ext_member)
  return;







 for (VAR_7 = 0; VAR_7 < VAR_2->nDeps; VAR_7++)
 {
  VAR_6 = FUNC_3(VAR_2->dependencies[VAR_7]);
  if (VAR_6 && VAR_6->objType == VAR_0)
   break;
  VAR_6 = ((void*)0);
 }
 if (VAR_6 == ((void*)0))
  FUNC_2("could not find parent extension for %s %s",
     VAR_3, VAR_4);

 FUNC_1(VAR_1,
       "\n-- For binary upgrade, handle extension membership the hard way\n");
 FUNC_0(VAR_1, "ALTER EXTENSION %s ADD %s ",
       FUNC_4(VAR_6->name),
       VAR_3);
 if (VAR_5 && *VAR_5)
  FUNC_0(VAR_1, "%s.", FUNC_4(VAR_5));
 FUNC_0(VAR_1, "%s;\n", VAR_4);
}
