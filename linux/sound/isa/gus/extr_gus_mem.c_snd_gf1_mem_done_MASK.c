
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_gf1_mem {struct snd_gf1_mem_block* first; } ;
struct TYPE_2__ {struct snd_gf1_mem mem_alloc; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;
struct snd_gf1_mem_block {struct snd_gf1_mem_block* next; } ;


 int FUNC_0 (struct snd_gf1_mem*,struct snd_gf1_mem_block*) ;

int FUNC_1(struct snd_gus_card * VAR_0)
{
 struct snd_gf1_mem *VAR_1;
 struct snd_gf1_mem_block *VAR_2, *VAR_3;

 VAR_1 = &VAR_0->gf1.mem_alloc;
 VAR_2 = VAR_1->first;
 while (VAR_2) {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_1, VAR_2);
  VAR_2 = VAR_3;
 }
 return 0;
}
