
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rsnd_mod* FUNC_1 (struct rsnd_dai_stream*,int) ;
 int FUNC_2 (struct rsnd_mod*) ;

__attribute__((used)) static u32 FUNC_3(struct rsnd_dai_stream *VAR_3)
{
 struct rsnd_mod *VAR_4;
 enum rsnd_mod_type VAR_5[] = {
  VAR_0,
  VAR_1,
  VAR_2,
 };
 int VAR_6, VAR_7;

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
  VAR_4 = FUNC_1(VAR_3, VAR_5[VAR_6]);
  if (!VAR_4)
   continue;

  VAR_7 |= 1 << FUNC_2(VAR_4);
 }

 return VAR_7;
}
