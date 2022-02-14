
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* llseek ) (struct snd_hwdep*,struct file*,int ,int) ;} ;
struct snd_hwdep {TYPE_1__ ops; } ;
struct file {struct snd_hwdep* private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_hwdep*,struct file*,int ,int) ;

__attribute__((used)) static loff_t FUNC_1(struct file * VAR_1, loff_t VAR_2, int VAR_3)
{
 struct snd_hwdep *VAR_4 = VAR_1->private_data;
 if (VAR_4->ops.llseek)
  return VAR_4->ops.llseek(VAR_4, VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}
