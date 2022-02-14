
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cons; } ;
struct TYPE_5__ {int context; } ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 void* VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int ) ;
 void* FUNC_7 (void*,char*) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (int ,char*) ;
 char* FUNC_10 (char*) ;
 void* FUNC_11 (char const*) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static bool FUNC_13(RCore *VAR_3, const char *VAR_4) {
 bool VAR_5 = 0;
 char *VAR_6;
 if (!VAR_4 || !*VAR_4) {
  return 0;
 }
 if (!FUNC_6 (VAR_4, "default", FUNC_12 (VAR_4))) {
  VAR_2 = FUNC_11 (VAR_4);
  FUNC_4 (VAR_3->cons->context);
  return 1;
 }
 char *VAR_7 = FUNC_11 (VAR_4);

 char *VAR_8 = FUNC_9 (FUNC_0 (VAR_0, "%s"), VAR_7);
 char *VAR_9 = VAR_8 ? FUNC_8 (VAR_8) : ((void*)0);
 FUNC_2 (VAR_8);

 VAR_8 = FUNC_9 (FUNC_0 (VAR_1, "%s"), VAR_7);
 VAR_6 = VAR_8 ? FUNC_10 (VAR_8) : ((void*)0);
 FUNC_2 (VAR_8);

 if (!FUNC_3 (VAR_3, VAR_9)) {
  if (FUNC_3 (VAR_3, VAR_6)) {
   VAR_2 = FUNC_7 (VAR_2, VAR_7);
  } else {
   if (FUNC_3 (VAR_3, VAR_7)) {
    VAR_2 = FUNC_7 (VAR_2, VAR_7);
   } else {
    char *VAR_10 = FUNC_5 (VAR_7);
    FUNC_1 ("eco: cannot open colorscheme profile (%s)\n", VAR_10);
    FUNC_2 (VAR_10);
    VAR_5 = 1;
   }
  }
 }
 FUNC_2 (VAR_9);
 FUNC_2 (VAR_6);
 FUNC_2 (VAR_7);
 return !VAR_5;
}
