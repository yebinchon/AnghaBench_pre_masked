
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct rsnd_priv*,unsigned int) ;
 struct rsnd_priv* FUNC_2 (struct rsnd_dai*) ;
 int FUNC_3 (struct rsnd_dai*) ;

unsigned int FUNC_4(struct rsnd_dai *VAR_0,
         int VAR_1, int VAR_2, int *VAR_3)
{
 struct rsnd_priv *VAR_4 = FUNC_2(VAR_0);
 int VAR_5[] = {
  1, 2, 4, 8, 16, 6, 12,
 };
 int VAR_6, VAR_7;
 unsigned int VAR_8;
 int VAR_9 = FUNC_3(VAR_0);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {







  if (VAR_6 == 0)
   continue;

  VAR_8 = VAR_9 * VAR_1 * VAR_2 * VAR_5[VAR_6];

  VAR_7 = FUNC_1(VAR_4, VAR_8);
  if (VAR_7 < 0)
   continue;

  if (VAR_3)
   *VAR_3 = VAR_6;

  return VAR_8;
 }

 return 0;
}
