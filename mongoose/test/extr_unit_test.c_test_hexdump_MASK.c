
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int got ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,scalar_t__,char*,int) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static const char *FUNC_4(void) {
  const char *VAR_0 = "\1\2\3\4abcd";
  char VAR_1[256];

  const char *VAR_2 =
      "0000  01 02 03 04 61 62 63 64"
      "                          ....abcd\n";
  FUNC_0(FUNC_2(VAR_0, FUNC_3(VAR_0), VAR_1, sizeof(VAR_1)), (int) FUNC_3(VAR_2));
  FUNC_1(VAR_1, VAR_2);
  return ((void*)0);
}
