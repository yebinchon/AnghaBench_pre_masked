
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hash_netnet6_elem {scalar_t__ ccmp; TYPE_1__* ip; } ;
struct TYPE_2__ {int in6; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static inline bool
FUNC_1(const struct hash_netnet6_elem *VAR_0,
   const struct hash_netnet6_elem *VAR_1,
   u32 *VAR_2)
{
 return FUNC_0(&VAR_0->ip[0].in6, &VAR_1->ip[0].in6) &&
        FUNC_0(&VAR_0->ip[1].in6, &VAR_1->ip[1].in6) &&
        VAR_0->ccmp == VAR_1->ccmp;
}
