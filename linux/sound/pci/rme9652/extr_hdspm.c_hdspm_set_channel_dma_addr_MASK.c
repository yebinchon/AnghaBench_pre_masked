
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdspm {int dummy; } ;


 int FUNC_0 (struct hdspm*,unsigned int,int ) ;
 int FUNC_1 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static void FUNC_2(struct hdspm *VAR_0,
           struct snd_pcm_substream *VAR_1,
           unsigned int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_3 * 16; VAR_4 < VAR_3 * 16 + 16; VAR_4++)
  FUNC_0(VAR_0, VAR_2 + 4 * VAR_4,
       FUNC_1(VAR_1, 4096 * VAR_4));
}
