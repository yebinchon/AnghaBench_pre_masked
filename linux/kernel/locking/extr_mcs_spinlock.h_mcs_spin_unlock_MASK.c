
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_spinlock {int locked; int next; } ;


 struct mcs_spinlock* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct mcs_spinlock* FUNC_2 (struct mcs_spinlock**,struct mcs_spinlock*,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline
void FUNC_5(struct mcs_spinlock **VAR_0, struct mcs_spinlock *VAR_1)
{
 struct mcs_spinlock *VAR_2 = FUNC_0(VAR_1->next);

 if (FUNC_4(!VAR_2)) {



  if (FUNC_4(FUNC_2(VAR_0, VAR_1, ((void*)0)) == VAR_1))
   return;

  while (!(VAR_2 = FUNC_0(VAR_1->next)))
   FUNC_3();
 }


 FUNC_1(&VAR_2->locked);
}
