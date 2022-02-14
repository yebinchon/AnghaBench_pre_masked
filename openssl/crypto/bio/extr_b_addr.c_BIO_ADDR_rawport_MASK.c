
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned short sin6_port; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
struct TYPE_6__ {unsigned short sin_port; } ;
struct TYPE_9__ {TYPE_3__ s_in6; TYPE_2__ sa; TYPE_1__ s_in; } ;
typedef TYPE_4__ BIO_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

unsigned short FUNC_0(const BIO_ADDR *VAR_2)
{
    if (VAR_2->sa.sa_family == VAR_0)
        return VAR_2->s_in.sin_port;




    return 0;
}
