
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {int num; } ;
typedef TYPE_1__ RDebug ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,char*,char**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8 (RDebug *VAR_1, const char *VAR_2, const char *VAR_3) {
 int VAR_4 = 0;
 char *VAR_5;
 char *VAR_6 = FUNC_7 (VAR_3);
 if (!VAR_6) {
  return 0;
 }
 if (!FUNC_6 (VAR_2, VAR_6)) {
  VAR_4 = 1;
 } else {

  ut64 VAR_7 = FUNC_3 (VAR_1, VAR_2, ((void*)0), ((void*)0));
  if (FUNC_1 (VAR_1, VAR_6, ">=", &VAR_5)) {
   if (0){}FUNC_5 (VAR_6);if (!FUNC_6(VAR_2,VAR_6) && VAR_7 >= FUNC_4 (VAR_1->num, VAR_5))
    VAR_4 = 1;
  } else if (FUNC_1 (VAR_1, VAR_6, "<=", &VAR_5)) {
   if (0){}FUNC_5 (VAR_6);if (!FUNC_6(VAR_2,VAR_6) && VAR_7 <= FUNC_4 (VAR_1->num, VAR_5))
    VAR_4 = 1;
  } else if (FUNC_1 (VAR_1, VAR_6, "==", &VAR_5)) {
   if (0){}FUNC_5 (VAR_6);if (!FUNC_6(VAR_2,VAR_6) && VAR_7 <= FUNC_4 (VAR_1->num, VAR_5))
    VAR_4 = 1;
  } else if (FUNC_1 (VAR_1, VAR_6, "<", &VAR_5)) {
   if (0){}FUNC_5 (VAR_6);if (!FUNC_6(VAR_2,VAR_6) && VAR_7 < FUNC_4 (VAR_1->num, VAR_5))
    VAR_4 = 1;
  } else if (FUNC_1 (VAR_1, VAR_6, ">", &VAR_5)) {
   if (0){}FUNC_5 (VAR_6);if (!FUNC_6(VAR_2,VAR_6) && VAR_7 > FUNC_4 (VAR_1->num, VAR_5))
    VAR_4 = 1;
  } else if (FUNC_1 (VAR_1, VAR_6, " ", &VAR_5)) {
   FUNC_5 (VAR_6);
   if (!FUNC_6 (VAR_2, VAR_6)) {
    ut64 VAR_8 = FUNC_4 (VAR_1->num, VAR_5);
    VAR_4 = FUNC_0 (VAR_1, VAR_8, VAR_6);
   }
  } else {
   if (!FUNC_6 (VAR_2, VAR_6)) {
    VAR_4 = 1;
   }
  }
 }
 FUNC_2 (VAR_6);
 return VAR_4;
}
