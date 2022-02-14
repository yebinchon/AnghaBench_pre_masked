
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_memblk {int dummy; } ;
struct snd_emu10k1 {int * page_ptr_table; int * page_addr_table; int memhdr; } ;
struct snd_dma_buffer {int area; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_emu10k1*,int,int) ;
 int FUNC_1 (struct snd_emu10k1_memblk*) ;
 int FUNC_2 (int ,struct snd_emu10k1_memblk*,int*,int*) ;
 int FUNC_3 (struct snd_emu10k1*,int ) ;
 int FUNC_4 (struct snd_dma_buffer*) ;
 scalar_t__ FUNC_5 (struct snd_emu10k1*,int ,struct snd_dma_buffer*) ;

__attribute__((used)) static int FUNC_6(struct snd_emu10k1 *VAR_2, struct snd_emu10k1_memblk *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct snd_dma_buffer VAR_7;

 FUNC_1(VAR_3);
 FUNC_2(VAR_2->memhdr, VAR_3, &VAR_5, &VAR_6);

 for (VAR_4 = VAR_5; VAR_4 <= VAR_6; VAR_4++) {
  if (FUNC_5(VAR_2, VAR_1,
       &VAR_7) < 0)
   goto __fail;
  if (!FUNC_3(VAR_2, VAR_7.addr)) {
   FUNC_4(&VAR_7);
   goto __fail;
  }
  VAR_2->page_addr_table[VAR_4] = VAR_7.addr;
  VAR_2->page_ptr_table[VAR_4] = VAR_7.area;
 }
 return 0;

__fail:

 VAR_6 = VAR_4 - 1;
 FUNC_0(VAR_2, VAR_5, VAR_6);

 return -VAR_0;
}
