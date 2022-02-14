
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {struct rsnd_adg* adg; } ;
struct rsnd_adg {int mod; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rsnd_adg* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct rsnd_priv*,struct rsnd_adg*) ;
 int FUNC_2 (struct rsnd_priv*) ;
 int FUNC_3 (struct rsnd_priv*,struct rsnd_adg*) ;
 int FUNC_4 (struct rsnd_priv*,struct rsnd_adg*) ;
 int FUNC_5 (struct rsnd_priv*,int *,int *,int *,int ,int ) ;
 struct device* FUNC_6 (struct rsnd_priv*) ;

int FUNC_7(struct rsnd_priv *VAR_3)
{
 struct rsnd_adg *VAR_4;
 struct device *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 VAR_4 = FUNC_0(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_3, &VAR_4->mod, &VAR_2,
        ((void*)0), 0, 0);
 if (VAR_6)
  return VAR_6;

 FUNC_3(VAR_3, VAR_4);
 FUNC_4(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_4);

 VAR_3->adg = VAR_4;

 FUNC_2(VAR_3);

 return 0;
}
