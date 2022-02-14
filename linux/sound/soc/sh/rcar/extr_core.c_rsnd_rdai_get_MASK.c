
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {struct rsnd_dai* rdai; } ;
struct rsnd_dai {int dummy; } ;


 int FUNC_0 (struct rsnd_priv*) ;

struct rsnd_dai *FUNC_1(struct rsnd_priv *VAR_0, int VAR_1)
{
 if ((VAR_1 < 0) || (VAR_1 >= FUNC_0(VAR_0)))
  return ((void*)0);

 return VAR_0->rdai + VAR_1;
}
