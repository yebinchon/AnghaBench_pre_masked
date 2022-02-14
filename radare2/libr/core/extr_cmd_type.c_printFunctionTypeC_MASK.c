
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


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,char const*,...) ;
 char* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 char* FUNC_7 (int *,int *,int,int ) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static void FUNC_9(RCore *VAR_0, const char *VAR_1) {
 Sdb *VAR_2 = VAR_0->anal->sdb_types;
 char *VAR_3 = FUNC_7 (VAR_2, ((void*)0), -1, FUNC_4 ("func.%s.args", VAR_1));
 const char *VAR_4 = FUNC_2 (VAR_1);
 int VAR_5, VAR_6 = FUNC_6 (VAR_2, FUNC_4 ("func.%s.args", VAR_4), 0);
 const char *VAR_7 = FUNC_3 (VAR_2, FUNC_4 ("func.%s.ret", VAR_4), 0);
 if (!VAR_7 || !VAR_4) {

  return;
 }

 FUNC_1 ("%s %s (", VAR_7, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  char *VAR_8 = FUNC_5 (VAR_2, FUNC_4 ("func.%s.arg.%d", VAR_4, VAR_5), 0);
  char *VAR_9 = FUNC_8 (VAR_8, ',');
  if (VAR_9) {
   *VAR_9++ = 0;
  }
  FUNC_1 ("%s%s %s", VAR_5==0? "": ", ", VAR_8, VAR_9);
 }
 FUNC_1 (");\n");
 FUNC_0 (VAR_3);
}
