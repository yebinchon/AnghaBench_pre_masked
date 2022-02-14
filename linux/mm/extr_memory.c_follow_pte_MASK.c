
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int *,int **,int *,int **) ;

__attribute__((used)) static inline int FUNC_2(struct mm_struct *VAR_0, unsigned long VAR_1,
        pte_t **VAR_2, spinlock_t **VAR_3)
{
 int VAR_4;


 (void) FUNC_0(*VAR_3,
      !(VAR_4 = FUNC_1(VAR_0, VAR_1, ((void*)0),
          VAR_2, ((void*)0), VAR_3)));
 return VAR_4;
}
