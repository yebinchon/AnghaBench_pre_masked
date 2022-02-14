
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
 int VAR_1 = 0;
 bool VAR_2;

 for (VAR_2 = 1; *VAR_0; VAR_0++) {
  if (FUNC_0(*VAR_0)) {
   VAR_2 = 1;
  } else if (VAR_2) {
   VAR_2 = 0;
   VAR_1++;
  }
 }

 return VAR_1;
}
