
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int src_mask; int nid; TYPE_2__* array; } ;
struct lola {TYPE_3__ mixer; TYPE_1__* card; } ;
struct TYPE_5__ {int src_gain_enable; int * src_gain; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned short,unsigned int) ;
 int FUNC_1 (struct lola*) ;
 int FUNC_2 (struct lola*,int ,int ,unsigned int,int ) ;
 unsigned int FUNC_3 (int *) ;
 unsigned short FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,int *) ;
 int FUNC_6 (unsigned short,int *) ;

__attribute__((used)) static int FUNC_7(struct lola *VAR_2, unsigned int VAR_3,
       unsigned short VAR_4, bool VAR_5)
{
 unsigned int VAR_6, VAR_7;

 if (!(VAR_2->mixer.src_mask & (1 << VAR_3)))
  return -VAR_0;
 VAR_6 = VAR_7 = FUNC_3(&VAR_2->mixer.array->src_gain_enable);
 if (VAR_5)
  VAR_7 |= (1 << VAR_3);
 else
  VAR_7 &= ~(1 << VAR_3);

 if ((VAR_7 == VAR_6) &&
     (VAR_4 == FUNC_4(&VAR_2->mixer.array->src_gain[VAR_3])))
  return 0;

 FUNC_0(VAR_2->card->dev,
  "lola_mixer_set_src_gain (id=%d, gain=%d) enable=%x\n",
   VAR_3, VAR_4, VAR_7);
 FUNC_6(VAR_4, &VAR_2->mixer.array->src_gain[VAR_3]);
 FUNC_5(VAR_7, &VAR_2->mixer.array->src_gain_enable);
 FUNC_1(VAR_2);

 return FUNC_2(VAR_2, VAR_2->mixer.nid,
    VAR_1, VAR_3, 0);
}
