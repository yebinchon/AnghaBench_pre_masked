
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_clock {int mutex; int start_time; scalar_t__ started; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int64_t FUNC_2(struct ff_clock *VAR_1)
{
 int64_t VAR_2 = VAR_0;

 FUNC_0(&VAR_1->mutex);
 if (VAR_1->started)
  VAR_2 = VAR_1->start_time;
 FUNC_1(&VAR_1->mutex);

 return VAR_2;
}
