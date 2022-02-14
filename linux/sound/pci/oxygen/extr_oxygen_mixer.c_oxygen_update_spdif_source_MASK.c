
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int u16 ;
struct oxygen {int pcm_active; unsigned int spdif_pcm_bits; unsigned int spdif_bits; scalar_t__ spdif_playback_enable; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_0 (struct oxygen*,int ) ;
 unsigned int FUNC_1 (struct oxygen*,int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct oxygen*,int ,int) ;
 int FUNC_4 (struct oxygen*,int ,unsigned int) ;

void FUNC_5(struct oxygen *VAR_14)
{
 u32 VAR_15, VAR_16;
 u16 VAR_17, VAR_18;
 unsigned int VAR_19;

 VAR_15 = FUNC_1(VAR_14, VAR_7);
 VAR_17 = FUNC_0(VAR_14, VAR_2);
 if (VAR_14->pcm_active & (1 << VAR_13)) {
  VAR_16 = VAR_15 | VAR_9;
  VAR_18 = (VAR_17 & ~VAR_3)
   | VAR_5;
  VAR_19 = (VAR_15 >> VAR_11)
   & VAR_1;

 } else if ((VAR_14->pcm_active & (1 << VAR_12)) &&
     VAR_14->spdif_playback_enable) {
  VAR_18 = (VAR_17 & ~VAR_3)
   | VAR_4;
  VAR_19 = FUNC_0(VAR_14, VAR_0)
   & VAR_1;
  VAR_16 = (VAR_15 & ~VAR_10) |
   (VAR_19 << VAR_11) |
   VAR_9;
 } else {
  VAR_16 = VAR_15 & ~VAR_9;
  VAR_18 = VAR_17;
  VAR_19 = VAR_6;
 }
 if (VAR_17 != VAR_18) {
  FUNC_4(VAR_14, VAR_7,
          VAR_16 & ~VAR_9);
  FUNC_3(VAR_14, VAR_2, VAR_18);
 }
 if (VAR_16 & VAR_9)
  FUNC_4(VAR_14, VAR_8,
          FUNC_2(VAR_19) |
          ((VAR_14->pcm_active & (1 << VAR_13)) ?
    VAR_14->spdif_pcm_bits : VAR_14->spdif_bits));
 FUNC_4(VAR_14, VAR_7, VAR_16);
}
