
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_iso_resources {int allocated; int bandwidth; int bandwidth_overhead; int channel; int mutex; TYPE_2__* unit; int channels_mask; int generation; } ;
struct fw_card {int lock; int generation; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {struct fw_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct fw_card*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct fw_card*,int ,int ,int*,int*,int) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct fw_card*) ;

int FUNC_11(struct fw_iso_resources *VAR_3,
         unsigned int VAR_4, int VAR_5)
{
 struct fw_card *VAR_6 = FUNC_4(VAR_3->unit)->card;
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_0(VAR_3->allocated))
  return -VAR_1;

 VAR_3->bandwidth = FUNC_7(VAR_4, VAR_5);

retry_after_bus_reset:
 FUNC_8(&VAR_6->lock);
 VAR_3->generation = VAR_6->generation;
 VAR_3->bandwidth_overhead = FUNC_1(VAR_6);
 FUNC_9(&VAR_6->lock);

 VAR_9 = FUNC_10(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_5(&VAR_3->mutex);

 VAR_7 = VAR_3->bandwidth + VAR_3->bandwidth_overhead;
 FUNC_3(VAR_6, VAR_3->generation, VAR_3->channels_mask,
          &VAR_8, &VAR_7, 1);
 if (VAR_8 == -VAR_0) {
  FUNC_6(&VAR_3->mutex);
  goto retry_after_bus_reset;
 }
 if (VAR_8 >= 0) {
  VAR_3->channel = VAR_8;
  VAR_3->allocated = 1;
 } else {
  if (VAR_8 == -VAR_2)
   FUNC_2(&VAR_3->unit->device,
    "isochronous resources exhausted\n");
  else
   FUNC_2(&VAR_3->unit->device,
    "isochronous resource allocation failed\n");
 }

 FUNC_6(&VAR_3->mutex);

 return VAR_8;
}
