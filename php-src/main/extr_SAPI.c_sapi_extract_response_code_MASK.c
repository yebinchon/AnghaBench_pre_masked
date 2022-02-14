
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
 int VAR_1 = 200;
 const char *VAR_2;

 for (VAR_2 = VAR_0; *VAR_2; VAR_2++) {
  if (*VAR_2 == ' ' && *(VAR_2 + 1) != ' ') {
   VAR_1 = FUNC_0(VAR_2 + 1);
   break;
  }
 }

 return VAR_1;
}
