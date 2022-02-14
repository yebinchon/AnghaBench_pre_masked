
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_ports {int* num; char* dst_descr; } ;
struct scarlett2_mixer_data {TYPE_1__* info; } ;
typedef int s ;
struct TYPE_2__ {struct scarlett2_ports* ports; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_mixer_interface*,int *,int,int,char*,int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,char const* const,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct usb_mixer_interface *VAR_4)
{
 struct scarlett2_mixer_data *VAR_5 = VAR_4->private_data;
 const struct scarlett2_ports *VAR_6 = VAR_5->info->ports;
 int VAR_7, VAR_8, VAR_9;

 for (VAR_9 = 0, VAR_7 = 0;
      VAR_7 < VAR_1;
      VAR_7++) {
  for (VAR_8 = 0;
       VAR_8 < VAR_6[VAR_7].num[VAR_0];
       VAR_8++, VAR_9++) {
   int VAR_10;
   char VAR_11[VAR_2];
   const char *const VAR_12 = VAR_6[VAR_7].dst_descr;

   FUNC_1(VAR_11, sizeof(VAR_11) - 5, VAR_12, VAR_8 + 1);
   FUNC_2(VAR_11, " Enum");

   VAR_10 = FUNC_0(VAR_4,
          &VAR_3,
          VAR_9, 1, VAR_11, ((void*)0));
   if (VAR_10 < 0)
    return VAR_10;
  }
 }

 return 0;
}
