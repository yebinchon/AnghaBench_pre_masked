
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ila_net {int dummy; } ;
struct TYPE_3__ {int locator_match; } ;
struct TYPE_4__ {TYPE_1__ ip; } ;
struct ila_map {TYPE_2__ xp; } ;
typedef int spinlock_t ;


 int * FUNC_0 (struct ila_net*,int ) ;

__attribute__((used)) static inline spinlock_t *FUNC_1(struct ila_net *VAR_0,
         struct ila_map *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->xp.ip.locator_match);
}
