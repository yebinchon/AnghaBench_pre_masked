
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cmd; char* arg; } ;
typedef TYPE_1__ SSL_CONF_CMD ;



void FUNC_0(const SSL_CONF_CMD *VAR_0, size_t VAR_1, char **VAR_2,
                      char **VAR_3)
{
    *VAR_2 = VAR_0[VAR_1].cmd;
    *VAR_3 = VAR_0[VAR_1].arg;
}
