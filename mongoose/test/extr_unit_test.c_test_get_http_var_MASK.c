
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char* p; void* len; } ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (struct mg_str*,char*,char*,int) ;
 void* FUNC_4 (char*) ;

__attribute__((used)) static const char *FUNC_5(void) {
  char VAR_0[256];
  struct mg_str VAR_1;
  VAR_1.p = "key1=value1&key2=value2&key3=value%203&key4=value+4";
  VAR_1.len = FUNC_4(VAR_1.p);

  FUNC_0(FUNC_3(&VAR_1, "key1", VAR_0, sizeof(VAR_0)) > 0);
  FUNC_2(VAR_0, "value1");
  FUNC_0(FUNC_3(&VAR_1, "KEY1", VAR_0, sizeof(VAR_0)) > 0);
  FUNC_2(VAR_0, "value1");
  FUNC_0(FUNC_3(&VAR_1, "key2", VAR_0, sizeof(VAR_0)) > 0);
  FUNC_2(VAR_0, "value2");
  FUNC_0(FUNC_3(&VAR_1, "key3", VAR_0, sizeof(VAR_0)) > 0);
  FUNC_2(VAR_0, "value 3");
  FUNC_0(FUNC_3(&VAR_1, "key4", VAR_0, sizeof(VAR_0)) > 0);
  FUNC_2(VAR_0, "value 4");

  FUNC_1(FUNC_3(&VAR_1, "key1", ((void*)0), sizeof(VAR_0)), -2);
  FUNC_1(FUNC_3(&VAR_1, "key1", VAR_0, 0), -2);
  FUNC_1(FUNC_3(&VAR_1, ((void*)0), VAR_0, sizeof(VAR_0)), -1);
  FUNC_1(FUNC_3(&VAR_1, "key1", VAR_0, 1), -3);

  VAR_1.p = "key=broken%2";
  VAR_1.len = FUNC_4(VAR_1.p);
  FUNC_0(FUNC_3(&VAR_1, "key", VAR_0, sizeof(VAR_0)) < 0);

  VAR_1.p = "key=broken%2x";
  VAR_1.len = FUNC_4(VAR_1.p);
  FUNC_0(FUNC_3(&VAR_1, "key", VAR_0, sizeof(VAR_0)) < 0);

  FUNC_1(FUNC_3(&VAR_1, "inexistent", VAR_0, sizeof(VAR_0)), -4);

  return ((void*)0);
}
