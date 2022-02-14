
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_src {int irq; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rsnd_mod*,int ,int,int) ;
 int FUNC_2 (struct rsnd_mod*) ;
 struct rsnd_src* FUNC_3 (struct rsnd_mod*) ;
 int FUNC_4 (struct rsnd_mod*,int ,int) ;
 scalar_t__ FUNC_5 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_6(struct rsnd_mod *VAR_3,
   struct rsnd_dai_stream *VAR_4,
   struct rsnd_priv *VAR_5,
   int VAR_6)
{
 struct rsnd_src *VAR_7 = FUNC_3(VAR_3);
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11 = VAR_7->irq;
 int VAR_12 = FUNC_2(VAR_3);

 VAR_8 =
 VAR_10 = FUNC_0(VAR_12);
 VAR_9 = 0x3300;






 if ((VAR_11 <= 0) || !VAR_6) {
  VAR_8 = 0;
  VAR_9 = 0;
 }






 if (FUNC_5(VAR_3))
  VAR_8 = VAR_8 & 0xffff;

 FUNC_4(VAR_3, VAR_2, VAR_9);
 FUNC_1(VAR_3, VAR_0, VAR_10, VAR_8);
 FUNC_1(VAR_3, VAR_1, VAR_10, VAR_8);

 return 0;
}
