
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {int dummy; } ;
struct lola_stream {scalar_t__ frags; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*,int) ;
 int FUNC_2 (struct snd_pcm_substream*,int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
        struct lola_stream *VAR_3, __le32 **VAR_4,
        int VAR_5, int VAR_6)
{
 __le32 *VAR_7 = *VAR_4;

 while (VAR_6 > 0) {
  dma_addr_t VAR_8;
  int VAR_9;

  if (VAR_3->frags >= VAR_1)
   return -VAR_0;

  VAR_8 = FUNC_1(VAR_2, VAR_5);

  VAR_7[0] = FUNC_0((u32)VAR_8);
  VAR_7[1] = FUNC_0(FUNC_3(VAR_8));

  VAR_9 = FUNC_2(VAR_2, VAR_5, VAR_6);
  VAR_7[2] = FUNC_0(VAR_9);



  VAR_6 -= VAR_9;
  VAR_7[3] = VAR_6 ? 0 : FUNC_0(0x01);
  VAR_7 += 4;
  VAR_3->frags++;
  VAR_5 += VAR_9;
 }
 *VAR_4 = VAR_7;
 return VAR_5;
}
