
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int setup; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_usb_audio*,char*,int,int,int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_usb_audio *VAR_4,
        int VAR_5, int VAR_6)
{



 FUNC_1(VAR_4->dev, VAR_5, 0);




 if (VAR_4->setup & (VAR_0 | VAR_1)) {
  if (VAR_4->setup & VAR_2) {
   if (VAR_6 != 3 && VAR_6 != 6)
    return 1;
  } else if (VAR_4->setup & VAR_3) {
   if (VAR_5 == 4)
    return 1;
   if (VAR_6 != 2 && VAR_6 != 5)
    return 1;
  } else {
   if (VAR_5 == 5)
    return 1;
   if (VAR_6 != 2 && VAR_6 != 5)
    return 1;
  }
 } else {

  if (VAR_6 != 1)
   return 1;
 }

 FUNC_0(VAR_4,
      "using altsetting %d for interface %d config %d\n",
      VAR_6, VAR_5, VAR_4->setup);
 return 0;
}
