
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dma {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rsnd_dma*,int ,int,int ) ;
 int FUNC_1 (struct rsnd_dma*,int ) ;
 struct rsnd_dma* FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rsnd_mod *VAR_3,
      struct rsnd_dai_stream *VAR_4,
      struct rsnd_priv *VAR_5)
{
 struct rsnd_dma *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 FUNC_0(VAR_6, 0, VAR_2, VAR_1);

 for (VAR_7 = 0; VAR_7 < 1024; VAR_7++) {
  if (0 == (FUNC_1(VAR_6, VAR_1) & VAR_2))
   return 0;
  FUNC_3(1);
 }

 return -VAR_0;
}
