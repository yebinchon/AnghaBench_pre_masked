
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int device_config; int (* mixer_init ) (struct oxygen*) ;} ;
struct oxygen {TYPE_1__ model; scalar_t__ has_ac97_1; scalar_t__ has_ac97_0; } ;
struct TYPE_11__ {int pcm_dev; struct TYPE_11__* controls; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct oxygen*,TYPE_2__*,unsigned int) ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (struct oxygen*) ;

int FUNC_3(struct oxygen *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_4, FUNC_0(VAR_4));
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_8->model.device_config & VAR_1) {
  VAR_10 = FUNC_1(VAR_8, VAR_7,
       FUNC_0(VAR_7));
  if (VAR_10 < 0)
   return VAR_10;
 }
 if (VAR_8->model.device_config & VAR_0) {
  VAR_10 = FUNC_1(VAR_8, VAR_6,
       FUNC_0(VAR_6));
  if (VAR_10 < 0)
   return VAR_10;
 }
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); ++VAR_9) {
  if (!(VAR_8->model.device_config & VAR_5[VAR_9].pcm_dev))
   continue;
  VAR_10 = FUNC_1(VAR_8, VAR_5[VAR_9].controls,
       FUNC_0(VAR_5[VAR_9].controls));
  if (VAR_10 < 0)
   return VAR_10;
 }
 if (VAR_8->has_ac97_0) {
  VAR_10 = FUNC_1(VAR_8, VAR_2,
       FUNC_0(VAR_2));
  if (VAR_10 < 0)
   return VAR_10;
 }
 if (VAR_8->has_ac97_1) {
  VAR_10 = FUNC_1(VAR_8, VAR_3,
       FUNC_0(VAR_3));
  if (VAR_10 < 0)
   return VAR_10;
 }
 return VAR_8->model.mixer_init ? VAR_8->model.mixer_init(VAR_8) : 0;
}
