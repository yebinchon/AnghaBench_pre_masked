
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_fn_t ;
typedef int pgd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mm_struct*,int *,unsigned long,unsigned long,int ,void*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,unsigned long) ;

int FUNC_4(struct mm_struct *VAR_1, unsigned long VAR_2,
   unsigned long VAR_3, pte_fn_t VAR_4, void *VAR_5)
{
 pgd_t *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8 = VAR_2 + VAR_3;
 int VAR_9;

 if (FUNC_0(VAR_2 >= VAR_8))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 do {
  VAR_7 = FUNC_2(VAR_2, VAR_8);
  VAR_9 = FUNC_1(VAR_1, VAR_6, VAR_2, VAR_7, VAR_4, VAR_5);
  if (VAR_9)
   break;
 } while (VAR_6++, VAR_2 = VAR_7, VAR_2 != VAR_8);

 return VAR_9;
}
