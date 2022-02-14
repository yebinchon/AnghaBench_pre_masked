
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ private_data; } ;
struct TYPE_4__ {unsigned int cmd_list_length; } ;
typedef TYPE_1__ ScriptModePrivateData ;
typedef TYPE_2__ Mode ;



__attribute__((used)) static unsigned int FUNC_0 ( const Mode *VAR_0 )
{
    const ScriptModePrivateData *VAR_1 = (const ScriptModePrivateData *) VAR_0->private_data;
    return VAR_1->cmd_list_length;
}
