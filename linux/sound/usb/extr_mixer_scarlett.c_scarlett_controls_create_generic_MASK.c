
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
struct usb_mixer_elem_info {int dummy; } ;
struct scarlett_mixer_control {int type; int num; int name; } ;
struct scarlett_device_info {int num_controls; struct scarlett_mixer_control* controls; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_mixer_interface*,int *,int ,int,int,int,int ,int,char*,int *,struct usb_mixer_elem_info**) ;
 int FUNC_1 (struct usb_mixer_interface*,int,int ,struct scarlett_device_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct usb_mixer_interface *VAR_9,
 struct scarlett_device_info *VAR_10)
{
 int VAR_11, VAR_12;
 char VAR_13[VAR_0];
 const struct scarlett_mixer_control *VAR_14;
 struct usb_mixer_elem_info *VAR_15;


 VAR_12 = FUNC_0(VAR_9, &VAR_8,
     VAR_5, 0x0a, 0x01, 0,
     VAR_1, 1, "Master Playback Switch", ((void*)0),
     &VAR_15);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_9, &VAR_7,
     VAR_5, 0x0a, 0x02, 0,
     VAR_1, 1, "Master Playback Volume", ((void*)0),
     &VAR_15);
 if (VAR_12 < 0)
  return VAR_12;


 for (VAR_11 = 0; VAR_11 < VAR_10->num_controls; VAR_11++) {
  VAR_14 = &VAR_10->controls[VAR_11];

  switch (VAR_14->type) {
  case 130:
   VAR_12 = FUNC_1(VAR_9, VAR_14->num, VAR_14->name, VAR_10);
   if (VAR_12 < 0)
    return VAR_12;
   break;
  case 129:
   FUNC_2(VAR_13, "Input %d Impedance Switch", VAR_14->num);
   VAR_12 = FUNC_0(VAR_9, &VAR_6,
       VAR_4, 0x01,
       0x09, VAR_14->num, VAR_1, 1, VAR_13,
       &VAR_2, &VAR_15);
   if (VAR_12 < 0)
    return VAR_12;
   break;
  case 128:
   FUNC_2(VAR_13, "Input %d Pad Switch", VAR_14->num);
   VAR_12 = FUNC_0(VAR_9, &VAR_6,
       VAR_4, 0x01,
       0x0b, VAR_14->num, VAR_1, 1, VAR_13,
       &VAR_3, &VAR_15);
   if (VAR_12 < 0)
    return VAR_12;
   break;
  }
 }

 return 0;
}
