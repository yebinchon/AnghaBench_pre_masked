
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int src_mask; int dest_mask; int nid; TYPE_1__* array; } ;
struct lola {TYPE_2__ mixer; } ;
struct TYPE_3__ {int * dest_mix_gain_enable; int ** dest_mix_gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lola*) ;
 int FUNC_1 (struct lola*,int ,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (unsigned short,int *) ;

__attribute__((used)) static int FUNC_5(struct lola *VAR_2,
           unsigned int VAR_3, unsigned int VAR_4,
           unsigned short VAR_5, bool VAR_6)
{
 unsigned int VAR_7;

 if (!(VAR_2->mixer.src_mask & (1 << VAR_3)) ||
     !(VAR_2->mixer.dest_mask & (1 << VAR_4)))
  return -VAR_0;
 if (VAR_6)
  FUNC_4(VAR_5, &VAR_2->mixer.array->dest_mix_gain[VAR_4][VAR_3]);
 VAR_7 = FUNC_2(&VAR_2->mixer.array->dest_mix_gain_enable[VAR_4]);
 if (VAR_6)
  VAR_7 |= (1 << VAR_3);
 else
  VAR_7 &= ~(1 << VAR_3);
 FUNC_3(VAR_7, &VAR_2->mixer.array->dest_mix_gain_enable[VAR_4]);
 FUNC_0(VAR_2);
 return FUNC_1(VAR_2, VAR_2->mixer.nid, VAR_1,
    VAR_3, VAR_4);
}
