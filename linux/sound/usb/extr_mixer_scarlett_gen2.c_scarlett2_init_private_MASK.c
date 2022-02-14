
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int private_suspend; int private_free; struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_mixer_data {int mux; struct usb_mixer_interface* mixer; scalar_t__ scarlett2_seq; int num_mux_srcs; struct scarlett2_device_info const* info; int work; int data_mutex; int usb_mutex; } ;
struct scarlett2_device_info {int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct scarlett2_mixer_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct usb_mixer_interface*,int ,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_mixer_interface *VAR_6,
      const struct scarlett2_device_info *VAR_7)
{
 struct scarlett2_mixer_data *VAR_8 =
  FUNC_1(sizeof(struct scarlett2_mixer_data), VAR_1);

 if (!VAR_8)
  return -VAR_0;

 FUNC_2(&VAR_8->usb_mutex);
 FUNC_2(&VAR_8->data_mutex);
 FUNC_0(&VAR_8->work, VAR_3);
 VAR_8->info = VAR_7;
 VAR_8->num_mux_srcs = FUNC_3(VAR_7->ports);
 VAR_8->scarlett2_seq = 0;
 VAR_8->mixer = VAR_6;
 VAR_6->private_data = VAR_8;
 VAR_6->private_free = VAR_4;
 VAR_6->private_suspend = VAR_5;


 FUNC_4(VAR_8->mux, VAR_7->ports);


 return FUNC_5(VAR_6, VAR_2, ((void*)0), 0, ((void*)0), 0);
}
