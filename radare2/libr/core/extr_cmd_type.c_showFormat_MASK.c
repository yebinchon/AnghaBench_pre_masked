
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* anal; } ;
struct TYPE_4__ {int sdb_types; } ;
typedef TYPE_2__ RCore ;
typedef int PJ ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int ,char const*) ;
 char* FUNC_11 (int ,char const*,int ) ;
 int FUNC_12 (char const*,char*) ;

__attribute__((used)) static void FUNC_13(RCore *VAR_0, const char *VAR_1, int VAR_2) {
 const char *VAR_3 = FUNC_11 (VAR_0->anal->sdb_types, VAR_1, 0);
 if (VAR_3 && !FUNC_12 (VAR_3, "enum")) {
  FUNC_0 ("IS ENUM\n");
 } else {
  char *VAR_4 = FUNC_10 (VAR_0->anal->sdb_types, VAR_1);
  if (VAR_4) {
   FUNC_9 (VAR_4);
   if (VAR_2 == 'j') {
    PJ *VAR_5 = FUNC_5 ();
    if (!VAR_5) {
     return;
    }
    FUNC_6 (VAR_5);
    FUNC_4 (VAR_5, "name", VAR_1);
    FUNC_4 (VAR_5, "format", VAR_4);
    FUNC_2 (VAR_5);
    FUNC_8 ("%s", FUNC_7 (VAR_5));
    FUNC_3 (VAR_5);
   } else {
    if (VAR_2) {
     FUNC_8 ("pf.%s %s\n", VAR_1, VAR_4);
    } else {
     FUNC_8 ("pf %s\n", VAR_4);
    }
   }
   FUNC_1 (VAR_4);
  } else {
   FUNC_0 ("Cannot find '%s' type\n", VAR_1);
  }
 }
}
