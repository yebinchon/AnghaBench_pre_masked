
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int dev; } ;


 int FUNC_0 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_usb_audio *VAR_0,
        int VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0->dev, VAR_1, VAR_2, VAR_3 - 1);

 if (VAR_4 < 0)
  return 0;

 VAR_2[VAR_4] = 0;
 return VAR_4;
}
