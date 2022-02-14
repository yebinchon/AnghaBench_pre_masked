
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int dev; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int,int,int,unsigned char*,int) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_usb_audio *VAR_5, int VAR_6)
{
 unsigned char VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5->dev, FUNC_2(VAR_5->dev, 0),
         VAR_0,
         VAR_3 | VAR_4 | VAR_2,
         VAR_1 << 8,
         FUNC_1(VAR_5) | (VAR_6 << 8),
         &VAR_7, sizeof(VAR_7));

 if (VAR_8 < 0)
  return VAR_8;

 return VAR_7;
}
