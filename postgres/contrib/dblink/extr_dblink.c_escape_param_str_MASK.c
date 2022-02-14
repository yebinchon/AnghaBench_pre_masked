
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char const) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0)
{
 const char *VAR_1;
 StringInfoData VAR_2;

 FUNC_1(&VAR_2);

 for (VAR_1 = VAR_0; *VAR_1; VAR_1++)
 {
  if (*VAR_1 == '\\' || *VAR_1 == '\'')
   FUNC_0(&VAR_2, '\\');
  FUNC_0(&VAR_2, *VAR_1);
 }

 return VAR_2.data;
}
