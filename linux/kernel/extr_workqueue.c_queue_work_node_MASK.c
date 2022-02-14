
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int flags; } ;
struct work_struct {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct workqueue_struct*,struct work_struct*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct work_struct*) ;
 int FUNC_6 (int) ;

bool FUNC_7(int VAR_2, struct workqueue_struct *VAR_3,
       struct work_struct *VAR_4)
{
 unsigned long VAR_5;
 bool VAR_6 = 0;
 FUNC_0(!(VAR_3->flags & VAR_1));

 FUNC_3(VAR_5);

 if (!FUNC_4(VAR_0, FUNC_5(VAR_4))) {
  int VAR_7 = FUNC_6(VAR_2);

  FUNC_1(VAR_7, VAR_3, VAR_4);
  VAR_6 = 1;
 }

 FUNC_2(VAR_5);
 return VAR_6;
}
