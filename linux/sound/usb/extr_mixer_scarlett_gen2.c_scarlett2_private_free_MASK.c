
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_mixer_data {int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct scarlett2_mixer_data*) ;

__attribute__((used)) static void FUNC_2(struct usb_mixer_interface *VAR_0)
{
 struct scarlett2_mixer_data *VAR_1 = VAR_0->private_data;

 FUNC_0(&VAR_1->work);
 FUNC_1(VAR_1);
 VAR_0->private_data = ((void*)0);
}
