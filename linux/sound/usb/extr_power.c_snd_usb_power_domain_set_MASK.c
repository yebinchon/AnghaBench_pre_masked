
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct snd_usb_power_domain {int pd_id; int pd_d2d0_rec; int pd_d1d0_rec; } ;
struct snd_usb_audio {struct usb_device* dev; } ;
typedef int state ;
typedef int current_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,unsigned char) ;
 int FUNC_1 (int *,char*,unsigned char,...) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int,int,unsigned char*,int) ;
 int FUNC_3 (struct snd_usb_audio*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

int FUNC_7(struct snd_usb_audio *VAR_8,
        struct snd_usb_power_domain *VAR_9,
        unsigned char VAR_10)
{
 struct usb_device *VAR_11 = VAR_8->dev;
 unsigned char VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = FUNC_3(VAR_8) | (VAR_9->pd_id << 8);

 VAR_13 = FUNC_2(VAR_8->dev, FUNC_5(VAR_8->dev, 0),
         VAR_1,
         VAR_6 | VAR_7 | VAR_4,
         VAR_2 << 8, VAR_14,
         &VAR_12, sizeof(VAR_12));
 if (VAR_13 < 0) {
  FUNC_1(&VAR_11->dev, "Can't get UAC3 power state for id %d\n",
   VAR_9->pd_id);
  return VAR_13;
 }

 if (VAR_12 == VAR_10) {
  FUNC_0(&VAR_11->dev, "UAC3 power domain id %d already in state %d\n",
   VAR_9->pd_id, VAR_10);
  return 0;
 }

 VAR_13 = FUNC_2(VAR_8->dev, FUNC_6(VAR_8->dev, 0), VAR_1,
         VAR_6 | VAR_7 | VAR_5,
         VAR_2 << 8, VAR_14,
         &VAR_10, sizeof(VAR_10));
 if (VAR_13 < 0) {
  FUNC_1(&VAR_11->dev, "Can't set UAC3 power state to %d for id %d\n",
   VAR_10, VAR_9->pd_id);
  return VAR_13;
 }

 if (VAR_10 == VAR_3) {
  switch (VAR_12) {
  case 128:
   FUNC_4(VAR_9->pd_d2d0_rec * 50);
   break;
  case 129:
   FUNC_4(VAR_9->pd_d1d0_rec * 50);
   break;
  default:
   return -VAR_0;
  }
 }

 FUNC_0(&VAR_11->dev, "UAC3 power domain id %d change to state %d\n",
  VAR_9->pd_id, VAR_10);

 return 0;
}
