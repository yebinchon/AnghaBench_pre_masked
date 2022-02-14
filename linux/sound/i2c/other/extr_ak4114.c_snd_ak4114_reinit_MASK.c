
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4114 {int work; int wq_processing; int reinit_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ak4114*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

void FUNC_7(struct ak4114 *VAR_1)
{
 if (FUNC_2(&VAR_1->wq_processing) == 1)
  FUNC_3(&VAR_1->work);
 FUNC_4(&VAR_1->reinit_mutex);
 FUNC_0(VAR_1);
 FUNC_5(&VAR_1->reinit_mutex);

 if (FUNC_1(&VAR_1->wq_processing))
  FUNC_6(&VAR_1->work, VAR_0 / 10);
}
