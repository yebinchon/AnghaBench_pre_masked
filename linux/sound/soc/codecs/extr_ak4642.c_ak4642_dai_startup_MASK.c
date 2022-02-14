
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_14,
         struct snd_soc_dai *VAR_15)
{
 int VAR_16 = VAR_14->stream == VAR_12;
 struct snd_soc_component *VAR_17 = VAR_15->component;

 if (VAR_16) {
  FUNC_3(VAR_17, VAR_3, 0x91);
  FUNC_3(VAR_17, VAR_10, 0x91);
 } else {
  FUNC_2(VAR_17, VAR_11, VAR_7 | VAR_4, VAR_7 | VAR_4);
  FUNC_3(VAR_17, VAR_13, FUNC_1(0x3) | FUNC_0(0x3));
  FUNC_3(VAR_17, VAR_1, VAR_0 | VAR_2);
  FUNC_2(VAR_17, VAR_8, VAR_5, VAR_5);
  FUNC_2(VAR_17, VAR_9, VAR_6, VAR_6);
 }

 return 0;
}
