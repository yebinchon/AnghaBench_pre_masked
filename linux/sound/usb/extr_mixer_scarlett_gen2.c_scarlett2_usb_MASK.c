
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usb_mixer_interface {TYPE_1__* chip; struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_usb_packet {void* data; scalar_t__ cmd; scalar_t__ seq; scalar_t__ size; scalar_t__ error; scalar_t__ pad; } ;
struct scarlett2_mixer_data {int usb_mutex; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct scarlett2_usb_packet*) ;
 struct scarlett2_usb_packet* FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct scarlett2_mixer_data*,struct scarlett2_usb_packet*,int ,int) ;
 int FUNC_7 (int ,int ,int ,int,int ,int ,struct scarlett2_usb_packet*,int) ;
 int FUNC_8 (TYPE_1__*,char*,int,int,...) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(
 struct usb_mixer_interface *VAR_10, u32 VAR_11,
 void *VAR_12, u16 VAR_13, void *VAR_14, u16 VAR_15)
{
 struct scarlett2_mixer_data *VAR_16 = VAR_10->private_data;
 u16 VAR_17 = sizeof(struct scarlett2_usb_packet) + VAR_13;
 u16 VAR_18 = sizeof(struct scarlett2_usb_packet) + VAR_15;
 struct scarlett2_usb_packet *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 int VAR_21 = 0;

 VAR_19 = FUNC_1(VAR_17, VAR_2);
 if (!VAR_19) {
  VAR_21 = -VAR_1;
  goto error;
 }

 VAR_20 = FUNC_1(VAR_18, VAR_2);
 if (!VAR_20) {
  VAR_21 = -VAR_1;
  goto error;
 }

 FUNC_4(&VAR_16->usb_mutex);



 FUNC_6(VAR_16, VAR_19, VAR_11, VAR_13);

 if (VAR_13)
  FUNC_3(VAR_19->data, VAR_12, VAR_13);

 VAR_21 = FUNC_7(VAR_10->chip->dev,
   FUNC_9(VAR_10->chip->dev, 0),
   VAR_3,
   VAR_8 | VAR_9 | VAR_7,
   0,
   VAR_5,
   VAR_19,
   VAR_17);

 if (VAR_21 != VAR_17) {
  FUNC_8(
   VAR_10->chip,
   "Scarlett Gen 2 USB request result cmd %x was %d\n",
   VAR_11, VAR_21);
  VAR_21 = -VAR_0;
  goto unlock;
 }



 VAR_21 = FUNC_7(VAR_10->chip->dev,
   FUNC_9(VAR_10->chip->dev, 0),
   VAR_4,
   VAR_8 | VAR_9 | VAR_6,
   0,
   VAR_5,
   VAR_20,
   VAR_18);



 if (VAR_21 != VAR_18) {
  FUNC_8(
   VAR_10->chip,
   "Scarlett Gen 2 USB response result cmd %x was %d\n",
   VAR_11, VAR_21);
  VAR_21 = -VAR_0;
  goto unlock;
 }

 if (VAR_20->cmd != VAR_19->cmd ||
     VAR_20->seq != VAR_19->seq ||
     VAR_15 != FUNC_2(VAR_20->size) ||
     VAR_20->error ||
     VAR_20->pad) {
  FUNC_8(
   VAR_10->chip,
   "Scarlett Gen 2 USB invalid response; "
      "cmd tx/rx %d/%d seq %d/%d size %d/%d "
      "error %d pad %d\n",
   FUNC_2(VAR_19->cmd), FUNC_2(VAR_20->cmd),
   FUNC_2(VAR_19->seq), FUNC_2(VAR_20->seq),
   VAR_15, FUNC_2(VAR_20->size),
   FUNC_2(VAR_20->error),
   FUNC_2(VAR_20->pad));
  VAR_21 = -VAR_0;
  goto unlock;
 }

 if (VAR_15 > 0)
  FUNC_3(VAR_14, VAR_20->data, VAR_15);

unlock:
 FUNC_5(&VAR_16->usb_mutex);
error:
 FUNC_0(VAR_19);
 FUNC_0(VAR_20);
 return VAR_21;
}
