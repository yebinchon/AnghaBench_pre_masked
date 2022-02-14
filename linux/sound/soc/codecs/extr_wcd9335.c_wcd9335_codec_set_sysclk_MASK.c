
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {unsigned int mclk_rate; int mclk; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,unsigned int) ;
 struct wcd9335_codec* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_6,
        int VAR_7, int VAR_8,
        unsigned int VAR_9, int VAR_10)
{
 struct wcd9335_codec *VAR_11 = FUNC_1(VAR_6->dev);

 VAR_11->mclk_rate = VAR_9;

 if (VAR_11->mclk_rate == VAR_4)
  FUNC_2(VAR_6,
    VAR_0,
    VAR_3,
    VAR_1);
 else if (VAR_11->mclk_rate == VAR_5)
  FUNC_2(VAR_6,
    VAR_0,
    VAR_3,
    VAR_2);

 return FUNC_0(VAR_11->mclk, VAR_9);
}
