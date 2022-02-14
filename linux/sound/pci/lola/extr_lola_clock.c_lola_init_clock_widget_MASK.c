
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lola_sample_clock {unsigned char type; int format; unsigned int freq; } ;
struct TYPE_4__ {int nid; unsigned int items; int cur_index; int cur_freq; int cur_valid; int* idx_lookup; struct lola_sample_clock* sample_clock; } ;
struct lola {unsigned int sample_rate_min; TYPE_2__ clock; TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct lola*,int,int ,int,int ,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct lola*,int,int ,unsigned int*) ;
 unsigned int FUNC_4 (unsigned int) ;

int FUNC_5(struct lola *VAR_9, int VAR_10)
{
 unsigned int VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;

 VAR_18 = FUNC_3(VAR_9, VAR_10, VAR_6, &VAR_11);
 if (VAR_18 < 0) {
  FUNC_1(VAR_9->card->dev, "Can't read wcaps for 0x%x\n", VAR_10);
  return VAR_18;
 }

 if ((VAR_11 & 0xfff00000) != 0x01f00000) {
  FUNC_0(VAR_9->card->dev, "No valid clock widget\n");
  return 0;
 }

 VAR_9->clock.nid = VAR_10;
 VAR_9->clock.items = VAR_11 & 0xff;
 FUNC_0(VAR_9->card->dev, "clock_list nid=%x, entries=%d\n", VAR_10,
      VAR_9->clock.items);
 if (VAR_9->clock.items > VAR_8) {
  FUNC_1(VAR_9->card->dev, "CLOCK_LIST too big: %d\n",
         VAR_9->clock.items);
  return -VAR_0;
 }

 VAR_14 = VAR_9->clock.items;
 VAR_15 = (VAR_14 + 3) / 4;
 VAR_16 = 0;
 VAR_17 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
  unsigned int VAR_19;
  unsigned short VAR_20[4];

  VAR_18 = FUNC_2(VAR_9, VAR_10, VAR_7,
          VAR_16, 0, &VAR_11, &VAR_19);
  if (VAR_18 < 0) {
   FUNC_1(VAR_9->card->dev, "Can't read CLOCK_LIST\n");
   return -VAR_0;
  }

  VAR_20[0] = VAR_11 & 0xfff;
  VAR_20[1] = (VAR_11 >> 16) & 0xfff;
  VAR_20[2] = VAR_19 & 0xfff;
  VAR_20[3] = (VAR_19 >> 16) & 0xfff;

  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   unsigned char VAR_21 = VAR_20[VAR_13] >> 8;
   unsigned int VAR_22 = VAR_20[VAR_13] & 0xff;
   int VAR_23 = VAR_1;
   bool VAR_24 = 1;
   if (VAR_21 == VAR_4) {
    VAR_22 = FUNC_4(VAR_22);
    if (VAR_22 < VAR_9->sample_rate_min)
     VAR_24 = 0;
    else if (VAR_22 == 48000) {
     VAR_9->clock.cur_index = VAR_17;
     VAR_9->clock.cur_freq = 48000;
     VAR_9->clock.cur_valid = 1;
    }
   } else if (VAR_21 == VAR_5) {
    VAR_22 = FUNC_4(VAR_22);
    if (VAR_22 < VAR_9->sample_rate_min)
     VAR_24 = 0;

    if (VAR_20[VAR_13] & 0x80)
     VAR_23 = VAR_2;
    else
     VAR_23 = VAR_3;
   }
   if (VAR_24) {
    struct lola_sample_clock *VAR_25;
    VAR_25 = &VAR_9->clock.sample_clock[VAR_17];
    VAR_25->type = VAR_21;
    VAR_25->format = VAR_23;
    VAR_25->freq = VAR_22;

    VAR_9->clock.idx_lookup[VAR_17] = VAR_16;
    VAR_17++;
   } else {
    VAR_9->clock.items--;
   }
   if (++VAR_16 >= VAR_14)
    break;
  }
 }
 return 0;
}
