
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_used_elem {int dummy; } ;
struct vring_desc {int dummy; } ;
typedef int __u16 ;



__attribute__((used)) static inline unsigned FUNC_0(unsigned int VAR_0, unsigned long VAR_1)
{
 return ((sizeof(struct vring_desc) * VAR_0 + sizeof(__u16) * (3 + VAR_0)
    + VAR_1 - 1) & ~(VAR_1 - 1))
  + sizeof(__u16) * 3 + sizeof(struct vring_used_elem) * VAR_0;
}
