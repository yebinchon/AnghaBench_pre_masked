
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_flags_t ;
struct vm_area_struct {int vm_flags; int vm_end; int vm_start; struct vm_area_struct* vm_next; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int def_flags; struct vm_area_struct* mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (struct vm_area_struct*,struct vm_area_struct**,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(int VAR_7)
{
 struct vm_area_struct * VAR_8, * VAR_9 = ((void*)0);
 vm_flags_t VAR_10 = 0;

 VAR_6->mm->def_flags &= VAR_4;
 if (VAR_7 & VAR_1) {
  VAR_6->mm->def_flags |= VAR_3;

  if (VAR_7 & VAR_2)
   VAR_6->mm->def_flags |= VAR_5;

  if (!(VAR_7 & VAR_0))
   goto out;
 }

 if (VAR_7 & VAR_0) {
  VAR_10 |= VAR_3;
  if (VAR_7 & VAR_2)
   VAR_10 |= VAR_5;
 }

 for (VAR_8 = VAR_6->mm->mmap; VAR_8 ; VAR_8 = VAR_9->vm_next) {
  vm_flags_t VAR_11;

  VAR_11 = VAR_8->vm_flags & VAR_4;
  VAR_11 |= VAR_10;


  FUNC_1(VAR_8, &VAR_9, VAR_8->vm_start, VAR_8->vm_end, VAR_11);
  FUNC_0();
 }
out:
 return 0;
}
