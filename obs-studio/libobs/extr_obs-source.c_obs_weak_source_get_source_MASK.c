
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * source; int ref; } ;
typedef TYPE_1__ obs_weak_source_t ;
typedef int obs_source_t ;


 scalar_t__ FUNC_0 (int *) ;

obs_source_t *FUNC_1(obs_weak_source_t *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 if (FUNC_0(&VAR_0->ref))
  return VAR_0->source;

 return ((void*)0);
}
