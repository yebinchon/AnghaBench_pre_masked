
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int **) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(json_object *VAR_0) {
 if (!FUNC_3(VAR_0)) {
  json_object *VAR_1;
  if (!FUNC_1(VAR_0, "error", &VAR_1)) {
   FUNC_2("An unknkown error occurred");
  } else {
   FUNC_2("Error: %s\n", FUNC_0(VAR_1));
  }
 }
}
