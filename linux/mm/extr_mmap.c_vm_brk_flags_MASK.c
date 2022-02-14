
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int def_flags; int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (unsigned long,unsigned long,unsigned long,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mm_struct*,int *) ;

int FUNC_7(unsigned long VAR_5, unsigned long VAR_6, unsigned long VAR_7)
{
 struct mm_struct *VAR_8 = VAR_3->mm;
 unsigned long VAR_9;
 int VAR_10;
 bool VAR_11;
 FUNC_0(VAR_4);

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 < VAR_6)
  return -VAR_1;
 if (!VAR_9)
  return 0;

 if (FUNC_3(&VAR_8->mmap_sem))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_5, VAR_9, VAR_7, &VAR_4);
 VAR_11 = ((VAR_8->def_flags & VAR_2) != 0);
 FUNC_5(&VAR_8->mmap_sem);
 FUNC_6(VAR_8, &VAR_4);
 if (VAR_11 && !VAR_10)
  FUNC_4(VAR_5, VAR_9);
 return VAR_10;
}
