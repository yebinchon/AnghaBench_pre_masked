
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int sticks; struct snd_hrtimer* private_data; } ;
struct snd_hrtimer {int hrt; scalar_t__ in_callback; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_timer *VAR_2)
{
 struct snd_hrtimer *VAR_3 = VAR_2->private_data;

 if (VAR_3->in_callback)
  return 0;
 FUNC_0(&VAR_3->hrt, FUNC_1(VAR_2->sticks * VAR_1),
        VAR_0);
 return 0;
}
