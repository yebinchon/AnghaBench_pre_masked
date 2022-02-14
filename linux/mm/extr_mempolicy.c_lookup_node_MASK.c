
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,int,int ,struct page**,int*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mm_struct *VAR_1, unsigned long VAR_2)
{
 struct page *VAR_3;
 int VAR_4;

 int VAR_5 = 1;
 VAR_4 = FUNC_0(VAR_2 & VAR_0, 1, 0, &VAR_3, &VAR_5);
 if (VAR_4 >= 0) {
  VAR_4 = FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }
 if (VAR_5)
  FUNC_3(&VAR_1->mmap_sem);
 return VAR_4;
}
