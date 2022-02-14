
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memblk {int offset; } ;
struct snd_emu10k1_memblk {scalar_t__ first_page; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;
 void* FUNC_3 (struct snd_emu10k1*,scalar_t__,int) ;

int FUNC_4(struct snd_emu10k1 *VAR_1, struct snd_util_memblk *VAR_2,
       int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 void *VAR_10;
 struct snd_emu10k1_memblk *VAR_11 = (struct snd_emu10k1_memblk *)VAR_2;

 VAR_3 += VAR_2->offset & (VAR_0 - 1);
 VAR_7 = VAR_3 + VAR_4;
 VAR_5 = FUNC_1(VAR_3);
 do {
  VAR_6 = FUNC_0(VAR_5 + 1);
  VAR_8 = VAR_6 - VAR_3;
  VAR_9 = VAR_7 - VAR_3;
  if (VAR_9 < VAR_8)
   VAR_8 = VAR_9;
  VAR_10 = FUNC_3(VAR_1, VAR_5 + VAR_11->first_page, VAR_3);
  if (VAR_10)
   FUNC_2(VAR_10, 0, VAR_8);
  VAR_3 = VAR_6;
  VAR_5++;
 } while (VAR_3 < VAR_7);
 return 0;
}
