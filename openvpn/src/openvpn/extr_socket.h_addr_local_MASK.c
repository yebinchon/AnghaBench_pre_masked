
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool
FUNC_2(const struct sockaddr *VAR_1)
{
    if (!VAR_1)
    {
        return 0;
    }
    switch (VAR_1->sa_family)
    {
        case 129:
            return ((const struct sockaddr_in *)VAR_1)->sin_addr.s_addr == FUNC_1(VAR_0);

        case 128:
            return FUNC_0(&((const struct sockaddr_in6 *)VAR_1)->sin6_addr);

        default:
            return 0;
    }
}
