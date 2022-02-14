
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 scalar_t__ FUNC_0 (struct rsnd_dai_stream*) ;
 struct rsnd_dai* FUNC_1 (struct rsnd_dai_stream*) ;
 int FUNC_2 (struct rsnd_dai*) ;
 int FUNC_3 (struct rsnd_dai_stream*) ;
 int FUNC_4 (struct rsnd_dai_stream*) ;

int FUNC_5(struct rsnd_dai_stream *VAR_0)
{
 struct rsnd_dai *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_0(VAR_0) ?
  FUNC_3(VAR_0) :
  FUNC_4(VAR_0);

 return (VAR_3 > 2) && (VAR_2 > 1);
}
