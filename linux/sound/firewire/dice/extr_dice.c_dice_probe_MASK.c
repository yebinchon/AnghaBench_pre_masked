
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int dwork; int hwdep_wait; int clock_accepted; int mutex; int lock; scalar_t__ detect_formats; int unit; } ;
struct ieee1394_device_id {scalar_t__ vendor_id; scalar_t__ driver_data; } ;
struct fw_unit {int device; } ;
typedef scalar_t__ snd_dice_detect_formats_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct fw_unit*) ;
 int FUNC_2 (int *,struct snd_dice*) ;
 struct snd_dice* FUNC_3 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct fw_unit*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (struct fw_unit*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct fw_unit *VAR_6,
        const struct ieee1394_device_id *VAR_7)
{
 struct snd_dice *VAR_8;
 int VAR_9;

 if (!VAR_7->driver_data && VAR_7->vendor_id != VAR_3) {
  VAR_9 = FUNC_1(VAR_6);
  if (VAR_9 < 0)
   return -VAR_0;
 }


 VAR_8 = FUNC_3(&VAR_6->device, sizeof(struct snd_dice), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->unit = FUNC_4(VAR_6);
 FUNC_2(&VAR_6->device, VAR_8);

 if (!VAR_7->driver_data) {
  VAR_8->detect_formats = VAR_5;
 } else {
  VAR_8->detect_formats =
    (snd_dice_detect_formats_t)VAR_7->driver_data;
 }

 FUNC_9(&VAR_8->lock);
 FUNC_7(&VAR_8->mutex);
 FUNC_5(&VAR_8->clock_accepted);
 FUNC_6(&VAR_8->hwdep_wait);


 FUNC_0(&VAR_8->dwork, VAR_4);
 FUNC_8(VAR_6, &VAR_8->dwork);

 return 0;
}
