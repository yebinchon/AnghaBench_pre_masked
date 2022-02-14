
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uri_designator ;
typedef int short_uri_designator ;


 scalar_t__ FUNC_0 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{

 static const char VAR_1[] = "postgresql://";
 static const char VAR_2[] = "postgres://";

 if (FUNC_0(VAR_0, VAR_1,
    sizeof(VAR_1) - 1) == 0)
  return sizeof(VAR_1) - 1;

 if (FUNC_0(VAR_0, VAR_2,
    sizeof(VAR_2) - 1) == 0)
  return sizeof(VAR_2) - 1;

 return 0;
}
