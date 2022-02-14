
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct rsnd_dai* FUNC_1 (struct rsnd_dai_stream*) ;
 int FUNC_2 (struct rsnd_mod*,int ,int,int) ;
 int FUNC_3 (struct rsnd_mod*) ;
 int FUNC_4 (struct rsnd_mod*,int ) ;
 int FUNC_5 (struct rsnd_mod*,int ,int) ;
 int FUNC_6 (struct rsnd_dai*) ;
 scalar_t__ FUNC_7 (struct rsnd_dai_stream*) ;
 int FUNC_8 (struct rsnd_dai_stream*) ;
 int FUNC_9 (struct rsnd_dai_stream*) ;

__attribute__((used)) static int FUNC_10(struct rsnd_mod *VAR_3,
     struct rsnd_dai_stream *VAR_4,
     struct rsnd_priv *VAR_5)
{
 struct rsnd_dai *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7 = FUNC_8(VAR_4);
 int VAR_8 = FUNC_9(VAR_4);
 int VAR_9 = FUNC_3(VAR_3);
 int VAR_10 = FUNC_6(VAR_6);
 u32 VAR_11, VAR_12;
 int VAR_13;


 switch (VAR_9) {
 case 0:
 case 1:
 case 2:
 case 3:
 case 4:
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
   FUNC_5(VAR_3, FUNC_0(VAR_13 * 2), 0xf << (VAR_9 * 4));
  break;
 case 9:
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
   FUNC_5(VAR_3, FUNC_0((VAR_13 * 2) + 1), 0xf << 4);
  break;
 }




 FUNC_2(VAR_3, VAR_0, (1 << VAR_9), !VAR_8 << VAR_9);







 VAR_11 = FUNC_4(VAR_3, VAR_1);
 VAR_12 = FUNC_4(VAR_3, VAR_2);
 if (FUNC_7(VAR_4)) {

  VAR_7 |= (1 << VAR_9);

 } else if (VAR_7) {







  if (VAR_7 & (1 << 4))
   VAR_11 |= (1 << 20);

  if (VAR_7 == 0x0006)
   VAR_11 |= (1 << 4);

  if (VAR_7 == 0x0206)
   VAR_12 |= (1 << 4);
 }


 if (VAR_7 & (1 << 1))
  VAR_11 |= VAR_10 ? 0x2 : 0x1;


 if (VAR_7 & (1 << 2))
  VAR_11 |= VAR_10 ? 0x2 << 2 :
     0x1 << 2;

 if (VAR_7 & (1 << 4))
  VAR_11 |= VAR_10 ? 0x2 << 16 :
     0x1 << 16;

 if (VAR_7 & (1 << 9))
  VAR_12 |= VAR_10 ? 0x2 : 0x1;

 FUNC_2(VAR_3, VAR_1, 0x0013001f, VAR_11);
 FUNC_2(VAR_3, VAR_2, 0x00000017, VAR_12);

 return 0;
}
