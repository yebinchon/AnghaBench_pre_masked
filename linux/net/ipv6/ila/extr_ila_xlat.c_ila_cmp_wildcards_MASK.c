
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifindex; } ;
struct ila_map {TYPE_1__ xp; } ;
struct ila_addr {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct ila_map *VAR_0,
        struct ila_addr *VAR_1, int VAR_2)
{
 return (VAR_0->xp.ifindex && VAR_0->xp.ifindex != VAR_2);
}
