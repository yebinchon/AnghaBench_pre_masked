
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct snd_timer_instance*,struct device**) ;

int FUNC_5(struct snd_timer_instance *VAR_2)
{
 struct device *VAR_3 = ((void*)0);
 int VAR_4;

 if (FUNC_3(!VAR_2))
  return -VAR_0;

 FUNC_0(&VAR_1);
 VAR_4 = FUNC_4(VAR_2, &VAR_3);
 FUNC_1(&VAR_1);

 if (VAR_3)
  FUNC_2(VAR_3);
 return VAR_4;
}
