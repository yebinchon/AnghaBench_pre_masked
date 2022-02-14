
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_5__ {int sun_family; int sin_family; unsigned short sin_port; int sin6_family; unsigned short sin6_port; struct in6_addr sin6_addr; struct in_addr sin_addr; int sun_path; } ;
struct TYPE_4__ {TYPE_2__ s_in6; TYPE_2__ s_in; TYPE_2__ s_un; } ;
typedef TYPE_1__ BIO_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ,void const*,int) ;

int FUNC_2(BIO_ADDR *VAR_3, int VAR_4,
                     const void *VAR_5, size_t VAR_6,
                     unsigned short VAR_7)
{
    if (VAR_4 == VAR_0) {
        if (VAR_6 != sizeof(struct in_addr))
            return 0;
        FUNC_0(&VAR_3->s_in, 0, sizeof(VAR_3->s_in));
        VAR_3->s_in.sin_family = VAR_4;
        VAR_3->s_in.sin_port = VAR_7;
        VAR_3->s_in.sin_addr = *(struct in_addr *)VAR_5;
        return 1;
    }
    return 0;
}
