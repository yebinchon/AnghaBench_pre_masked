
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_mixer_interface*,int ,int *,int *,int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  VAR_2 = FUNC_1(VAR_1, 0,
       ((void*)0),
       &VAR_0[VAR_3],
       ((void*)0));
  if (VAR_2 < 0)
   return VAR_2;
 }

 return 0;
}
