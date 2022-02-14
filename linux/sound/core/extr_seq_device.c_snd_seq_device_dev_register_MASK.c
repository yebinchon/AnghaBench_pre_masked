
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct snd_seq_device {TYPE_1__ dev; } ;
struct snd_device {struct snd_seq_device* device_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct snd_device *VAR_0)
{
 struct snd_seq_device *VAR_1 = VAR_0->device_data;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->dev);
 if (VAR_2 < 0)
  return VAR_2;
 if (!VAR_1->dev.driver)
  FUNC_1();
 return 0;
}
