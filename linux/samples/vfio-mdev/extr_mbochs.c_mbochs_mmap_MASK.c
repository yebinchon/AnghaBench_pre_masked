
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_pgoff; scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; struct mdev_state* vm_private_data; int * vm_ops; } ;
struct mdev_state {scalar_t__ memsize; } ;
struct mdev_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mdev_state* FUNC_0 (struct mdev_device*) ;

__attribute__((used)) static int FUNC_1(struct mdev_device *VAR_5, struct vm_area_struct *VAR_6)
{
 struct mdev_state *VAR_7 = FUNC_0(VAR_5);

 if (VAR_6->vm_pgoff != VAR_1 >> VAR_2)
  return -VAR_0;
 if (VAR_6->vm_end < VAR_6->vm_start)
  return -VAR_0;
 if (VAR_6->vm_end - VAR_6->vm_start > VAR_7->memsize)
  return -VAR_0;
 if ((VAR_6->vm_flags & VAR_3) == 0)
  return -VAR_0;

 VAR_6->vm_ops = &VAR_4;
 VAR_6->vm_private_data = VAR_7;
 return 0;
}
