
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mt7530_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt7530_priv*,int ) ;
 int FUNC_3 (struct mt7530_priv*,int,int) ;
 int FUNC_4 (struct mt7530_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct mt7530_priv *VAR_8, int VAR_9, u16 VAR_10,
                     u8 VAR_11, u8 VAR_12)
{
 int VAR_13;
 u32 VAR_14;



 VAR_14 = FUNC_2(VAR_8, FUNC_1(VAR_9));
 if (VAR_9 % 2 == 0) {
  VAR_14 &= 0xfff000;
  VAR_14 |= VAR_10;
 } else {
  VAR_14 &= 0xfff;
  VAR_14 |= (VAR_10 << 12);
 }
 FUNC_4(VAR_8, FUNC_1(VAR_9), VAR_14);



 if (VAR_11)
  FUNC_4(VAR_8, VAR_3, VAR_4 |
   VAR_6 | (VAR_11 << 16) |
   VAR_5);
 else
  FUNC_4(VAR_8, VAR_3, 0);


 VAR_14 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  if (VAR_12 & FUNC_0(VAR_13))
   VAR_14 |= VAR_0 << (VAR_13 * 2);
  else
   VAR_14 |= VAR_1 << (VAR_13 * 2);
 }
 FUNC_4(VAR_8, VAR_7, VAR_14);





 FUNC_3(VAR_8, 1, VAR_9);

}
