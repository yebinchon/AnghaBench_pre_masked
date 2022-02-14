
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
struct usb_mixer_elem_info {int dummy; } ;
struct scarlett_device_info {int opt_master; } ;
typedef int mx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_mixer_interface*,int *,int ,int,int,int,int ,int,char*,int *,struct usb_mixer_elem_info**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,char*,int,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_7,
      int VAR_8, const char *VAR_9,
      const struct scarlett_device_info *VAR_10)
{
 int VAR_11;
 char VAR_12[VAR_0];
 struct usb_mixer_elem_info *VAR_13;


 FUNC_1(VAR_12, sizeof(VAR_12), "Master %d (%s) Playback Switch",
  VAR_8 + 1, VAR_9);
 VAR_11 = FUNC_0(VAR_7, &VAR_6,
     VAR_3, 0x0a, 0x01,
     2*VAR_8+1, VAR_1, 2, VAR_12, ((void*)0), &VAR_13);
 if (VAR_11 < 0)
  return VAR_11;


 FUNC_1(VAR_12, sizeof(VAR_12), "Master %d (%s) Playback Volume",
  VAR_8 + 1, VAR_9);
 VAR_11 = FUNC_0(VAR_7, &VAR_5,
     VAR_3, 0x0a, 0x02,
     2*VAR_8+1, VAR_1, 2, VAR_12, ((void*)0), &VAR_13);
 if (VAR_11 < 0)
  return VAR_11;


 FUNC_1(VAR_12, sizeof(VAR_12), "Master %dL (%s) Source Playback Enum",
  VAR_8 + 1, VAR_9);
 VAR_11 = FUNC_0(VAR_7, &VAR_4,
     VAR_2, 0x33, 0x00,
     2*VAR_8, VAR_1, 1, VAR_12, &VAR_10->opt_master,
     &VAR_13);
 if (VAR_11 < 0)
  return VAR_11;


 FUNC_1(VAR_12, sizeof(VAR_12), "Master %dR (%s) Source Playback Enum",
  VAR_8 + 1, VAR_9);
 VAR_11 = FUNC_0(VAR_7, &VAR_4,
     VAR_2, 0x33, 0x00,
     2*VAR_8+1, VAR_1, 1, VAR_12, &VAR_10->opt_master,
     &VAR_13);
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
