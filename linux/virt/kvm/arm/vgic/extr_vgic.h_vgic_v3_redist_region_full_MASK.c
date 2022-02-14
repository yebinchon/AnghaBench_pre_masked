
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_redist_region {scalar_t__ count; scalar_t__ free_index; } ;



__attribute__((used)) static inline bool
FUNC_0(struct vgic_redist_region *VAR_0)
{
 if (!VAR_0->count)
  return 0;

 return (VAR_0->free_index >= VAR_0->count);
}
