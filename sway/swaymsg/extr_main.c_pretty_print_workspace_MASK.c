
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;


 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int **) ;
 int FUNC_3 (char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_4(json_object *VAR_0) {
 json_object *VAR_1, *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6,
    *VAR_7, *VAR_8;
 FUNC_2(VAR_0, "name", &VAR_1);
 FUNC_2(VAR_0, "rect", &VAR_2);
 FUNC_2(VAR_0, "visible", &VAR_3);
 FUNC_2(VAR_0, "output", &VAR_4);
 FUNC_2(VAR_0, "urgent", &VAR_5);
 FUNC_2(VAR_0, "layout", &VAR_6);
 FUNC_2(VAR_0, "representation", &VAR_7);
 FUNC_2(VAR_0, "focused", &VAR_8);
 FUNC_3(
  "Workspace %s%s%s%s\n"
  "  Output: %s\n"
  "  Layout: %s\n"
  "  Representation: %s\n\n",
  FUNC_1(VAR_1),
  FUNC_0(VAR_8) ? " (focused)" : "",
  !FUNC_0(VAR_3) ? " (off-screen)" : "",
  FUNC_0(VAR_5) ? " (urgent)" : "",
  FUNC_1(VAR_4),
  FUNC_1(VAR_6),
  FUNC_1(VAR_7)
 );
}
