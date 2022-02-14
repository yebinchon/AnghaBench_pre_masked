
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* pin_set_slot_channel ) (TYPE_2__*,int ,int,int) ;} ;
struct hdac_chmap {TYPE_2__* hdac; TYPE_1__ ops; } ;
struct hdac_cea_channel_speaker_allocation {int channels; int * speakers; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 struct hdac_cea_channel_speaker_allocation* VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int** VAR_1 ;
 int FUNC_3 (TYPE_2__*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct hdac_chmap *VAR_2,
           hda_nid_t VAR_3,
           bool VAR_4,
           int VAR_5)
{
 struct hdac_cea_channel_speaker_allocation *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10[8];

 VAR_9 = FUNC_2(VAR_5);
 VAR_6 = &VAR_0[VAR_9];

 if (VAR_1[VAR_5][1] == 0) {
  int VAR_11 = 0;

  for (VAR_7 = 0; VAR_7 < VAR_6->channels; VAR_7++) {
   while (!FUNC_0(VAR_11 >= 8) &&
          !VAR_6->speakers[7 - VAR_11])
    VAR_11++;

   VAR_1[VAR_5][VAR_7] = (VAR_7 << 4) | VAR_11++;
  }

  for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
   if (!VAR_6->speakers[7 - VAR_11])
    VAR_1[VAR_5][VAR_7++] = (0xf << 4) | VAR_11;
 }

 if (VAR_4) {
  for (VAR_7 = 0; VAR_7 < VAR_6->channels; VAR_7++)
   VAR_10[VAR_7] = (VAR_7 << 4) | VAR_7;
  for (; VAR_7 < 8; VAR_7++)
   VAR_10[VAR_7] = (0xf << 4) | VAR_7;
 }

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  int VAR_12 = VAR_4 ? VAR_10[VAR_7] : VAR_1[VAR_5][VAR_7];
  int VAR_13 = VAR_12 & 0x0f;
  int VAR_14 = (VAR_12 & 0xf0) >> 4;

  VAR_8 = VAR_2->ops.pin_set_slot_channel(VAR_2->hdac,
    VAR_3, VAR_13, VAR_14);
  if (VAR_8) {
   FUNC_1(&VAR_2->hdac->dev, "HDMI: channel mapping failed\n");
   break;
  }
 }
}
