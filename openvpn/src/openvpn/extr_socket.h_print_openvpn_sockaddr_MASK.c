
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa; } ;
struct openvpn_sockaddr {TYPE_1__ addr; } ;
struct gc_arena {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (int *,char*,int ,struct gc_arena*) ;

__attribute__((used)) static inline
const char *
FUNC_1(const struct openvpn_sockaddr *VAR_1,
                       struct gc_arena *VAR_2)
{
    return FUNC_0(&VAR_1->addr.sa, ":", VAR_0, VAR_2);
}
