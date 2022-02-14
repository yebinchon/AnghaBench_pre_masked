
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, int VAR_1)
{
 StringInfoData VAR_2;

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_2, VAR_0);
 FUNC_0(&VAR_2, "_%d", VAR_1);
 return VAR_2.data;
}
