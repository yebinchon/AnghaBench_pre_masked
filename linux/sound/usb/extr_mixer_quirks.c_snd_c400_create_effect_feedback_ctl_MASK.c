
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,unsigned int const,unsigned int const,unsigned int const,int const,char const*,int *) ;

__attribute__((used)) static int FUNC_1(struct usb_mixer_interface *VAR_1)
{
 static const char VAR_2[] = "Effect Feedback Volume";
 const unsigned int VAR_3 = 0x43;
 const int VAR_4 = VAR_0;
 const unsigned int VAR_5 = 5;
 const unsigned int VAR_6 = 0;

 return FUNC_0(VAR_1, VAR_3, VAR_5, VAR_6, VAR_4,
     VAR_2, ((void*)0));
}
