
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_0,
         const char *VAR_1)
{
 StringInfoData VAR_2;

 FUNC_2(&VAR_2);
 if (VAR_0)
  FUNC_0(&VAR_2, "%s.", FUNC_3(VAR_0));
 FUNC_1(&VAR_2, FUNC_3(VAR_1));
 return VAR_2.data;
}
