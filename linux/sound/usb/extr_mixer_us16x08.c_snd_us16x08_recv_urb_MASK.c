
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int mutex; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_usb_audio *VAR_2,
 unsigned char *VAR_3, int VAR_4)
{

 FUNC_0(&VAR_2->mutex);
 FUNC_2(VAR_2->dev,
  FUNC_3(VAR_2->dev, 0),
  VAR_0,
  VAR_1, 0, 0, VAR_3, VAR_4);
 FUNC_1(&VAR_2->mutex);
 return 0;
}
