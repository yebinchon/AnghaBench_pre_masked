
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_src {int irq; int dma; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int,int ,int ,int ,struct rsnd_mod*) ;
 int FUNC_2 (struct rsnd_dai_stream*,struct rsnd_mod*,int *) ;
 struct rsnd_src* FUNC_3 (struct rsnd_mod*) ;
 struct device* FUNC_4 (struct rsnd_priv*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct rsnd_mod *VAR_2,
      struct rsnd_dai_stream *VAR_3,
      struct rsnd_priv *VAR_4)
{
 struct rsnd_src *VAR_5 = FUNC_3(VAR_2);
 struct device *VAR_6 = FUNC_4(VAR_4);
 int VAR_7 = VAR_5->irq;
 int VAR_8;

 if (VAR_7 > 0) {





  VAR_8 = FUNC_1(VAR_6, VAR_7,
           VAR_1,
           VAR_0,
           FUNC_0(VAR_6), VAR_2);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_2, &VAR_5->dma);

 return VAR_8;
}
