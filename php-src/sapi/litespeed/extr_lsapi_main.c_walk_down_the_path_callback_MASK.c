
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* entry; } ;
typedef TYPE_2__ _lsapi_activate_user_ini_ctx ;
struct TYPE_3__ {int user_config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(char* VAR_1,
                                        char* VAR_2,
                                        void* VAR_3)
{
    _lsapi_activate_user_ini_ctx *VAR_4 = VAR_3;
    char VAR_5 = VAR_2[0];
    VAR_2[0] = 0;
    FUNC_1(VAR_1, FUNC_0(VAR_0), &VAR_4->entry->user_config);
    VAR_2[0] = VAR_5;
}
