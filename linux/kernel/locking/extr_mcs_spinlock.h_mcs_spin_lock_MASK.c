
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_spinlock {scalar_t__ locked; int * next; } ;


 int FUNC_0 (int *,struct mcs_spinlock*) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct mcs_spinlock* FUNC_3 (struct mcs_spinlock**,struct mcs_spinlock*) ;

__attribute__((used)) static inline
void FUNC_4(struct mcs_spinlock **VAR_0, struct mcs_spinlock *VAR_1)
{
 struct mcs_spinlock *VAR_2;


 VAR_1->locked = 0;
 VAR_1->next = ((void*)0);







 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_2(VAR_2 == ((void*)0))) {
  return;
 }
 FUNC_0(VAR_2->next, VAR_1);


 FUNC_1(&VAR_1->locked);
}
