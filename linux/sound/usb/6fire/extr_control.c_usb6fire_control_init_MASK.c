
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sfire_chip {struct control_runtime* control; TYPE_1__* dev; int card; struct comm_runtime* comm; } ;
struct control_runtime {int set_channels; int set_rate; int (* update_streaming ) (struct control_runtime*) ;struct sfire_chip* chip; } ;
struct comm_runtime {int (* write8 ) (struct comm_runtime*,scalar_t__,int ,int ) ;} ;
struct TYPE_7__ {int value; int reg; scalar_t__ type; } ;
struct TYPE_6__ {scalar_t__ name; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 TYPE_2__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct control_runtime*) ;
 struct control_runtime* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,struct control_runtime*) ;
 int FUNC_5 (struct comm_runtime*,scalar_t__,int ,int ) ;
 int FUNC_6 (struct control_runtime*,int ,char*,int ) ;
 int FUNC_7 (struct control_runtime*) ;
 int FUNC_8 (struct control_runtime*) ;
 int FUNC_9 (struct control_runtime*) ;
 int FUNC_10 (struct control_runtime*) ;
 int FUNC_11 (struct control_runtime*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct control_runtime*) ;
 int VAR_7 ;

int FUNC_13(struct sfire_chip *VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct control_runtime *VAR_11 = FUNC_2(sizeof(struct control_runtime),
   VAR_1);
 struct comm_runtime *VAR_12 = VAR_8->comm;

 if (!VAR_11)
  return -VAR_0;

 VAR_11->chip = VAR_8;
 VAR_11->update_streaming = FUNC_12;
 VAR_11->set_rate = VAR_6;
 VAR_11->set_channels = VAR_5;

 VAR_9 = 0;
 while (VAR_3[VAR_9].type) {
  VAR_12->write8(VAR_12, VAR_3[VAR_9].type, VAR_3[VAR_9].reg,
    VAR_3[VAR_9].value);
  VAR_9++;
 }

 FUNC_9(VAR_11);
 FUNC_8(VAR_11);
 FUNC_11(VAR_11);
 FUNC_10(VAR_11);
 FUNC_7(VAR_11);
 FUNC_12(VAR_11);

 VAR_10 = FUNC_6(VAR_11, VAR_8->card,
  "Master Playback Volume", VAR_7);
 if (VAR_10) {
  FUNC_0(&VAR_8->dev->dev, "cannot add control.\n");
  FUNC_1(VAR_11);
  return VAR_10;
 }
 VAR_10 = FUNC_6(VAR_11, VAR_8->card,
  "Master Playback Switch", VAR_4);
 if (VAR_10) {
  FUNC_0(&VAR_8->dev->dev, "cannot add control.\n");
  FUNC_1(VAR_11);
  return VAR_10;
 }

 VAR_9 = 0;
 while (VAR_2[VAR_9].name) {
  VAR_10 = FUNC_3(VAR_8->card, FUNC_4(&VAR_2[VAR_9], VAR_11));
  if (VAR_10 < 0) {
   FUNC_1(VAR_11);
   FUNC_0(&VAR_8->dev->dev, "cannot add control.\n");
   return VAR_10;
  }
  VAR_9++;
 }

 VAR_8->control = VAR_11;
 return 0;
}
