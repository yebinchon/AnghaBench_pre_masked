
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct task_struct {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (unsigned long) ;

__attribute__((used)) static long FUNC_3(struct task_struct *VAR_11,
  struct mm_struct *VAR_12, unsigned long VAR_13,
  unsigned long VAR_14, struct page **VAR_15,
  struct vm_area_struct **VAR_16, int *VAR_17,
  unsigned int VAR_18)
{
 struct vm_area_struct *VAR_19;
 unsigned long VAR_20;
 int VAR_21;




 VAR_20 = (VAR_18 & VAR_2) ?
   (VAR_10 | VAR_7) : (VAR_9 | VAR_6);
 VAR_20 &= (VAR_18 & VAR_1) ?
   (VAR_6 | VAR_7) : (VAR_9 | VAR_10);

 for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
  VAR_19 = FUNC_0(VAR_12, VAR_13);
  if (!VAR_19)
   goto finish_or_fault;


  if ((VAR_19->vm_flags & (VAR_5 | VAR_8)) ||
      !(VAR_20 & VAR_19->vm_flags))
   goto finish_or_fault;

  if (VAR_15) {
   VAR_15[VAR_21] = FUNC_2(VAR_13);
   if (VAR_15[VAR_21])
    FUNC_1(VAR_15[VAR_21]);
  }
  if (VAR_16)
   VAR_16[VAR_21] = VAR_19;
  VAR_13 = (VAR_13 + VAR_4) & VAR_3;
 }

 return VAR_21;

finish_or_fault:
 return VAR_21 ? : -VAR_0;
}
