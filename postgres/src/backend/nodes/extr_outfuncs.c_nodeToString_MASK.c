
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void const*) ;

char *
FUNC_2(const void *VAR_0)
{
 StringInfoData VAR_1;


 FUNC_0(&VAR_1);
 FUNC_1(&VAR_1, VAR_0);
 return VAR_1.data;
}
