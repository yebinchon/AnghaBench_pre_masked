
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_iso_resources {int allocated; int bandwidth_overhead; int bandwidth; unsigned long long channel; int mutex; TYPE_2__* unit; int generation; } ;
struct fw_card {int lock; int generation; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {struct fw_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_card*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct fw_card*,int ,unsigned long long,int*,int*,int) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct fw_iso_resources *VAR_2)
{
 struct fw_card *VAR_3 = FUNC_3(VAR_2->unit)->card;
 int VAR_4, VAR_5;

 FUNC_4(&VAR_2->mutex);

 if (!VAR_2->allocated) {
  FUNC_5(&VAR_2->mutex);
  return 0;
 }

 FUNC_6(&VAR_3->lock);
 VAR_2->generation = VAR_3->generation;
 VAR_2->bandwidth_overhead = FUNC_0(VAR_3);
 FUNC_7(&VAR_3->lock);

 VAR_4 = VAR_2->bandwidth + VAR_2->bandwidth_overhead;

 FUNC_2(VAR_3, VAR_2->generation, 1uLL << VAR_2->channel,
          &VAR_5, &VAR_4, 1);




 if (VAR_5 < 0 && VAR_5 != -VAR_0) {
  VAR_2->allocated = 0;
  if (VAR_5 == -VAR_1)
   FUNC_1(&VAR_2->unit->device,
    "isochronous resources exhausted\n");
  else
   FUNC_1(&VAR_2->unit->device,
    "isochronous resource allocation failed\n");
 }

 FUNC_5(&VAR_2->mutex);

 return VAR_5;
}
