
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t locks_mask; int * locks; } ;
struct ila_net {TYPE_1__ xlat; } ;
struct ila_locator {int dummy; } ;
typedef int spinlock_t ;


 size_t FUNC_0 (struct ila_locator) ;

__attribute__((used)) static inline spinlock_t *FUNC_1(struct ila_net *VAR_0,
           struct ila_locator VAR_1)
{
 return &VAR_0->xlat.locks[FUNC_0(VAR_1) & VAR_0->xlat.locks_mask];
}
