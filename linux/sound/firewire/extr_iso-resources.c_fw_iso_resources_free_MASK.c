
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_iso_resources {int allocated; int bandwidth; int bandwidth_overhead; unsigned long long channel; int mutex; TYPE_2__* unit; int generation; } ;
struct fw_card {int dummy; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {struct fw_card* card; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fw_card*,int ,unsigned long long,int*,int*,int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fw_iso_resources *VAR_0)
{
 struct fw_card *VAR_1;
 int VAR_2, VAR_3;


 if (VAR_0->unit == ((void*)0))
  return;
 VAR_1 = FUNC_2(VAR_0->unit)->card;

 FUNC_3(&VAR_0->mutex);

 if (VAR_0->allocated) {
  VAR_2 = VAR_0->bandwidth + VAR_0->bandwidth_overhead;
  FUNC_1(VAR_1, VAR_0->generation, 1uLL << VAR_0->channel,
           &VAR_3, &VAR_2, 0);
  if (VAR_3 < 0)
   FUNC_0(&VAR_0->unit->device,
    "isochronous resource deallocation failed\n");

  VAR_0->allocated = 0;
 }

 FUNC_4(&VAR_0->mutex);
}
