
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_gen {int * res; } ;
typedef int phys_addr_t ;


 struct rsnd_gen* FUNC_0 (struct rsnd_priv*) ;

phys_addr_t FUNC_1(struct rsnd_priv *VAR_0, int VAR_1)
{
 struct rsnd_gen *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->res[VAR_1];
}
