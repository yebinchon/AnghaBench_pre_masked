
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int ,int,int) ;
 int FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_mod*) ;
 int FUNC_4 (struct rsnd_mod*,int ) ;
 struct rsnd_priv* FUNC_5 (struct rsnd_mod*) ;
 struct device* FUNC_6 (struct rsnd_priv*) ;
 scalar_t__ FUNC_7 (struct rsnd_mod*) ;

__attribute__((used)) static bool FUNC_8(struct rsnd_mod *VAR_2)
{
 struct rsnd_priv *VAR_3 = FUNC_5(VAR_2);
 struct device *VAR_4 = FUNC_6(VAR_3);
 u32 VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 bool VAR_9 = 0;

 VAR_5 = VAR_6 = FUNC_0(FUNC_2(VAR_2));






 if (FUNC_7(VAR_2))
  VAR_5 = VAR_5 & 0xffff;

 VAR_7 = FUNC_4(VAR_2, VAR_0);
 VAR_8 = FUNC_4(VAR_2, VAR_1);
 if ((VAR_7 & VAR_5) || (VAR_8 & VAR_6)) {
  FUNC_1(VAR_4, "%s err status : 0x%08x, 0x%08x\n",
   FUNC_3(VAR_2), VAR_7, VAR_8);

  VAR_9 = 1;
 }

 return VAR_9;
}
