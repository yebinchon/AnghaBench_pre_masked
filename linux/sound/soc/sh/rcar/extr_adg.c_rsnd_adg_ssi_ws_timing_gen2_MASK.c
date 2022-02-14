
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 struct rsnd_mod* FUNC_0 (struct rsnd_dai_stream*) ;
 int FUNC_1 (struct rsnd_mod*) ;
 scalar_t__ FUNC_2 (struct rsnd_dai_stream*) ;

__attribute__((used)) static u32 FUNC_3(struct rsnd_dai_stream *VAR_0)
{
 struct rsnd_mod *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = VAR_2;

 if (FUNC_2(VAR_0)) {
  switch (VAR_2) {
  case 1:
  case 2:
  case 9:
   VAR_3 = 0;
   break;
  case 4:
   VAR_3 = 3;
   break;
  case 8:
   VAR_3 = 7;
   break;
  }
 }

 return (0x6 + VAR_3) << 8;
}
