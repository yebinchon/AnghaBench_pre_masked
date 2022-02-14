
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_ctu {int * sv; int pass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 struct rsnd_ctu* FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_mod*,int ,int) ;
 int FUNC_4 (struct rsnd_dai_stream*) ;

__attribute__((used)) static void FUNC_5(struct rsnd_dai_stream *VAR_5,
          struct rsnd_mod *VAR_6)
{
 struct rsnd_ctu *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  u32 VAR_12 = FUNC_1(VAR_7->pass, VAR_10);

  VAR_8 |= VAR_12 << (28 - (VAR_10 * 4));

  if ((VAR_12 > 0x8) && (VAR_9 < (VAR_12 - 0x8)))
   VAR_9 = VAR_12 - 0x8;
 }

 FUNC_3(VAR_6, VAR_2, 1);

 FUNC_3(VAR_6, VAR_0, FUNC_4(VAR_5));

 FUNC_3(VAR_6, VAR_1, VAR_8);

 FUNC_3(VAR_6, VAR_3, VAR_9);

 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {

  if (VAR_10 >= VAR_9)
   break;

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
   FUNC_3(VAR_6, FUNC_0(VAR_10, VAR_11), FUNC_1(VAR_7->sv[VAR_10], VAR_11));
 }

 FUNC_3(VAR_6, VAR_2, 0);
}
