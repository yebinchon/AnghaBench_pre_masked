
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gf1_mem_block {unsigned int ptr; unsigned int size; struct snd_gf1_mem_block* next; int prev; int * name; scalar_t__* share_id; scalar_t__ share; int owner; int flags; } ;
struct snd_gf1_mem {struct snd_gf1_mem_block* first; struct snd_gf1_bank_info* banks_8; struct snd_gf1_bank_info* banks_16; } ;
struct snd_gf1_bank_info {unsigned int address; unsigned int size; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct snd_gf1_mem * VAR_3,
       struct snd_gf1_mem_block * VAR_4,
       unsigned int VAR_5, int VAR_6, int VAR_7)
{
 struct snd_gf1_bank_info *VAR_8 = VAR_6 ? VAR_3->banks_16 : VAR_3->banks_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11;
 struct snd_gf1_mem_block *VAR_12;
 unsigned int VAR_13, VAR_14;

 if (VAR_6 && VAR_7 < 2)
  VAR_7 = 2;
 VAR_4->flags = VAR_6 ? VAR_1 : 0;
 VAR_4->owner = VAR_2;
 VAR_4->share = 0;
 VAR_4->share_id[0] = VAR_4->share_id[1] =
 VAR_4->share_id[2] = VAR_4->share_id[3] = 0;
 VAR_4->name = ((void*)0);
 VAR_4->prev = VAR_4->next = ((void*)0);
 for (VAR_12 = VAR_3->first, VAR_9 = 0; VAR_12; VAR_12 = VAR_12->next) {
  while (VAR_12->ptr >= (VAR_10 = VAR_8[VAR_9].address + VAR_8[VAR_9].size))
   VAR_9++;
  while (VAR_12->ptr + VAR_12->size >= (VAR_10 = VAR_8[VAR_9].address + VAR_8[VAR_9].size))
   VAR_9++;
  VAR_14 = VAR_10;
  if (VAR_12->next) {
   if (VAR_12->ptr + VAR_12->size == VAR_12->next->ptr)
    continue;
   if (VAR_12->next->ptr < VAR_10)
    VAR_14 = VAR_12->next->ptr;
  }
  VAR_13 = FUNC_0(VAR_12->ptr + VAR_12->size, VAR_7);
  if (VAR_13 >= VAR_14)
   continue;
  VAR_11 = VAR_14 - VAR_13;
  if ((int)VAR_5 <= VAR_11) {
   VAR_4->ptr = VAR_13;
   VAR_4->size = VAR_5;
   return 0;
  }
 }
 while (++VAR_9 < 4) {
  if (VAR_5 <= VAR_8[VAR_9].size) {

   VAR_4->ptr = VAR_8[VAR_9].address;
   VAR_4->size = VAR_5;
   return 0;
  }
 }
 return -VAR_0;
}
