
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct es1938 {int active; TYPE_5__* rmidi; TYPE_4__* master_volume; TYPE_6__* card; TYPE_3__* master_switch; TYPE_2__* hw_volume; TYPE_1__* hw_switch; int playback1_substream; int playback2_substream; int capture_substream; } ;
typedef int irqreturn_t ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int private_data; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int id; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct es1938*,int ) ;
 int FUNC_2 (struct es1938*,int ) ;
 int FUNC_3 (struct es1938*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,char*,...) ;
 unsigned char FUNC_5 (int ) ;
 unsigned char FUNC_6 (int ) ;
 unsigned char FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,int ,int *) ;
 int FUNC_9 (struct es1938*,int ,int,int ) ;
 int FUNC_10 (struct es1938*,int) ;
 int FUNC_11 (struct es1938*,int,int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_12, void *VAR_13)
{
 struct es1938 *VAR_14 = VAR_13;
 unsigned char VAR_15, VAR_16;
 int VAR_17 = 0;

 VAR_15 = FUNC_5(FUNC_2(VAR_14, VAR_9));






 if (VAR_15 & 0x10) {
  VAR_17 = 1;
  VAR_16 = FUNC_5(FUNC_3(VAR_14, VAR_11));
  if (VAR_14->active & VAR_0)
   FUNC_13(VAR_14->capture_substream);
  else if (VAR_14->active & VAR_3)
   FUNC_13(VAR_14->playback2_substream);
 }


 if (VAR_15 & 0x20) {
  VAR_17 = 1;
  FUNC_9(VAR_14, VAR_8, 0x80, 0);
  if (VAR_14->active & VAR_4)
   FUNC_13(VAR_14->playback1_substream);
 }


 if (VAR_15 & 0x40) {
  int VAR_18 = FUNC_10(VAR_14, 0x64) & 0x80;
  VAR_17 = 1;
  FUNC_8(VAR_14->card, VAR_10, &VAR_14->hw_switch->id);
  FUNC_8(VAR_14->card, VAR_10, &VAR_14->hw_volume->id);
  if (!VAR_18) {
   FUNC_8(VAR_14->card, VAR_10,
           &VAR_14->master_switch->id);
   FUNC_8(VAR_14->card, VAR_10,
           &VAR_14->master_volume->id);
  }

  FUNC_11(VAR_14, 0x66, 0x00);
 }


 if (VAR_15 & 0x80) {




  if (VAR_14->rmidi) {
   VAR_17 = 1;
   FUNC_12(VAR_12, VAR_14->rmidi->private_data);
  }
 }
 return FUNC_0(VAR_17);
}
