
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slots; int slot_width; } ;
struct uniperif {TYPE_1__ tdm_slot; } ;



__attribute__((used)) static inline int FUNC_0(struct uniperif *VAR_0)
{
 return (VAR_0->tdm_slot.slots * VAR_0->tdm_slot.slot_width / 8);
}
