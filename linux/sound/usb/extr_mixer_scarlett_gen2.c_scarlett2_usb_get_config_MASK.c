
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
struct scarlett2_config {int size; int offset; } ;


 struct scarlett2_config* VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,int ,void*,int) ;

__attribute__((used)) static int FUNC_1(
 struct usb_mixer_interface *VAR_1,
 int VAR_2, int VAR_3, void *VAR_4)
{
 const struct scarlett2_config VAR_5 =
        VAR_0[VAR_2];
 int VAR_6 = VAR_5.size * VAR_3;

 return FUNC_0(VAR_1, VAR_5.offset, VAR_4, VAR_6);
}
