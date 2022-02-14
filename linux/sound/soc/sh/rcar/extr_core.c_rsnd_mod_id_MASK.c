
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsnd_mod {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* id ) (struct rsnd_mod*) ;} ;


 int FUNC_0 (struct rsnd_mod*) ;
 int FUNC_1 (struct rsnd_mod*) ;

int FUNC_2(struct rsnd_mod *VAR_0)
{
 if ((VAR_0)->ops->id)
  return (VAR_0)->ops->id(VAR_0);

 return FUNC_0(VAR_0);
}
