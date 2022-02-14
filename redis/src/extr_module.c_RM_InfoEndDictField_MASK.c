
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* info; scalar_t__ in_dict_field; } ;
typedef TYPE_1__ RedisModuleInfoCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

int FUNC_3(RedisModuleInfoCtx *VAR_2) {
    if (!VAR_2->in_dict_field)
        return VAR_0;

    if (VAR_2->info[FUNC_2(VAR_2->info)-1]==',')
        FUNC_0(VAR_2->info, -1);
    VAR_2->info = FUNC_1(VAR_2->info, "\r\n");
    VAR_2->in_dict_field = 0;
    return VAR_1;
}
