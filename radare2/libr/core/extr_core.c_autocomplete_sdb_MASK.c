
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sdb; } ;
typedef int Sdb ;
typedef int RLineCompletion ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,int) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*,...) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (int *,int *,int ,char*) ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char*,char*) ;

__attribute__((used)) static void FUNC_11 (RCore *VAR_0, RLineCompletion *VAR_1, const char *VAR_2) {
 FUNC_1 (VAR_0 && VAR_1 && VAR_2);
 char *VAR_3 = FUNC_7 (VAR_2, '>');
 Sdb *VAR_4 = VAR_0->sdb;
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 if (VAR_3) {
  VAR_2 = FUNC_5 (VAR_3 + 1);
 }
 VAR_5 = FUNC_3 (VAR_2);
 VAR_6 = FUNC_10 (VAR_5, "/");
 if (VAR_6) {
  *VAR_6 = 0;
  char *VAR_15 = VAR_6 + 1;
  VAR_8 = FUNC_10 (VAR_15, "/");
  if (!VAR_8) {
   char *VAR_16 = VAR_6 + 1;
   int VAR_17 = FUNC_8 (VAR_16);
   VAR_7 = FUNC_6 (VAR_4, ((void*)0), 0, "anal/**");
   if (!VAR_7) {
    return;
   }
   while (*VAR_7) {
    VAR_9 = FUNC_7 (VAR_7, '\n');
    if (!VAR_9) {
     break;
    }
    VAR_10 = FUNC_2 (VAR_7, VAR_9 - VAR_7);
    if (!FUNC_9 (VAR_16, VAR_10, VAR_17)) {
     char *VAR_18 = FUNC_4 ("anal/%s/", VAR_10);
     FUNC_0 (VAR_1, VAR_18);
    }
    VAR_7 += VAR_9 - VAR_7 + 1;
   }

  } else {
   char *VAR_19 = VAR_8 + 1;
   int VAR_20 = FUNC_8 (VAR_19);
   char *VAR_21 = FUNC_10 (VAR_15, "/");
   *VAR_21 = 0;
   VAR_11 = FUNC_4 ("anal/%s/*", VAR_15);
   VAR_7 = FUNC_6 (VAR_4, ((void*)0), 0, VAR_11);
   if (!VAR_7) {
    return;
   }
   while (*VAR_7) {
    VAR_13 = FUNC_7 (VAR_7, '\n');
    if (!VAR_13) {
     break;
    }
    VAR_12 = FUNC_2 (VAR_7, VAR_13 - VAR_7);
    VAR_14 = FUNC_10 (VAR_12, "=");
    *VAR_14 = 0;
    if (!FUNC_9 (VAR_19, VAR_12, VAR_20)) {
     char *VAR_22 = FUNC_4 ("anal/%s/%s", VAR_15, VAR_12);
     FUNC_0 (VAR_1, VAR_22);
    }
    VAR_7 += VAR_13 - VAR_7 + 1;
   }
  }
 } else {
  int VAR_23 = FUNC_8 (VAR_5);
  if (!FUNC_9 (VAR_5, "anal", VAR_23)) {
   FUNC_0 (VAR_1, "anal/");
  }
 }
}
