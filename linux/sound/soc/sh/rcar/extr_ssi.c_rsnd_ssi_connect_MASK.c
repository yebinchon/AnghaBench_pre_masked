
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rsnd_mod*,struct rsnd_dai_stream*,int) ;
 int FUNC_2 (struct rsnd_dai_stream*,int) ;
 struct rsnd_dai* FUNC_3 (struct rsnd_dai_stream*) ;
 int FUNC_4 (struct rsnd_dai*,int) ;
 int FUNC_5 (struct rsnd_dai*,int) ;

__attribute__((used)) static void FUNC_6(struct rsnd_mod *VAR_4,
        struct rsnd_dai_stream *VAR_5)
{
 struct rsnd_dai *VAR_6 = FUNC_3(VAR_5);
 enum rsnd_mod_type VAR_7[] = {
  VAR_0,
  VAR_1,
  VAR_2,
  VAR_3,
 };
 enum rsnd_mod_type VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7); VAR_9++) {
  VAR_8 = VAR_7[VAR_9];
  if (!FUNC_2(VAR_5, VAR_8)) {
   FUNC_1(VAR_4, VAR_5, VAR_8);
   FUNC_4(VAR_6, (VAR_9 + 1) * 2);
   FUNC_5(VAR_6, (VAR_9 + 1));
   return;
  }
 }
}
