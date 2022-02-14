
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {struct rsnd_gen* gen; } ;
struct rsnd_gen {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct rsnd_gen* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct rsnd_priv*) ;
 int FUNC_3 (struct rsnd_priv*) ;
 scalar_t__ FUNC_4 (struct rsnd_priv*) ;
 scalar_t__ FUNC_5 (struct rsnd_priv*) ;
 scalar_t__ FUNC_6 (struct rsnd_priv*) ;
 struct device* FUNC_7 (struct rsnd_priv*) ;

int FUNC_8(struct rsnd_priv *VAR_3)
{
 struct device *VAR_4 = FUNC_7(VAR_3);
 struct rsnd_gen *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_3->gen = VAR_5;

 VAR_6 = -VAR_0;
 if (FUNC_4(VAR_3))
  VAR_6 = FUNC_2(VAR_3);
 else if (FUNC_5(VAR_3) ||
   FUNC_6(VAR_3))
  VAR_6 = FUNC_3(VAR_3);

 if (VAR_6 < 0)
  FUNC_0(VAR_4, "unknown generation R-Car sound device\n");

 return VAR_6;
}
