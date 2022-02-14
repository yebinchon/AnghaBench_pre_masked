
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENCODING ;


 int FUNC_0 (int const*,char const**,char const*,char**,char*) ;

__attribute__((used)) static int
FUNC_1(const ENCODING *VAR_0, const char *VAR_1, const char *VAR_2) {
  char VAR_3[1];
  char *VAR_4 = VAR_3;
  FUNC_0(VAR_0, &VAR_1, VAR_2, &VAR_4, VAR_4 + 1);
  if (VAR_4 == VAR_3)
    return -1;
  else
    return VAR_3[0];
}
