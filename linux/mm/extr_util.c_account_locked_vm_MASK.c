
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,unsigned long,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mm_struct *VAR_2, unsigned long VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_3 == 0 || !VAR_2)
  return 0;

 FUNC_2(&VAR_2->mmap_sem);
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1,
      FUNC_1(VAR_0));
 FUNC_3(&VAR_2->mmap_sem);

 return VAR_5;
}
