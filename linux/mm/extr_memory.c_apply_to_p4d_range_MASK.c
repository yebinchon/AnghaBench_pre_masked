
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_fn_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,int *,unsigned long,unsigned long,int ,void*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mm_struct *VAR_1, pgd_t *VAR_2,
         unsigned long VAR_3, unsigned long VAR_4,
         pte_fn_t VAR_5, void *VAR_6)
{
 p4d_t *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;
 do {
  VAR_8 = FUNC_1(VAR_3, VAR_4);
  VAR_9 = FUNC_0(VAR_1, VAR_7, VAR_3, VAR_8, VAR_5, VAR_6);
  if (VAR_9)
   break;
 } while (VAR_7++, VAR_3 = VAR_8, VAR_3 != VAR_4);
 return VAR_9;
}
