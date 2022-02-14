
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 unsigned long VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (TYPE_1__*,unsigned long) ;
 unsigned long FUNC_2 (struct kvm*,int ) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (struct vm_area_struct*) ;

unsigned long FUNC_6(struct kvm *VAR_2, gfn_t VAR_3)
{
 struct vm_area_struct *VAR_4;
 unsigned long VAR_5, VAR_6;

 VAR_6 = VAR_0;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_3(VAR_5))
  return VAR_0;

 FUNC_0(&VAR_1->mm->mmap_sem);
 VAR_4 = FUNC_1(VAR_1->mm, VAR_5);
 if (!VAR_4)
  goto out;

 VAR_6 = FUNC_5(VAR_4);

out:
 FUNC_4(&VAR_1->mm->mmap_sem);

 return VAR_6;
}
