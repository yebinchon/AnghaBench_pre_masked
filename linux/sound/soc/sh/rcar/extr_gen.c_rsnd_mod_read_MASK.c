
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_gen {int * regs; } ;
struct device {int dummy; } ;
typedef enum rsnd_reg { ____Placeholder_rsnd_reg } rsnd_reg ;


 int FUNC_0 (struct device*,char*,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct rsnd_priv*,struct rsnd_gen*,int) ;
 int FUNC_3 (struct rsnd_mod*) ;
 int FUNC_4 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_5 (struct rsnd_mod*) ;
 struct device* FUNC_6 (struct rsnd_priv*) ;
 struct rsnd_gen* FUNC_7 (struct rsnd_priv*) ;
 int FUNC_8 (struct rsnd_gen*,int) ;

u32 FUNC_9(struct rsnd_mod *VAR_0, enum rsnd_reg VAR_1)
{
 struct rsnd_priv *VAR_2 = FUNC_5(VAR_0);
 struct device *VAR_3 = FUNC_6(VAR_2);
 struct rsnd_gen *VAR_4 = FUNC_7(VAR_2);
 u32 VAR_5;

 if (!FUNC_2(VAR_2, VAR_4, VAR_1))
  return 0;

 FUNC_1(VAR_4->regs[VAR_1], FUNC_3(VAR_0), &VAR_5);

 FUNC_0(VAR_3, "r %s - %-18s (%4d) : %08x\n",
  FUNC_4(VAR_0),
  FUNC_8(VAR_4, VAR_1), VAR_1, VAR_5);

 return VAR_5;
}
