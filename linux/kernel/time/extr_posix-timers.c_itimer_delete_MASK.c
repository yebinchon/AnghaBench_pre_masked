
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_itimer {int it_lock; int list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct k_itimer*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct k_itimer*) ;

__attribute__((used)) static void FUNC_5(struct k_itimer *VAR_2)
{
retry_delete:
 FUNC_2(&VAR_2->it_lock);

 if (FUNC_4(VAR_2) == VAR_1) {
  FUNC_3(&VAR_2->it_lock);
  goto retry_delete;
 }
 FUNC_0(&VAR_2->list);

 FUNC_3(&VAR_2->it_lock);
 FUNC_1(VAR_2, VAR_0);
}
