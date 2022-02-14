
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa; } ;
struct openvpn_sockaddr {TYPE_1__ addr; } ;
struct gc_arena {int dummy; } ;


 char const* FUNC_0 (int *,char const*,unsigned int const,struct gc_arena*) ;

__attribute__((used)) static inline
const char *
FUNC_1(const struct openvpn_sockaddr *VAR_0,
                          const char *VAR_1,
                          const unsigned int VAR_2,
                          struct gc_arena *VAR_3)
{
    return FUNC_0(&VAR_0->addr.sa, VAR_1, VAR_2, VAR_3);
}
