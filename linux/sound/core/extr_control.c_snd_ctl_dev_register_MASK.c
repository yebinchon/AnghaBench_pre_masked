
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct snd_card* device_data; } ;
struct snd_card {int ctl_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct snd_card*,int,int *,struct snd_card*,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_2)
{
 struct snd_card *VAR_3 = VAR_2->device_data;

 return FUNC_0(VAR_0, VAR_3, -1,
       &VAR_1, VAR_3, &VAR_3->ctl_dev);
}
