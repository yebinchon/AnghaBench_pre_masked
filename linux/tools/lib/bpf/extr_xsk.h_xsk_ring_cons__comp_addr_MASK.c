
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_ring_cons {size_t mask; scalar_t__ ring; } ;
typedef int __u64 ;
typedef size_t __u32 ;



__attribute__((used)) static inline const __u64 *
FUNC_0(const struct xsk_ring_cons *VAR_0, __u32 VAR_1)
{
 const __u64 *VAR_2 = (const __u64 *)VAR_0->ring;

 return &VAR_2[VAR_1 & VAR_0->mask];
}
