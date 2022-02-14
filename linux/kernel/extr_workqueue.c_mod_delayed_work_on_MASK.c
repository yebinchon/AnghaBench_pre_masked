
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct delayed_work {int work; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct workqueue_struct*,struct delayed_work*,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,int,unsigned long*) ;
 scalar_t__ FUNC_4 (int) ;

bool FUNC_5(int VAR_1, struct workqueue_struct *VAR_2,
    struct delayed_work *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 do {
  VAR_6 = FUNC_3(&VAR_3->work, 1, &VAR_5);
 } while (FUNC_4(VAR_6 == -VAR_0));

 if (FUNC_1(VAR_6 >= 0)) {
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_5);
 }


 return VAR_6;
}
