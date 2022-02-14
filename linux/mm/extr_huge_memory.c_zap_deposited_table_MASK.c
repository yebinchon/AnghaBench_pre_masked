
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pmd_t ;
typedef int pgtable_t ;


 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct mm_struct*,int *) ;
 int FUNC_2 (struct mm_struct*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct mm_struct *VAR_0, pmd_t *VAR_1)
{
 pgtable_t VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_2);
 FUNC_0(VAR_0);
}
