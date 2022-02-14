
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_ports {int* num; } ;
struct scarlett2_mixer_data {TYPE_1__* info; } ;
typedef int s ;
struct TYPE_2__ {struct scarlett2_ports* ports; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_mixer_interface*,int *,int,int,char*,int *) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,char*,char,int) ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_5)
{
 struct scarlett2_mixer_data *VAR_6 = VAR_5->private_data;
 const struct scarlett2_ports *VAR_7 = VAR_6->info->ports;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;
 char VAR_12[VAR_3];

 int VAR_13 = VAR_7[VAR_2].num[VAR_1];
 int VAR_14 = VAR_7[VAR_2].num[VAR_0];

 for (VAR_9 = 0, VAR_11 = 0; VAR_9 < VAR_14; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++, VAR_11++) {
   FUNC_1(VAR_12, sizeof(VAR_12),
     "Mix %c Input %02d Playback Volume",
     'A' + VAR_9, VAR_10 + 1);
   VAR_8 = FUNC_0(VAR_5, &VAR_4,
          VAR_11, 1, VAR_12, ((void*)0));
   if (VAR_8 < 0)
    return VAR_8;
  }
 }

 return 0;
}
