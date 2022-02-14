
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 struct rsnd_mod* FUNC_0 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_1 (struct rsnd_dai_stream*) ;
 int FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_dai_stream*) ;

__attribute__((used)) static u32 FUNC_4(struct rsnd_dai_stream *VAR_0)
{
 struct rsnd_mod *VAR_1 = FUNC_0(VAR_0);
 struct rsnd_mod *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3;

 VAR_3 = FUNC_3(VAR_0) |
  1 << FUNC_2(VAR_1);

 if (VAR_2)
  VAR_3 |= 1 << FUNC_2(VAR_2);

 return VAR_3;
}
