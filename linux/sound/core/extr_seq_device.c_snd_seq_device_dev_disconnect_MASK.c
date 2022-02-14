
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int dev; } ;
struct snd_device {struct snd_seq_device* device_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct snd_seq_device *VAR_1 = VAR_0->device_data;

 FUNC_0(&VAR_1->dev);
 return 0;
}
