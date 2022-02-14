
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct snd_motu *VAR_10,
          enum snd_motu_clock_source *VAR_11)
{
 __be32 VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_10, VAR_8, &VAR_12,
     sizeof(VAR_12));
 if (VAR_14 < 0)
  return VAR_14;

 VAR_13 = FUNC_0(VAR_12) & VAR_7;
 if (VAR_13 > 5)
  return -VAR_0;


 VAR_14 = FUNC_1(VAR_10, VAR_9, &VAR_12,
     sizeof(VAR_12));
 if (VAR_14 < 0)
  return VAR_14;

 switch (VAR_13) {
 case 0:
  *VAR_11 = VAR_3;
  break;
 case 1:
  if (FUNC_0(VAR_12) & 0x00000200)
   *VAR_11 = VAR_5;
  else
   *VAR_11 = VAR_2;
  break;
 case 2:
  *VAR_11 = VAR_4;
  break;
 case 4:
  *VAR_11 = VAR_6;
  break;
 case 5:
  *VAR_11 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
