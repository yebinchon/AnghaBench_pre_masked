
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_oxfw {TYPE_1__* entry; int mutex; scalar_t__ registered; int unit; int dwork; } ;
struct fw_unit {int device; } ;
struct TYPE_2__ {scalar_t__ vendor_id; } ;


 scalar_t__ VAR_0 ;
 struct snd_oxfw* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fw_unit*,int *) ;
 int FUNC_5 (struct snd_oxfw*) ;
 int FUNC_6 (struct snd_oxfw*) ;

__attribute__((used)) static void FUNC_7(struct fw_unit *VAR_1)
{
 struct snd_oxfw *VAR_2 = FUNC_0(&VAR_1->device);

 if (!VAR_2->registered)
  FUNC_4(VAR_1, &VAR_2->dwork);

 FUNC_1(VAR_2->unit);

 if (VAR_2->registered) {
  FUNC_2(&VAR_2->mutex);
  FUNC_6(VAR_2);
  FUNC_3(&VAR_2->mutex);

  if (VAR_2->entry->vendor_id == VAR_0)
   FUNC_5(VAR_2);
 }
}
