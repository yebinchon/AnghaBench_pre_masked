
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int offset; } ;
struct snd_dice {int owner_generation; TYPE_3__* unit; TYPE_2__ notification_handler; } ;
struct fw_device {int generation; TYPE_1__* card; } ;
typedef scalar_t__ __be64 ;
struct TYPE_7__ {int device; } ;
struct TYPE_5__ {scalar_t__ node_id; } ;


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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 struct fw_device* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct snd_dice*,int ,int ) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*,int ,int ,scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_9(struct snd_dice *VAR_10, bool VAR_11)
{
 struct fw_device *VAR_12 = FUNC_2(VAR_10->unit);
 __be64 *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_14 = (VAR_11) ? 3 : 0;

 VAR_13 = FUNC_5(2 * 8, VAR_4);
 if (!VAR_13)
  return -VAR_2;

 for (;;) {
  VAR_13[0] = FUNC_0(VAR_7);
  VAR_13[1] = FUNC_0(
   ((u64)VAR_12->card->node_id << VAR_6) |
   VAR_10->notification_handler.offset);

  VAR_10->owner_generation = VAR_12->generation;
  FUNC_7();
  VAR_15 = FUNC_8(VAR_10->unit, VAR_9,
      FUNC_3(VAR_10,
           VAR_8,
           VAR_5),
      VAR_13, 2 * 8,
      VAR_3 |
       VAR_10->owner_generation);
  if (VAR_15 == 0) {

   if (VAR_13[0] == FUNC_0(VAR_7))
    break;

   if (VAR_13[0] == VAR_13[1])
    break;

   FUNC_1(&VAR_10->unit->device,
    "device is already in use\n");
   VAR_15 = -VAR_1;
  }
  if (VAR_15 != -VAR_0 || VAR_14-- > 0)
   break;

  FUNC_6(20);
 }

 FUNC_4(VAR_13);

 if (VAR_15 < 0)
  VAR_10->owner_generation = -1;

 return VAR_15;
}
