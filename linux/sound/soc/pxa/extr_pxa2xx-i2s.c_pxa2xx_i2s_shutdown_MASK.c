
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_11,
    struct snd_soc_dai *VAR_12)
{
 if (VAR_11->stream == VAR_8) {
  VAR_2 |= VAR_4;
  VAR_5 &= ~VAR_7;
 } else {
  VAR_2 |= VAR_3;
  VAR_5 &= ~VAR_6;
 }

 if ((VAR_2 & (VAR_3 | VAR_4)) == (VAR_3 | VAR_4)) {
  VAR_0 &= ~VAR_1;
  FUNC_1();
  if (VAR_9) {
   FUNC_0(VAR_10);
   VAR_9 = 0;
  }
 }
}
