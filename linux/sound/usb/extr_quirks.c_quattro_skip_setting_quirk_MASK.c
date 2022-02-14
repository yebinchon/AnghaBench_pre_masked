
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int setup; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct snd_usb_audio*,char*,int,int,unsigned int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_usb_audio *VAR_7,
          int VAR_8, int VAR_9)
{



 FUNC_1(VAR_7->dev, VAR_8, 0);
 if (VAR_7->setup & VAR_0) {
  if (VAR_7->setup & VAR_5) {
   if (VAR_8 != 1 && VAR_8 != 2)
    return 1;
  } else {
   unsigned int VAR_10;
   if (VAR_8 == 1 || VAR_8 == 2)
    return 1;
   if ((VAR_7->setup & VAR_4) && VAR_9 != 1)
    return 1;
   VAR_10 = VAR_7->setup & VAR_6;
   if (VAR_10 == VAR_2 && VAR_9 != 2)
    return 1;
   if (VAR_10 == VAR_3 && VAR_9 != 3)
    return 1;
   if (VAR_10 == VAR_1 && VAR_9 != 4)
    return 1;
  }
 }
 FUNC_0(VAR_7,
      "using altsetting %d for interface %d config %d\n",
      VAR_9, VAR_8, VAR_7->setup);
 return 0;
}
