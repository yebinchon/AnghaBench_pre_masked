
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_dma_buffer {int dummy; } ;
struct hdac_stream {scalar_t__ frags; } ;
struct hdac_bus {scalar_t__ align_bdle_4k; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct snd_dma_buffer*,int) ;
 int FUNC_2 (struct snd_dma_buffer*,int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hdac_bus *VAR_2,
        struct snd_dma_buffer *VAR_3,
        struct hdac_stream *VAR_4, __le32 **VAR_5,
        int VAR_6, int VAR_7, int VAR_8)
{
 __le32 *VAR_9 = *VAR_5;

 while (VAR_7 > 0) {
  dma_addr_t VAR_10;
  int VAR_11;

  if (VAR_4->frags >= VAR_0)
   return -VAR_1;

  VAR_10 = FUNC_1(VAR_3, VAR_6);

  VAR_9[0] = FUNC_0((u32)VAR_10);
  VAR_9[1] = FUNC_0(FUNC_3(VAR_10));

  VAR_11 = FUNC_2(VAR_3, VAR_6, VAR_7);

  if (VAR_2->align_bdle_4k) {
   u32 VAR_12 = 0x1000 - (VAR_6 & 0xfff);

   if (VAR_11 > VAR_12)
    VAR_11 = VAR_12;
  }
  VAR_9[2] = FUNC_0(VAR_11);



  VAR_7 -= VAR_11;
  VAR_9[3] = (VAR_7 || !VAR_8) ? 0 : FUNC_0(0x01);
  VAR_9 += 4;
  VAR_4->frags++;
  VAR_6 += VAR_11;
 }
 *VAR_5 = VAR_9;
 return VAR_6;
}
