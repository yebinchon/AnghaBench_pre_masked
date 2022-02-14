
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* anal; } ;
struct TYPE_4__ {int * sdb_types; } ;
typedef int Sdb ;
typedef TYPE_2__ RCore ;
typedef int PJ ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,char const*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 char* FUNC_10 (char const*) ;
 char* FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (char*,char const*,...) ;
 char* FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int ,int ) ;
 char* FUNC_15 (int *,int *,int,int ) ;
 char* FUNC_16 (char*,char) ;

__attribute__((used)) static void FUNC_17(RCore *VAR_0, const char *VAR_1) {
 Sdb *VAR_2 = VAR_0->anal->sdb_types;
 PJ *VAR_3 = FUNC_6 ();
 if (!VAR_3) {
  return;
 }
 FUNC_7 (VAR_3);
 char *VAR_4 = FUNC_15 (VAR_2, ((void*)0), -1, FUNC_12 ("func.%s.args", VAR_1));
 const char *VAR_5 = FUNC_10 (VAR_1);
 int VAR_6, VAR_7 = FUNC_14 (VAR_2, FUNC_12 ("func.%s.args", VAR_5), 0);
 FUNC_5 (VAR_3, "name", VAR_5);
 FUNC_5 (VAR_3, "ret", FUNC_11 (VAR_2, FUNC_12 ("func.%s.ret", VAR_5), 0));
 FUNC_4 (VAR_3, "args");
 FUNC_1 (VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  char *VAR_8 = FUNC_13 (VAR_2, FUNC_12 ("func.%s.arg.%d", VAR_5, VAR_6), 0);
  if (!VAR_8) {
   continue;
  }
  char *VAR_9 = FUNC_16 (VAR_8, ',');
  if (VAR_9) {
   *VAR_9++ = 0;
  }
  FUNC_7 (VAR_3);
  FUNC_5 (VAR_3, "type", VAR_8);
  if (VAR_9) {
   FUNC_5 (VAR_3, "name", VAR_9);
  } else {
   FUNC_5 (VAR_3, "name", "(null)");
  }
  FUNC_2 (VAR_3);
 }
 FUNC_2 (VAR_3);
 FUNC_2 (VAR_3);
 FUNC_9 ("%s", FUNC_8 (VAR_3));
 FUNC_3 (VAR_3);
 FUNC_0 (VAR_4);
}
