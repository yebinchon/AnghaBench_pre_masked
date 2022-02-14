
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ min_tls; } ;
typedef TYPE_1__ SSL_CIPHER ;


 scalar_t__ VAR_0 ;
 char const* FUNC_0 (scalar_t__) ;

const char *FUNC_1(const SSL_CIPHER *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return "(NONE)";





    if (VAR_1->min_tls == VAR_0)
        return "TLSv1.0";
    return FUNC_0(VAR_1->min_tls);
}
