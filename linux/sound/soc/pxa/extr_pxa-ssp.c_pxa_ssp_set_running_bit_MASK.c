
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ssp_device {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ssp_device*,int ) ;
 int FUNC_1 (struct ssp_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_8,
        struct ssp_device *VAR_9, int VAR_10)
{
 uint32_t VAR_11 = FUNC_0(VAR_9, VAR_1);
 uint32_t VAR_12 = FUNC_0(VAR_9, VAR_3);
 uint32_t VAR_13 = FUNC_0(VAR_9, VAR_6);
 uint32_t VAR_14 = FUNC_0(VAR_9, VAR_7);

 if (VAR_10 && (VAR_11 & VAR_2))
  FUNC_1(VAR_9, VAR_1, VAR_11 & ~VAR_2);

 if (VAR_8->stream == VAR_0) {
  if (VAR_10)
   VAR_12 |= VAR_5;
  else
   VAR_12 &= ~VAR_5;
 } else {
  if (VAR_10)
   VAR_12 |= VAR_4;
  else
   VAR_12 &= ~VAR_4;
 }

 FUNC_1(VAR_9, VAR_3, VAR_12);

 if (VAR_10) {
  FUNC_1(VAR_9, VAR_7, VAR_14);
  FUNC_1(VAR_9, VAR_6, VAR_13);
  FUNC_1(VAR_9, VAR_1, VAR_11 | VAR_2);
 }
}
