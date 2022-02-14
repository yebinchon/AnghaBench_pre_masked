
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_5__ {int mmap_sem; } ;
struct TYPE_4__ {TYPE_3__* mm; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*,unsigned long,int,struct page**,int *,unsigned int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,int,struct page**,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_2, int VAR_3,
       unsigned int VAR_4, struct page **VAR_5)
{
 int VAR_6;





 if (VAR_4 & VAR_0) {
  FUNC_1(&VAR_1->mm->mmap_sem);
  VAR_6 = FUNC_0(VAR_1, VAR_1->mm,
         VAR_2, VAR_3,
         VAR_5, ((void*)0), VAR_4);
  FUNC_3(&VAR_1->mm->mmap_sem);
 } else {
  VAR_6 = FUNC_2(VAR_2, VAR_3,
           VAR_5, VAR_4);
 }

 return VAR_6;
}
