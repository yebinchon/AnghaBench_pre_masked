
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hwdep {int dev; int (* private_free ) (struct snd_hwdep*) ;} ;
struct snd_device {struct snd_hwdep* device_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_hwdep*) ;

__attribute__((used)) static int FUNC_2(struct snd_device *VAR_0)
{
 struct snd_hwdep *VAR_1 = VAR_0->device_data;
 if (!VAR_1)
  return 0;
 if (VAR_1->private_free)
  VAR_1->private_free(VAR_1);
 FUNC_0(&VAR_1->dev);
 return 0;
}
