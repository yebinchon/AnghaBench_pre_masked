
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssi {scalar_t__ wsr; scalar_t__ cr_mode; scalar_t__ cr_own; int usrcnt; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct rsnd_mod*) ;
 int FUNC_2 (struct rsnd_mod*) ;
 struct rsnd_ssi* FUNC_3 (struct rsnd_mod*) ;
 struct device* FUNC_4 (struct rsnd_priv*) ;
 int FUNC_5 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_6 (struct rsnd_mod*,struct rsnd_dai_stream*) ;

__attribute__((used)) static int FUNC_7(struct rsnd_mod *VAR_1,
    struct rsnd_dai_stream *VAR_2,
    struct rsnd_priv *VAR_3)
{
 struct rsnd_ssi *VAR_4 = FUNC_3(VAR_1);
 struct device *VAR_5 = FUNC_4(VAR_3);

 if (!FUNC_5(VAR_1, VAR_2))
  return 0;

 if (!VAR_4->usrcnt) {
  FUNC_0(VAR_5, "%s usrcnt error\n", FUNC_1(VAR_1));
  return -VAR_0;
 }

 FUNC_6(VAR_1, VAR_2);

 FUNC_2(VAR_1);

 VAR_4->usrcnt--;

 if (!VAR_4->usrcnt) {
  VAR_4->cr_own = 0;
  VAR_4->cr_mode = 0;
  VAR_4->wsr = 0;
 }

 return 0;
}
