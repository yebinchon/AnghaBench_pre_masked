
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dmaen {int * chan; } ;
struct rsnd_dma {int mod_to; int mod_from; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 struct rsnd_dmaen* FUNC_2 (struct rsnd_dma*) ;
 int * FUNC_3 (struct rsnd_dai_stream*,int ,int ) ;
 struct rsnd_dma* FUNC_4 (struct rsnd_mod*) ;
 struct device* FUNC_5 (struct rsnd_priv*) ;

__attribute__((used)) static int FUNC_6(struct rsnd_mod *VAR_1,
         struct rsnd_dai_stream *VAR_2,
         struct rsnd_priv *VAR_3)
{
 struct rsnd_dma *VAR_4 = FUNC_4(VAR_1);
 struct rsnd_dmaen *VAR_5 = FUNC_2(VAR_4);
 struct device *VAR_6 = FUNC_5(VAR_3);


 if (VAR_5->chan)
  return 0;






 VAR_5->chan = FUNC_3(VAR_2,
       VAR_4->mod_from,
       VAR_4->mod_to);
 if (FUNC_0(VAR_5->chan)) {
  VAR_5->chan = ((void*)0);
  FUNC_1(VAR_6, "can't get dma channel\n");
  return -VAR_0;
 }

 return 0;
}
