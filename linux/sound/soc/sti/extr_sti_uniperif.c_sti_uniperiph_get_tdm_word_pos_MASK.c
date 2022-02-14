
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slot_width; int slots; unsigned int mask; } ;
struct uniperif {TYPE_1__ tdm_slot; } ;


 int VAR_0 ;

int FUNC_0(struct uniperif *VAR_1,
       unsigned int *VAR_2)
{
 int VAR_3 = VAR_1->tdm_slot.slot_width / 8;
 int VAR_4 = VAR_1->tdm_slot.slots;
 unsigned int VAR_5 = VAR_1->tdm_slot.mask;
 int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9[4];
 for (VAR_6 = 0, VAR_7 = 0, VAR_8 = 0; (VAR_6 < VAR_4) && (VAR_8 < VAR_0); VAR_6++) {
  if ((VAR_5 >> VAR_6) & 0x01) {
   VAR_9[VAR_7] = VAR_6 * VAR_3;

   if (VAR_3 == 4) {
    VAR_9[VAR_7 + 1] = VAR_9[VAR_7] + 2;
    VAR_7++;
   }
   VAR_7++;

   if (VAR_7 > 3) {
    VAR_2[VAR_8] = VAR_9[1] |
           (VAR_9[0] << 8) |
           (VAR_9[3] << 16) |
           (VAR_9[2] << 24);
    VAR_7 = 0;
    VAR_8++;
   }
  }
 }

 return 0;
}
