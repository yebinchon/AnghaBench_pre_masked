
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;


 char* FUNC_0 (char*,...) ;

__attribute__((used)) static char *
FUNC_1(bool VAR_0, int32 VAR_1)
{
 const char *VAR_2 = VAR_0 ? " with time zone" : " without time zone";

 if (VAR_1 >= 0)
  return FUNC_0("(%d)%s", (int) VAR_1, VAR_2);
 else
  return FUNC_0("%s", VAR_2);
}
