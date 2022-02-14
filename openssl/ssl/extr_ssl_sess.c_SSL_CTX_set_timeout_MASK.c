
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long session_timeout; } ;
typedef TYPE_1__ SSL_CTX ;



long FUNC_0(SSL_CTX *VAR_0, long VAR_1)
{
    long VAR_2;
    if (VAR_0 == ((void*)0))
        return 0;
    VAR_2 = VAR_0->session_timeout;
    VAR_0->session_timeout = VAR_1;
    return VAR_2;
}
