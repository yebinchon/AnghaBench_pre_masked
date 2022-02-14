
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int flags; int cpu_pwqs; } ;
struct pool_workqueue {int delayed_works; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct pool_workqueue* FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct pool_workqueue* FUNC_8 (struct workqueue_struct*,int ) ;

bool FUNC_9(int VAR_2, struct workqueue_struct *VAR_3)
{
 struct pool_workqueue *VAR_4;
 bool VAR_5;

 FUNC_5();
 FUNC_3();

 if (VAR_2 == VAR_0)
  VAR_2 = FUNC_7();

 if (!(VAR_3->flags & VAR_1))
  VAR_4 = FUNC_2(VAR_3->cpu_pwqs, VAR_2);
 else
  VAR_4 = FUNC_8(VAR_3, FUNC_0(VAR_2));

 VAR_5 = !FUNC_1(&VAR_4->delayed_works);
 FUNC_4();
 FUNC_6();

 return VAR_5;
}
