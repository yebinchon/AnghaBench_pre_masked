
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_oxfw {int dwork; int hwdep_wait; int lock; int mutex; struct ieee1394_device_id const* entry; int unit; } ;
struct ieee1394_device_id {scalar_t__ vendor_id; } ;
struct fw_unit {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct fw_unit*) ;
 int FUNC_2 (int *,struct snd_oxfw*) ;
 struct snd_oxfw* FUNC_3 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct fw_unit*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fw_unit*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct fw_unit *VAR_5,
        const struct ieee1394_device_id *VAR_6)
{
 struct snd_oxfw *VAR_7;

 if (VAR_6->vendor_id == VAR_3 && !FUNC_1(VAR_5))
  return -VAR_0;


 VAR_7 = FUNC_3(&VAR_5->device, sizeof(struct snd_oxfw), VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_7->unit = FUNC_4(VAR_5);
 FUNC_2(&VAR_5->device, VAR_7);

 VAR_7->entry = VAR_6;
 FUNC_6(&VAR_7->mutex);
 FUNC_8(&VAR_7->lock);
 FUNC_5(&VAR_7->hwdep_wait);


 FUNC_0(&VAR_7->dwork, VAR_4);
 FUNC_7(VAR_5, &VAR_7->dwork);

 return 0;
}
