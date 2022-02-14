
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hash; } ;
struct batadv_priv {TYPE_1__ dat; } ;


 int FUNC_0 (struct batadv_priv*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct batadv_priv *VAR_0)
{
 if (!VAR_0->dat.hash)
  return;

 FUNC_0(VAR_0, ((void*)0));

 FUNC_1(VAR_0->dat.hash);

 VAR_0->dat.hash = ((void*)0);
}
