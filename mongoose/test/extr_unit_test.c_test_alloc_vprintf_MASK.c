
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,int,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static const char *FUNC_5(void) {
  char VAR_0[5], *VAR_1 = VAR_0;

  FUNC_1(FUNC_3(&VAR_1, sizeof(VAR_0), "%d", 123), 3);
  FUNC_0(VAR_1 == VAR_0);
  FUNC_2(VAR_1, "123");

  FUNC_1(FUNC_3(&VAR_1, sizeof(VAR_0), "%d", 123456789), 9);
  FUNC_0(VAR_1 != VAR_0);
  FUNC_2(VAR_1, "123456789");
  FUNC_4(VAR_1);

  return ((void*)0);
}
