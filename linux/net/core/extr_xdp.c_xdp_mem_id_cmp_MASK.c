
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ id; } ;
struct xdp_mem_allocator {TYPE_1__ mem; } ;
struct rhashtable_compare_arg {scalar_t__ key; } ;



__attribute__((used)) static int FUNC_0(struct rhashtable_compare_arg *VAR_0,
     const void *VAR_1)
{
 const struct xdp_mem_allocator *VAR_2 = VAR_1;
 u32 VAR_3 = *(u32 *)VAR_0->key;

 return VAR_2->mem.id != VAR_3;
}
