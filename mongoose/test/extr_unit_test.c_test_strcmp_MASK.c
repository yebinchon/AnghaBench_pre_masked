
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char* p; int len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct mg_str*,char*) ;
 scalar_t__ FUNC_3 (struct mg_str*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static const char *FUNC_5(void) {
  struct mg_str VAR_0;

  VAR_0 = "aa";
  VAR_0 = FUNC_4(VAR_0);
  FUNC_1(FUNC_2(&VAR_0, "aa"), 0);
  FUNC_1(FUNC_3(&VAR_0, "aa"), 0);
  FUNC_0(FUNC_2(&VAR_0, "ab") < 0);
  FUNC_0(FUNC_3(&VAR_0, "ab") < 0);
  FUNC_0(FUNC_2(&VAR_0, "abb") < 0);
  FUNC_0(FUNC_3(&VAR_0, "abb") < 0);
  FUNC_0(FUNC_2(&VAR_0, "b") < 0);
  FUNC_0(FUNC_3(&VAR_0, "b") < 0);
  return ((void*)0);
}
