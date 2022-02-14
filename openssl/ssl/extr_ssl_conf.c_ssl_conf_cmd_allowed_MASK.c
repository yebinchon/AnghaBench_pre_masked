
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int flags; } ;
typedef TYPE_1__ ssl_conf_cmd_tbl ;
struct TYPE_6__ {unsigned int flags; } ;
typedef TYPE_2__ SSL_CONF_CTX ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_0(SSL_CONF_CTX *VAR_3, const ssl_conf_cmd_tbl * VAR_4)
{
    unsigned int VAR_5 = VAR_4->flags;
    unsigned int VAR_6 = VAR_3->flags;
    if ((VAR_5 & VAR_2) && !(VAR_6 & VAR_2))
        return 0;
    if ((VAR_5 & VAR_1) && !(VAR_6 & VAR_1))
        return 0;
    if ((VAR_5 & VAR_0)
        && !(VAR_6 & VAR_0))
        return 0;
    return 1;
}
