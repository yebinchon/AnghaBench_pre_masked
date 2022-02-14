
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_user {TYPE_1__* timeri; } ;
struct file {struct snd_timer_user* private_data; } ;
struct TYPE_2__ {int flags; scalar_t__ lost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2)
{
 int VAR_3;
 struct snd_timer_user *VAR_4;

 VAR_4 = VAR_2->private_data;
 if (!VAR_4->timeri)
  return -VAR_0;

 if (!(VAR_4->timeri->flags & VAR_1))
  return FUNC_1(VAR_2);
 VAR_4->timeri->lost = 0;
 VAR_3 = FUNC_0(VAR_4->timeri);
 if (VAR_3 < 0)
  return VAR_3;
 return 0;
}
