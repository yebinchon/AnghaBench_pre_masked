
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
typedef int kvm_pfn_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (TYPE_1__*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,int,int*,int *) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,int*,int,int*,int *) ;
 int FUNC_6 (unsigned long,int*,int,int*,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct vm_area_struct*,int) ;

__attribute__((used)) static kvm_pfn_t FUNC_9(unsigned long VAR_7, bool VAR_8, bool *VAR_9,
   bool VAR_10, bool *VAR_11)
{
 struct vm_area_struct *VAR_12;
 kvm_pfn_t VAR_13 = 0;
 int VAR_14, VAR_15;


 FUNC_0(VAR_8 && VAR_9);

 if (FUNC_4(VAR_7, VAR_10, VAR_11, &VAR_13))
  return VAR_13;

 if (VAR_8)
  return VAR_2;

 VAR_14 = FUNC_6(VAR_7, VAR_9, VAR_10, VAR_11, &VAR_13);
 if (VAR_14 == 1)
  return VAR_13;

 FUNC_2(&VAR_6->mm->mmap_sem);
 if (VAR_14 == -VAR_1 ||
       (!VAR_9 && FUNC_1(VAR_7))) {
  VAR_13 = VAR_3;
  goto exit;
 }

retry:
 VAR_12 = FUNC_3(VAR_6->mm, VAR_7, VAR_7 + 1);

 if (VAR_12 == ((void*)0))
  VAR_13 = VAR_2;
 else if (VAR_12->vm_flags & (VAR_4 | VAR_5)) {
  VAR_15 = FUNC_5(VAR_12, VAR_7, VAR_9, VAR_10, VAR_11, &VAR_13);
  if (VAR_15 == -VAR_0)
   goto retry;
  if (VAR_15 < 0)
   VAR_13 = VAR_2;
 } else {
  if (VAR_9 && FUNC_8(VAR_12, VAR_10))
   *VAR_9 = 1;
  VAR_13 = VAR_2;
 }
exit:
 FUNC_7(&VAR_6->mm->mmap_sem);
 return VAR_13;
}
