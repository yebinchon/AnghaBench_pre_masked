
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* anal; } ;
struct TYPE_3__ {int * sdb_types; } ;
typedef int Sdb ;
typedef TYPE_2__ RCore ;
typedef int PJ ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,char const*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 char* FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int *,int *,int,char*) ;

__attribute__((used)) static int FUNC_13(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_0;
 PJ *VAR_4 = FUNC_6 ();
 FUNC_7 (VAR_4);
 Sdb *VAR_5 = VAR_3->anal->sdb_types;
 char *VAR_6 = FUNC_10 ("type.%s.size", VAR_1);
 char *VAR_7 = FUNC_12 (VAR_5, ((void*)0), -1, VAR_6);
 char *VAR_8 = FUNC_10 ("type.%s", VAR_1);
 char *VAR_9 = FUNC_12 (VAR_5, ((void*)0), -1, VAR_8);
 FUNC_11 (VAR_9);
 FUNC_5 (VAR_4, "type", VAR_1);
 FUNC_4 (VAR_4, "size", VAR_7 ? FUNC_0 (VAR_7) : -1);
 FUNC_5 (VAR_4, "format", VAR_9);
 FUNC_2 (VAR_4);
 FUNC_9 ("%s", FUNC_8 (VAR_4));
 FUNC_3 (VAR_4);
 FUNC_1 (VAR_7);
 FUNC_1 (VAR_9);
 FUNC_1 (VAR_6);
 FUNC_1 (VAR_8);
 return 1;
}
