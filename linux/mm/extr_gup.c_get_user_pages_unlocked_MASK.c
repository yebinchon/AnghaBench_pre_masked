
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_3__ {struct mm_struct* mm; } ;


 long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 long FUNC_1 (TYPE_1__*,struct mm_struct*,unsigned long,unsigned long,struct page**,int *,int*,unsigned int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

long FUNC_4(unsigned long VAR_4, unsigned long VAR_5,
        struct page **VAR_6, unsigned int VAR_7)
{
 struct mm_struct *VAR_8 = VAR_3->mm;
 int VAR_9 = 1;
 long VAR_10;







 if (FUNC_0(VAR_7 & VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_8->mmap_sem);
 VAR_10 = FUNC_1(VAR_3, VAR_8, VAR_4, VAR_5, VAR_6, ((void*)0),
          &VAR_9, VAR_7 | VAR_2);
 if (VAR_9)
  FUNC_3(&VAR_8->mmap_sem);
 return VAR_10;
}
