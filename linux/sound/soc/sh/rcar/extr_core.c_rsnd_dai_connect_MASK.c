
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {struct rsnd_mod** mod; } ;
struct device {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,char*) ;
 scalar_t__ FUNC_1 (struct rsnd_dai_stream*) ;
 int FUNC_2 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_3 (struct rsnd_mod*) ;
 struct device* FUNC_4 (struct rsnd_priv*) ;

int FUNC_5(struct rsnd_mod *VAR_2,
       struct rsnd_dai_stream *VAR_3,
       enum rsnd_mod_type VAR_4)
{
 struct rsnd_priv *VAR_5;
 struct device *VAR_6;

 if (!VAR_2)
  return -VAR_1;

 if (VAR_3->mod[VAR_4] == VAR_2)
  return 0;

 if (VAR_3->mod[VAR_4])
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = FUNC_4(VAR_5);

 VAR_3->mod[VAR_4] = VAR_2;

 FUNC_0(VAR_6, "%s is connected to io (%s)\n",
  FUNC_2(VAR_2),
  FUNC_1(VAR_3) ? "Playback" : "Capture");

 return 0;
}
