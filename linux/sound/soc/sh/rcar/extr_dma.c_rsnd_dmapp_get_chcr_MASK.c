
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (struct rsnd_dai_stream*,struct rsnd_mod*) ;

__attribute__((used)) static u32 FUNC_1(struct rsnd_dai_stream *VAR_0,
          struct rsnd_mod *VAR_1,
          struct rsnd_mod *VAR_2)
{
 return (FUNC_0(VAR_0, VAR_1) << 24) +
  (FUNC_0(VAR_0, VAR_2) << 16);
}
