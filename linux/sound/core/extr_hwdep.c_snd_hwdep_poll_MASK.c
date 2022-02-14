
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* poll ) (struct snd_hwdep*,struct file*,int *) ;} ;
struct snd_hwdep {TYPE_1__ ops; } ;
struct file {struct snd_hwdep* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (struct snd_hwdep*,struct file*,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file * VAR_0, poll_table * VAR_1)
{
 struct snd_hwdep *VAR_2 = VAR_0->private_data;
 if (VAR_2->ops.poll)
  return VAR_2->ops.poll(VAR_2, VAR_0, VAR_1);
 return 0;
}
