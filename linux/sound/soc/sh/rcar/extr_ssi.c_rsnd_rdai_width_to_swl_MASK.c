
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_dai {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct device* FUNC_1 (struct rsnd_priv*) ;
 struct rsnd_priv* FUNC_2 (struct rsnd_dai*) ;
 int FUNC_3 (struct rsnd_dai*) ;

__attribute__((used)) static u32 FUNC_4(struct rsnd_dai *VAR_3)
{
 struct rsnd_priv *VAR_4 = FUNC_2(VAR_3);
 struct device *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = FUNC_3(VAR_3);

 switch (VAR_6) {
 case 32: return VAR_2;
 case 24: return VAR_1;
 case 16: return VAR_0;
 }

 FUNC_0(VAR_5, "unsupported slot width value: %d\n", VAR_6);
 return 0;
}
