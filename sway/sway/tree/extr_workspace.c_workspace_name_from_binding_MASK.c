
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_binding {char* command; int order; } ;


 int VAR_0 ;
 char* FUNC_0 (char**,char*,int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 char* FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char*,size_t) ;
 int FUNC_11 (int ,char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (char const*,char*) ;

__attribute__((used)) static void FUNC_15(const struct sway_binding * VAR_1,
  const char* VAR_2, int *VAR_3, char **VAR_4) {
 char *VAR_5 = FUNC_6(VAR_1->command);
 char *VAR_6 = VAR_5;
 char *VAR_7 = ((void*)0);


 char *VAR_8 = FUNC_0(&VAR_5, " ", ((void*)0));
 if (VAR_5) {
  VAR_7 = FUNC_0(&VAR_5, ",;", ((void*)0));
 }



 if (FUNC_5("workspace", VAR_8) == 0 && VAR_7) {
  char *VAR_9 = FUNC_6(VAR_7);
  VAR_9 = FUNC_1(VAR_9);
  FUNC_7(VAR_9);
  FUNC_11(VAR_0, "Got valid workspace command for target: '%s'",
    VAR_9);



  if (FUNC_5(VAR_9, "next") == 0 ||
    FUNC_5(VAR_9, "prev") == 0 ||
    FUNC_9(VAR_9, "next_on_output",
     FUNC_8("next_on_output")) == 0 ||
    FUNC_9(VAR_9, "prev_on_output",
     FUNC_8("next_on_output")) == 0 ||
    FUNC_5(VAR_9, "number") == 0 ||
    FUNC_5(VAR_9, "back_and_forth") == 0 ||
    FUNC_5(VAR_9, "current") == 0) {
   FUNC_2(VAR_9);
   FUNC_2(VAR_6);
   return;
  }


  if (FUNC_9(VAR_9, "number ", FUNC_8("number ")) == 0) {
   size_t VAR_10 = FUNC_8(VAR_9) - FUNC_8("number ") + 1;
   char *VAR_11 = FUNC_4(VAR_10);
   FUNC_10(VAR_11, VAR_9 + FUNC_8("number "), VAR_10 - 1);
   VAR_11[VAR_10 - 1] = '\0';
   FUNC_2(VAR_9);
   VAR_9 = VAR_11;
   FUNC_11(VAR_0, "Isolated name from workspace number: '%s'", VAR_9);


   if (FUNC_3(VAR_9[0]) && FUNC_13(VAR_9)) {
    FUNC_2(VAR_9);
    FUNC_2(VAR_6);
    return;
   }
  }


  if (FUNC_12(VAR_9)) {
   FUNC_2(VAR_9);
   FUNC_2(VAR_6);
   return;
  }



  if (!FUNC_14(VAR_2, VAR_9)) {
   FUNC_2(VAR_9);
   FUNC_2(VAR_6);
   return;
  }

  if (VAR_1->order < *VAR_3) {
   *VAR_3 = VAR_1->order;
   FUNC_2(*VAR_4);
   *VAR_4 = VAR_9;
   FUNC_11(VAR_0, "Workspace: Found free name %s", VAR_9);
  } else {
   FUNC_2(VAR_9);
  }
 }
 FUNC_2(VAR_6);
}
