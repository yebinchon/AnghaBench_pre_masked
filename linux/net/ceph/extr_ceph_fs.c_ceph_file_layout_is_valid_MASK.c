
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_file_layout {int stripe_unit; int stripe_count; int object_size; } ;
typedef int __u32 ;


 int VAR_0 ;

int FUNC_0(const struct ceph_file_layout *VAR_1)
{
 __u32 VAR_2 = VAR_1->stripe_unit;
 __u32 VAR_3 = VAR_1->stripe_count;
 __u32 VAR_4 = VAR_1->object_size;


 if (!VAR_2 || (VAR_2 & (VAR_0-1)))
  return 0;
 if (!VAR_4 || (VAR_4 & (VAR_0-1)))
  return 0;

 if (VAR_4 < VAR_2 || VAR_4 % VAR_2)
  return 0;

 if (!VAR_3)
  return 0;
 return 1;
}
