
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map {TYPE_1__* dso; } ;
struct kmap {int dummy; } ;
struct TYPE_2__ {int kernel; } ;



struct kmap *FUNC_0(struct map *VAR_0)
{
 if (!VAR_0->dso || !VAR_0->dso->kernel)
  return ((void*)0);
 return (struct kmap *)(VAR_0 + 1);
}
