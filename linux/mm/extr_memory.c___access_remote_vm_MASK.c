
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; TYPE_1__* vm_ops; } ;
struct task_struct {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {int (* access ) (struct vm_area_struct*,unsigned long,void*,int,int) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm_area_struct*,struct page*,unsigned long,void*,void*,int) ;
 int FUNC_1 (struct vm_area_struct*,struct page*,unsigned long,void*,void*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (struct task_struct*,struct mm_struct*,unsigned long,int,unsigned int,struct page**,struct vm_area_struct**,int *) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct vm_area_struct*,unsigned long,void*,int,int) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct task_struct *VAR_2, struct mm_struct *VAR_3,
  unsigned long VAR_4, void *VAR_5, int VAR_6, unsigned int VAR_7)
{
 struct vm_area_struct *VAR_8;
 void *VAR_9 = VAR_5;
 int VAR_10 = VAR_7 & VAR_0;

 if (FUNC_2(&VAR_3->mmap_sem))
  return 0;


 while (VAR_6) {
  int VAR_11, VAR_12, VAR_13;
  void *VAR_14;
  struct page *VAR_15 = ((void*)0);

  VAR_12 = FUNC_4(VAR_2, VAR_3, VAR_4, 1,
    VAR_7, &VAR_15, &VAR_8, ((void*)0));
  if (VAR_12 <= 0) {

   break;
  } else {
   VAR_11 = VAR_6;
   VAR_13 = VAR_4 & (VAR_1-1);
   if (VAR_11 > VAR_1-VAR_13)
    VAR_11 = VAR_1-VAR_13;

   VAR_14 = FUNC_5(VAR_15);
   if (VAR_10) {
    FUNC_1(VAR_8, VAR_15, VAR_4,
        VAR_14 + VAR_13, VAR_5, VAR_11);
    FUNC_8(VAR_15);
   } else {
    FUNC_0(VAR_8, VAR_15, VAR_4,
          VAR_5, VAR_14 + VAR_13, VAR_11);
   }
   FUNC_6(VAR_15);
   FUNC_7(VAR_15);
  }
  VAR_6 -= VAR_11;
  VAR_5 += VAR_11;
  VAR_4 += VAR_11;
 }
 FUNC_10(&VAR_3->mmap_sem);

 return VAR_5 - VAR_9;
}
