
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct workqueue_struct*,struct work_struct*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct work_struct*) ;

bool FUNC_5(int VAR_1, struct workqueue_struct *VAR_2,
     struct work_struct *VAR_3)
{
 bool VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_2(VAR_5);

 if (!FUNC_3(VAR_0, FUNC_4(VAR_3))) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_4 = 1;
 }

 FUNC_1(VAR_5);
 return VAR_4;
}
