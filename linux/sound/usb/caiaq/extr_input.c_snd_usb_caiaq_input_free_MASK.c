
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_caiaqdev {int * input_dev; int * ep4_in_urb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct snd_usb_caiaqdev *VAR_0)
{
 if (!VAR_0 || !VAR_0->input_dev)
  return;

 FUNC_2(VAR_0->ep4_in_urb);
 FUNC_1(VAR_0->ep4_in_urb);
 VAR_0->ep4_in_urb = ((void*)0);

 FUNC_0(VAR_0->input_dev);
 VAR_0->input_dev = ((void*)0);
}
