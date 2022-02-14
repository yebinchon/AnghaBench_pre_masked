
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int * ops; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct rsnd_mod*) ;
 struct device* FUNC_2 (struct rsnd_priv*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct rsnd_mod *VAR_1,
        struct rsnd_dai_stream *VAR_2,
        struct rsnd_priv *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_3);
 VAR_1->ops = &VAR_0;

 FUNC_0(VAR_4, "%s fallback to PIO mode\n", FUNC_1(VAR_1));

 return 0;
}
