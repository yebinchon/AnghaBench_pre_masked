
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sections; } ;
typedef TYPE_1__ config_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int *,char const*,char const*,char*) ;

void FUNC_2(config_t *VAR_0, const char *VAR_1, const char *VAR_2,
       bool VAR_3)
{
 char *VAR_4 = FUNC_0(VAR_3 ? "true" : "false");
 FUNC_1(VAR_0, &VAR_0->sections, VAR_1, VAR_2, VAR_4);
}
