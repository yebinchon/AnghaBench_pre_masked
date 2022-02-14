
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rsnd_dai_stream*) ;
 int FUNC_1 (struct rsnd_mod*,int ,int) ;
 int FUNC_2 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_3(struct rsnd_mod *VAR_1,
     struct rsnd_dai_stream *VAR_2,
     struct rsnd_priv *VAR_3)
{
 u32 VAR_4;






 VAR_4 = (FUNC_0(VAR_2) && !FUNC_2(VAR_1)) ?
  0x01 : 0x11;

 FUNC_1(VAR_1, VAR_0, VAR_4);

 return 0;
}
