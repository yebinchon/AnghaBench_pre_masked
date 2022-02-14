
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_mixer_data {struct scarlett2_device_info* info; } ;
struct scarlett2_device_info {int level_input_count; int pad_input_count; } ;
typedef int s ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,int *,int,int,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_3)
{
 struct scarlett2_mixer_data *VAR_4 = VAR_3->private_data;
 const struct scarlett2_device_info *VAR_5 = VAR_4->info;
 int VAR_6, VAR_7;
 char VAR_8[VAR_0];


 for (VAR_7 = 0; VAR_7 < VAR_5->level_input_count; VAR_7++) {
  FUNC_1(VAR_8, sizeof(VAR_8), "Line In %d Level Capture Enum", VAR_7 + 1);
  VAR_6 = FUNC_0(VAR_3, &VAR_1,
         VAR_7, 1, VAR_8, ((void*)0));
  if (VAR_6 < 0)
   return VAR_6;
 }


 for (VAR_7 = 0; VAR_7 < VAR_5->pad_input_count; VAR_7++) {
  FUNC_1(VAR_8, sizeof(VAR_8), "Line In %d Pad Capture Switch", VAR_7 + 1);
  VAR_6 = FUNC_0(VAR_3, &VAR_2,
         VAR_7, 1, VAR_8, ((void*)0));
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
