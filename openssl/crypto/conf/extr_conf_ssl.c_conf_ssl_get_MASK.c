
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; size_t cmd_count; int const* cmds; } ;
typedef int SSL_CONF_CMD ;


 TYPE_1__* VAR_0 ;

const SSL_CONF_CMD *FUNC_0(size_t VAR_1, const char **VAR_2, size_t *VAR_3)
{
    *VAR_2 = VAR_0[VAR_1].name;
    *VAR_3 = VAR_0[VAR_1].cmd_count;
    return VAR_0[VAR_1].cmds;
}
