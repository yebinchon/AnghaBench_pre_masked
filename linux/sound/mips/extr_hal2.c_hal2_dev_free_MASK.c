
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hal2 {int dummy; } ;
struct snd_device {struct snd_hal2* device_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct snd_hal2*) ;
 int FUNC_1 (struct snd_hal2*) ;

__attribute__((used)) static int FUNC_2(struct snd_device *VAR_1)
{
 struct snd_hal2 *VAR_2 = VAR_1->device_data;

 FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_2);
 return 0;
}
