
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_bebob_spec {int dummy; } ;
struct snd_bebob {int unit; int dwork; int hwdep_wait; int lock; int mutex; struct snd_bebob_spec const* spec; struct ieee1394_device_id const* entry; } ;
struct ieee1394_device_id {scalar_t__ vendor_id; scalar_t__ model_id; scalar_t__ driver_data; } ;
struct fw_unit {int device; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct fw_unit*) ;
 int FUNC_2 (int *,struct snd_bebob*) ;
 struct snd_bebob* FUNC_3 (int *,int,int ) ;
 int VAR_10 ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct fw_unit*) ;
 struct snd_bebob_spec* FUNC_7 (struct fw_unit*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct fw_unit*) ;
 int FUNC_11 (struct fw_unit*,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct fw_unit *VAR_11, const struct ieee1394_device_id *VAR_12)
{
 struct snd_bebob *VAR_13;
 const struct snd_bebob_spec *VAR_14;

 if (VAR_12->vendor_id == VAR_7 &&
     VAR_12->model_id == VAR_3)
  VAR_14 = FUNC_7(VAR_11);
 else if (VAR_12->vendor_id == VAR_8 &&
   VAR_12->model_id == VAR_4 &&
   !FUNC_1(VAR_11))
  VAR_14 = ((void*)0);
 else
  VAR_14 = (const struct snd_bebob_spec *)VAR_12->driver_data;

 if (VAR_14 == ((void*)0)) {
  if (VAR_12->vendor_id == VAR_8 ||
      VAR_12->vendor_id == VAR_9)
   return FUNC_10(VAR_11);
  else
   return -VAR_0;
 }


 VAR_13 = FUNC_3(&VAR_11->device, sizeof(struct snd_bebob),
        VAR_2);
 if (!VAR_13)
  return -VAR_1;
 VAR_13->unit = FUNC_6(VAR_11);
 FUNC_2(&VAR_11->device, VAR_13);

 VAR_13->entry = VAR_12;
 VAR_13->spec = VAR_14;
 FUNC_9(&VAR_13->mutex);
 FUNC_12(&VAR_13->lock);
 FUNC_8(&VAR_13->hwdep_wait);


 FUNC_0(&VAR_13->dwork, VAR_10);

 if (VAR_12->vendor_id != VAR_8 ||
     (VAR_12->model_id != VAR_5 &&
      VAR_12->model_id != VAR_6)) {
  FUNC_11(VAR_11, &VAR_13->dwork);
 } else {
  FUNC_5(FUNC_4(VAR_13->unit)->card,
          0, 1);
 }

 return 0;
}
