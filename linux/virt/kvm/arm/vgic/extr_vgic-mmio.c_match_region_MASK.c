
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_register_region {unsigned int const reg_offset; unsigned int const len; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const unsigned int VAR_2 = (unsigned long)VAR_0;
 const struct vgic_register_region *VAR_3 = VAR_1;

 if (VAR_2 < VAR_3->reg_offset)
  return -1;

 if (VAR_2 >= VAR_3->reg_offset + VAR_3->len)
  return 1;

 return 0;
}
