
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_mod {int type; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (struct rsnd_mod*,struct rsnd_dai_stream*,int ) ;
 int FUNC_1 (struct rsnd_dai_stream*,struct rsnd_mod*,struct rsnd_mod**) ;

int FUNC_2(struct rsnd_dai_stream *VAR_0, struct rsnd_mod *VAR_1,
      struct rsnd_mod **VAR_2)
{
 if (!(*VAR_2)) {
  int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

  if (VAR_3 < 0)
   return VAR_3;
 }

 return FUNC_0(*VAR_2, VAR_0, (*VAR_2)->type);
}
