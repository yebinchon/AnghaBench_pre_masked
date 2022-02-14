
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_tscm {int unit; } ;
typedef int reg ;
typedef enum snd_tscm_clock { ____Placeholder_snd_tscm_clock } snd_tscm_clock ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_tscm*,int*) ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_tscm *VAR_7, unsigned int VAR_8,
       enum snd_tscm_clock VAR_9)
{
 u32 VAR_10;
 __be32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_7, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_10 &= VAR_0;

 if (VAR_8 > 0) {
  VAR_10 &= 0x000000ff;

  if ((VAR_8 % 44100) == 0) {
   VAR_10 |= 0x00000100;

   if (VAR_8 / 44100 == 2)
    VAR_10 |= 0x00008000;
  } else if ((VAR_8 % 48000) == 0) {
   VAR_10 |= 0x00000200;

   if (VAR_8 / 48000 == 2)
    VAR_10 |= 0x00008000;
  } else {
   return -VAR_1;
  }
 }

 if (VAR_9 != VAR_2) {
  VAR_10 &= 0x0000ff00;
  VAR_10 |= VAR_9 + 1;
 }

 VAR_11 = FUNC_0(VAR_10);

 VAR_12 = FUNC_2(VAR_7->unit, VAR_3,
     VAR_4 + VAR_5,
     &VAR_11, sizeof(VAR_11), 0);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_10 & 0x00008000)
  VAR_11 = FUNC_0(0x0000001a);
 else
  VAR_11 = FUNC_0(0x0000000d);

 return FUNC_2(VAR_7->unit, VAR_3,
      VAR_4 + VAR_6,
      &VAR_11, sizeof(VAR_11), 0);
}
