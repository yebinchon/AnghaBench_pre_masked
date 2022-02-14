
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; unsigned long vm_end; struct vm_area_struct* vm_next; struct vm_area_struct* vm_prev; } ;
struct TYPE_5__ {int personality; TYPE_1__* mm; } ;
struct TYPE_4__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,int) ;
 TYPE_3__* VAR_17 ;
 scalar_t__ FUNC_4 (int *) ;
 struct vm_area_struct* FUNC_5 (TYPE_1__*,unsigned long) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct vm_area_struct*,struct vm_area_struct**,unsigned long,unsigned long,unsigned long) ;
 int FUNC_8 (struct vm_area_struct*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_9 (int const) ;
 unsigned long FUNC_10 (unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(unsigned long VAR_18, size_t VAR_19,
  unsigned long VAR_20, int VAR_21)
{
 unsigned long VAR_22, VAR_23, VAR_24, VAR_25;
 struct vm_area_struct *VAR_26, *VAR_27;
 int VAR_28 = -VAR_2;
 const int VAR_29 = VAR_20 & (VAR_6|VAR_7);
 const bool VAR_30 = (VAR_17->personality & VAR_9) &&
    (VAR_20 & VAR_8);

 VAR_18 = FUNC_10(VAR_18);

 VAR_20 &= ~(VAR_6|VAR_7);
 if (VAR_29 == (VAR_6|VAR_7))
  return -VAR_2;

 if (VAR_18 & ~VAR_4)
  return -VAR_2;
 if (!VAR_19)
  return 0;
 VAR_19 = FUNC_0(VAR_19);
 VAR_23 = VAR_18 + VAR_19;
 if (VAR_23 <= VAR_18)
  return -VAR_3;
 if (!FUNC_2(VAR_20, VAR_18))
  return -VAR_2;

 VAR_25 = VAR_20;

 if (FUNC_4(&VAR_17->mm->mmap_sem))
  return -VAR_1;





 VAR_28 = -VAR_2;
 if ((VAR_21 != -1) && !FUNC_6(VAR_17->mm, VAR_21))
  goto out;

 VAR_26 = FUNC_5(VAR_17->mm, VAR_18);
 VAR_28 = -VAR_3;
 if (!VAR_26)
  goto out;
 VAR_27 = VAR_26->vm_prev;
 if (FUNC_9(VAR_29 & VAR_6)) {
  if (VAR_26->vm_start >= VAR_23)
   goto out;
  VAR_18 = VAR_26->vm_start;
  VAR_28 = -VAR_2;
  if (!(VAR_26->vm_flags & VAR_12))
   goto out;
 } else {
  if (VAR_26->vm_start > VAR_18)
   goto out;
  if (FUNC_9(VAR_29 & VAR_7)) {
   VAR_23 = VAR_26->vm_end;
   VAR_28 = -VAR_2;
   if (!(VAR_26->vm_flags & VAR_13))
    goto out;
  }
 }
 if (VAR_18 > VAR_26->vm_start)
  VAR_27 = VAR_26;

 for (VAR_22 = VAR_18 ; ; ) {
  unsigned long VAR_31;
  unsigned long VAR_32;
  int VAR_33;




  if (VAR_30 && (VAR_26->vm_flags & VAR_14))
   VAR_20 |= VAR_5;






  VAR_31 = VAR_15 | VAR_16 | VAR_10 |
     VAR_11;

  VAR_33 = FUNC_1(VAR_26, VAR_20, VAR_21);
  VAR_32 = FUNC_3(VAR_20, VAR_33);
  VAR_32 |= (VAR_26->vm_flags & ~VAR_31);


  if ((VAR_32 & ~(VAR_32 >> 4)) & (VAR_15 | VAR_16 | VAR_10)) {
   VAR_28 = -VAR_0;
   goto out;
  }

  VAR_28 = FUNC_8(VAR_26, VAR_25, VAR_20);
  if (VAR_28)
   goto out;

  VAR_24 = VAR_26->vm_end;
  if (VAR_24 > VAR_23)
   VAR_24 = VAR_23;
  VAR_28 = FUNC_7(VAR_26, &VAR_27, VAR_22, VAR_24, VAR_32);
  if (VAR_28)
   goto out;
  VAR_22 = VAR_24;

  if (VAR_22 < VAR_27->vm_end)
   VAR_22 = VAR_27->vm_end;
  if (VAR_22 >= VAR_23)
   goto out;

  VAR_26 = VAR_27->vm_next;
  if (!VAR_26 || VAR_26->vm_start != VAR_22) {
   VAR_28 = -VAR_3;
   goto out;
  }
  VAR_20 = VAR_25;
 }
out:
 FUNC_11(&VAR_17->mm->mmap_sem);
 return VAR_28;
}
