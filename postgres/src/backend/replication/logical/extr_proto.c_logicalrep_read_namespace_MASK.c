
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 char* FUNC_0 (int ) ;

__attribute__((used)) static const char *
FUNC_1(StringInfo VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1[0] == '\0')
  VAR_1 = "pg_catalog";

 return VAR_1;
}
