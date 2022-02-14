
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_motu {int dummy; } ;
typedef int reg ;
typedef enum snd_motu_clock_source { ____Placeholder_snd_motu_clock_source } snd_motu_clock_source ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct snd_motu *VAR_13,
          enum snd_motu_clock_source *VAR_14)
{
 __be32 VAR_15;
 u32 VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_1(VAR_13, VAR_9, &VAR_15,
     sizeof(VAR_15));
 if (VAR_18 < 0)
  return VAR_18;
 VAR_16 = FUNC_0(VAR_15);

 VAR_17 = VAR_16 & VAR_8;
 if (VAR_17 == 0x00) {
  *VAR_14 = VAR_2;
 } else if (VAR_17 == 0x01) {
  *VAR_14 = VAR_7;
 } else if (VAR_17 == 0x10) {
  *VAR_14 = VAR_3;
 } else if (VAR_17 == 0x18 || VAR_17 == 0x19) {
  VAR_18 = FUNC_1(VAR_13, VAR_12,
      &VAR_15, sizeof(VAR_15));
  if (VAR_18 < 0)
   return VAR_18;
  VAR_16 = FUNC_0(VAR_15);

  if (VAR_17 == 0x18) {
   if (VAR_16 & VAR_10)
    *VAR_14 = VAR_4;
   else
    *VAR_14 = VAR_0;
  } else {
   if (VAR_16 & VAR_11)
    *VAR_14 = VAR_5;
   else
    *VAR_14 = VAR_1;
  }
 } else {
  *VAR_14 = VAR_6;
 }

 return 0;
}
