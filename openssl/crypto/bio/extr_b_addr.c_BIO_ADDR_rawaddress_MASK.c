
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int sun_path; } ;
struct TYPE_9__ {scalar_t__ sa_family; } ;
struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_7__ {int sin_addr; } ;
struct TYPE_11__ {TYPE_4__ s_un; TYPE_3__ sa; TYPE_2__ s_in6; TYPE_1__ s_in; } ;
typedef TYPE_5__ BIO_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,void const*,size_t) ;
 size_t FUNC_1 (int ) ;

int FUNC_2(const BIO_ADDR *VAR_3, void *VAR_4, size_t *VAR_5)
{
    size_t VAR_6 = 0;
    const void *VAR_7 = ((void*)0);

    if (VAR_3->sa.sa_family == VAR_0) {
        VAR_6 = sizeof(VAR_3->s_in.sin_addr);
        VAR_7 = &VAR_3->s_in.sin_addr;
    }
    if (VAR_7 == ((void*)0))
        return 0;

    if (VAR_4 != ((void*)0)) {
        FUNC_0(VAR_4, VAR_7, VAR_6);
    }
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_6;

    return 1;
}
