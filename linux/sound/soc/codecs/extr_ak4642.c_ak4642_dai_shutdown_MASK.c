
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
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_7,
          struct snd_soc_dai *VAR_8)
{
 int VAR_9 = VAR_7->stream == VAR_6;
 struct snd_soc_component *VAR_10 = VAR_8->component;

 if (VAR_9) {
 } else {

  FUNC_0(VAR_10, VAR_4, VAR_2, 0);
  FUNC_0(VAR_10, VAR_5, VAR_3, 0);
  FUNC_0(VAR_10, VAR_1, VAR_0, 0);
 }
}
