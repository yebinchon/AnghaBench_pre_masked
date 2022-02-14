
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_fn_t ;
typedef int pmd_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mm_struct*,int *,unsigned long,unsigned long,int ,void*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mm_struct *VAR_1, pud_t *VAR_2,
         unsigned long VAR_3, unsigned long VAR_4,
         pte_fn_t VAR_5, void *VAR_6)
{
 pmd_t *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_0(FUNC_4(*VAR_2));

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;
 do {
  VAR_8 = FUNC_2(VAR_3, VAR_4);
  VAR_9 = FUNC_1(VAR_1, VAR_7, VAR_3, VAR_8, VAR_5, VAR_6);
  if (VAR_9)
   break;
 } while (VAR_7++, VAR_3 = VAR_8, VAR_3 != VAR_4);
 return VAR_9;
}
