
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct ct_vm_block {unsigned int addr; unsigned int size; } ;
struct ct_vm {TYPE_2__* ptp; } ;
struct ct_atc {TYPE_1__* card; } ;
struct TYPE_4__ {scalar_t__ area; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct ct_vm_block* FUNC_1 (struct ct_vm*,int,struct ct_atc*) ;
 unsigned long FUNC_2 (struct snd_pcm_substream*,unsigned int) ;
 struct ct_atc* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static struct ct_vm_block *
FUNC_4(struct ct_vm *VAR_1, struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct ct_vm_block *VAR_4;
 unsigned int VAR_5;
 unsigned VAR_6, VAR_7;
 unsigned long *VAR_8;
 struct ct_atc *VAR_9 = FUNC_3(VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_9);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_9->card->dev,
   "No virtual memory block that is big enough to allocate!\n");
  return ((void*)0);
 }

 VAR_8 = (unsigned long *)VAR_1->ptp[0].area;
 VAR_5 = (VAR_4->addr >> VAR_0);
 VAR_7 = VAR_4->size >> VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  unsigned long VAR_10;
  VAR_10 = FUNC_2(VAR_2, VAR_6 << VAR_0);
  VAR_8[VAR_5 + VAR_6] = VAR_10;
 }

 VAR_4->size = VAR_3;
 return VAR_4;
}
