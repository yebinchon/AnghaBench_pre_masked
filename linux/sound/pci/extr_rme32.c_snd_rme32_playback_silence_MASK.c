
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme32 {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,unsigned long) ;
 struct rme32* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
          int VAR_2, unsigned long VAR_3,
          unsigned long VAR_4)
{
 struct rme32 *VAR_5 = FUNC_1(VAR_1);

 FUNC_0(VAR_5->iobase + VAR_0 + VAR_3, 0, VAR_4);
 return 0;
}
