
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* anal; } ;
struct TYPE_4__ {int sdb_types; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*,char*,char*,char const*) ;
 char* FUNC_3 (int ,char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_0;
 char *VAR_4 = FUNC_3 (VAR_3->anal->sdb_types, VAR_2);
 if (!VAR_4) {
  FUNC_0 ("Can't fint type %s", VAR_2);
  return 1;
 }
 FUNC_1 ("{\"%s\":", VAR_2);
 FUNC_2 (VAR_3, "pfj %s @ 0x%s\n", VAR_4, VAR_1 + FUNC_4 ("link."));
 FUNC_1 ("}");
 return 1;
}
