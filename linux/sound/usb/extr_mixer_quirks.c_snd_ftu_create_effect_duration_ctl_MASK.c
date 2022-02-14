
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,unsigned int const,unsigned int const,unsigned int const,int const,char const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct usb_mixer_interface *VAR_2)
{
 static const char VAR_3[] = "Effect Duration";
 const unsigned int VAR_4 = 6;
 const int VAR_5 = VAR_0;
 const unsigned int VAR_6 = 3;
 const unsigned int VAR_7 = 0;

 return FUNC_0(VAR_2, VAR_4, VAR_6, VAR_7, VAR_5,
     VAR_3, VAR_1);
}
