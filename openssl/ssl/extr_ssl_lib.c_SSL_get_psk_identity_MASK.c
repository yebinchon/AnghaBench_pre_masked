
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* session; } ;
struct TYPE_4__ {char const* psk_identity; } ;
typedef TYPE_2__ SSL ;



const char *FUNC_0(const SSL *VAR_0)
{
    if (VAR_0 == ((void*)0) || VAR_0->session == ((void*)0))
        return ((void*)0);
    return VAR_0->session->psk_identity;
}
