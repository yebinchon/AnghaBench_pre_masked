
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct mm_struct*,unsigned long,size_t,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(unsigned long VAR_1, size_t VAR_2)
{
 struct mm_struct *VAR_3 = VAR_0->mm;
 int VAR_4;

 FUNC_1(&VAR_3->mmap_sem);
 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2, ((void*)0));
 FUNC_2(&VAR_3->mmap_sem);
 return VAR_4;
}
