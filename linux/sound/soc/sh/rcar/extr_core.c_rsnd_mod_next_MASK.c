
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int VAR_0 ;
 struct rsnd_mod* FUNC_0 (struct rsnd_dai_stream*,int) ;

struct rsnd_mod *FUNC_1(int *VAR_1,
          struct rsnd_dai_stream *VAR_2,
          enum rsnd_mod_type *VAR_3,
          int VAR_4)
{
 struct rsnd_mod *VAR_5;
 enum rsnd_mod_type VAR_6;
 int VAR_7 = VAR_3 ? VAR_4 : VAR_0;

 for (; *VAR_1 < VAR_7; (*VAR_1)++) {
  VAR_6 = (VAR_3) ? VAR_3[*VAR_1] : *VAR_1;
  VAR_5 = FUNC_0(VAR_2, VAR_6);
  if (VAR_5)
   return VAR_5;
 }

 return ((void*)0);
}
