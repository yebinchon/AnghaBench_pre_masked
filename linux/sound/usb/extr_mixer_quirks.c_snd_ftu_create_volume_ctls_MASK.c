
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,unsigned int const,unsigned int,unsigned int,int const,char*,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_2)
{
 char VAR_3[64];
 unsigned int VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;

 const unsigned int VAR_9 = 5;
 const int VAR_10 = VAR_0;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_4 = VAR_7 + 1;
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   VAR_5 = 1 << VAR_6;
   FUNC_1(VAR_3, sizeof(VAR_3),
    "AIn%d - Out%d Capture Volume",
    VAR_6 + 1, VAR_7 + 1);
   VAR_8 = FUNC_0(VAR_2, VAR_9, VAR_4,
       VAR_5, VAR_10, VAR_3,
       &VAR_1);
   if (VAR_8 < 0)
    return VAR_8;
  }
  for (VAR_6 = 8; VAR_6 < 16; VAR_6++) {
   VAR_5 = 1 << VAR_6;
   FUNC_1(VAR_3, sizeof(VAR_3),
    "DIn%d - Out%d Playback Volume",
    VAR_6 - 7, VAR_7 + 1);
   VAR_8 = FUNC_0(VAR_2, VAR_9, VAR_4,
       VAR_5, VAR_10, VAR_3,
       &VAR_1);
   if (VAR_8 < 0)
    return VAR_8;
  }
 }

 return 0;
}
