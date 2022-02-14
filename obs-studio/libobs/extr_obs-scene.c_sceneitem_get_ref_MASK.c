
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long ref; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 scalar_t__ FUNC_0 (long*,long,long) ;

__attribute__((used)) static obs_sceneitem_t *FUNC_1(obs_sceneitem_t *VAR_0)
{
 long VAR_1 = VAR_0->ref;
 while (VAR_1 > 0) {
  if (FUNC_0(&VAR_0->ref, VAR_1, VAR_1 + 1))
   return VAR_0;

  VAR_1 = VAR_0->ref;
 }
 return ((void*)0);
}
