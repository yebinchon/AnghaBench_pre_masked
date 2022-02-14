
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int offset; } ;
struct snd_dice {int owner_generation; int unit; TYPE_2__ notification_handler; } ;
struct fw_device {TYPE_1__* card; } ;
typedef int __be64 ;
struct TYPE_3__ {scalar_t__ node_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct fw_device* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_dice*,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ,int *,int,int) ;

__attribute__((used)) static void FUNC_6(struct snd_dice *VAR_8)
{
 struct fw_device *VAR_9 = FUNC_1(VAR_8->unit);
 __be64 *VAR_10;

 VAR_10 = FUNC_4(2 * 8, VAR_2);
 if (VAR_10 == ((void*)0))
  return;

 VAR_10[0] = FUNC_0(
  ((u64)VAR_9->card->node_id << VAR_4) |
  VAR_8->notification_handler.offset);
 VAR_10[1] = FUNC_0(VAR_5);
 FUNC_5(VAR_8->unit, VAR_7,
      FUNC_2(VAR_8, VAR_6,
           VAR_3),
      VAR_10, 2 * 8, VAR_1 |
      VAR_0 | VAR_8->owner_generation);

 FUNC_3(VAR_10);

 VAR_8->owner_generation = -1;
}
