
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_usb_audio {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int,int,int *,int) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_audio *VAR_4, int VAR_5, int VAR_6)
{
 u16 VAR_7 = 0;

 FUNC_0(VAR_4->dev, FUNC_2(VAR_4->dev, 0), VAR_0,
   VAR_2 | VAR_3 | VAR_1,
   VAR_5, FUNC_1(VAR_4) | (VAR_6 << 8),
   &VAR_7, 2);
}
