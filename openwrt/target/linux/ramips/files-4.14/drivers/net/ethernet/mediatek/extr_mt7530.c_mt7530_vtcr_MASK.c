
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7530_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mt7530_priv*,int ) ;
 int FUNC_2 (struct mt7530_priv*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct mt7530_priv *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_1, VAR_0, FUNC_0(31) | (VAR_2 << 12) | VAR_3);

 for (VAR_4 = 0; VAR_4 < 20; VAR_4++) {
  u32 VAR_5 = FUNC_1(VAR_1, VAR_0);

  if ((VAR_5 & FUNC_0(31)) == 0)
   break;

  FUNC_4(1000);
 }
 if (VAR_4 == 20)
  FUNC_3("mt7530: vtcr timeout\n");
}
