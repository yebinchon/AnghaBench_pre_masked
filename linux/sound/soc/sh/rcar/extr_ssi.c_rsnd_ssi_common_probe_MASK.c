
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssi {int irq; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ,struct rsnd_mod*) ;
 int FUNC_2 (struct rsnd_ssi*,int ) ;
 int FUNC_3 (struct rsnd_ssi*,int ) ;
 struct rsnd_ssi* FUNC_4 (struct rsnd_mod*) ;
 struct device* FUNC_5 (struct rsnd_priv*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct rsnd_mod*,struct rsnd_dai_stream*) ;

__attribute__((used)) static int FUNC_7(struct rsnd_mod *VAR_3,
     struct rsnd_dai_stream *VAR_4,
     struct rsnd_priv *VAR_5)
{
 struct device *VAR_6 = FUNC_5(VAR_5);
 struct rsnd_ssi *VAR_7 = FUNC_4(VAR_3);
 int VAR_8 = 0;





 if (FUNC_6(VAR_3, VAR_4))
  return 0;
 if (!FUNC_2(VAR_7, VAR_1)) {
  VAR_8 = FUNC_1(VAR_7->irq,
      VAR_2,
      VAR_0,
      FUNC_0(VAR_6), VAR_3);

  FUNC_3(VAR_7, VAR_1);
 }

 return VAR_8;
}
