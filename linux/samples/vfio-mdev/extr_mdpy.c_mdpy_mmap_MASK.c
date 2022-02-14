
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_pgoff; scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; } ;
struct mdev_state {scalar_t__ memsize; int memblk; } ;
struct mdev_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mdev_state* FUNC_0 (struct mdev_device*) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mdev_device *VAR_4, struct vm_area_struct *VAR_5)
{
 struct mdev_state *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->vm_pgoff != VAR_1 >> VAR_2)
  return -VAR_0;
 if (VAR_5->vm_end < VAR_5->vm_start)
  return -VAR_0;
 if (VAR_5->vm_end - VAR_5->vm_start > VAR_6->memsize)
  return -VAR_0;
 if ((VAR_5->vm_flags & VAR_3) == 0)
  return -VAR_0;

 return FUNC_1(VAR_5, VAR_5->vm_start,
        VAR_6->memblk,
        VAR_5->vm_end - VAR_5->vm_start);
}
