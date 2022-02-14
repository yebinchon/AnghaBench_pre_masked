
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_timer_user {int ticks; TYPE_1__* timeri; scalar_t__ last_resolution; } ;
struct file {struct snd_timer_user* private_data; } ;
struct TYPE_3__ {scalar_t__ lost; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1)
{
 int VAR_2;
 struct snd_timer_user *VAR_3;

 VAR_3 = VAR_1->private_data;
 if (!VAR_3->timeri)
  return -VAR_0;
 FUNC_1(VAR_3->timeri);
 VAR_3->timeri->lost = 0;
 VAR_3->last_resolution = 0;
 VAR_2 = FUNC_0(VAR_3->timeri, VAR_3->ticks);
 if (VAR_2 < 0)
  return VAR_2;
 return 0;
}
