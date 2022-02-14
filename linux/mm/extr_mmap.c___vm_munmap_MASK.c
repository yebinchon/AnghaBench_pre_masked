
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mm_struct*,unsigned long,size_t,int *,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mm_struct*,int *) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_3, size_t VAR_4, bool VAR_5)
{
 int VAR_6;
 struct mm_struct *VAR_7 = VAR_1->mm;
 FUNC_0(VAR_2);

 if (FUNC_2(&VAR_7->mmap_sem))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_7, VAR_3, VAR_4, &VAR_2, VAR_5);





 if (VAR_6 == 1) {
  FUNC_3(&VAR_7->mmap_sem);
  VAR_6 = 0;
 } else
  FUNC_4(&VAR_7->mmap_sem);

 FUNC_5(VAR_7, &VAR_2);
 return VAR_6;
}
