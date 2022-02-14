
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,unsigned int const,unsigned int const,unsigned int,int const,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4, VAR_5;
 char VAR_6[48];

 const unsigned int VAR_7 = 7;
 const int VAR_8 = VAR_0;
 const unsigned int VAR_9 = 7;

 for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
  VAR_3 = 1 << VAR_5;
  FUNC_1(VAR_6, sizeof(VAR_6),
   "Effect Return %d Volume", VAR_5 + 1);
  VAR_4 = FUNC_0(VAR_2, VAR_7, VAR_9,
      VAR_3, VAR_8, VAR_6,
      VAR_1);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
