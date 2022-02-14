
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg_mask; scalar_t__ reg; } ;
struct snd_pcm {TYPE_1__ oss; TYPE_2__* card; scalar_t__ device; } ;
struct TYPE_4__ {size_t number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm *VAR_3)
{
 if (VAR_3->oss.reg) {
  if (VAR_3->oss.reg_mask & 1) {
   VAR_3->oss.reg_mask &= ~1;
   FUNC_1(VAR_0,
        VAR_3->card, 0);
  }
  if (VAR_3->oss.reg_mask & 2) {
   VAR_3->oss.reg_mask &= ~2;
   FUNC_1(VAR_0,
        VAR_3->card, 1);
  }
  if (VAR_2[VAR_3->card->number] == (int)VAR_3->device) {



  }
  VAR_3->oss.reg = 0;
 }
 return 0;
}
