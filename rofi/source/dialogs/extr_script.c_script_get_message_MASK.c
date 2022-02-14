
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* private_data; } ;
struct TYPE_4__ {int message; } ;
typedef TYPE_1__ ScriptModePrivateData ;
typedef TYPE_2__ Mode ;


 char* FUNC_0 (int ) ;

__attribute__((used)) static char *FUNC_1 ( const Mode *VAR_0 )
{
    ScriptModePrivateData *VAR_1 = VAR_0->private_data;
    return FUNC_0 ( VAR_1->message );
}
