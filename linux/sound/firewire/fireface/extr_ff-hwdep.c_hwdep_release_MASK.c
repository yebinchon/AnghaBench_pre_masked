
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hwdep {struct snd_ff* private_data; } ;
struct snd_ff {int dev_lock_count; int lock; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_hwdep *VAR_0, struct file *VAR_1)
{
 struct snd_ff *VAR_2 = VAR_0->private_data;

 FUNC_0(&VAR_2->lock);
 if (VAR_2->dev_lock_count == -1)
  VAR_2->dev_lock_count = 0;
 FUNC_1(&VAR_2->lock);

 return 0;
}
