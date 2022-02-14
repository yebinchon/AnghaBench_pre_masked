
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_2)
{
const char *VAR_3 = VAR_1;
for (; VAR_2 > 0; VAR_2--)
  {
  while (*VAR_3++ != VAR_0) {};
  if (*VAR_3 == VAR_0) return "Error text not found (please report)";
  }
return VAR_3;
}
