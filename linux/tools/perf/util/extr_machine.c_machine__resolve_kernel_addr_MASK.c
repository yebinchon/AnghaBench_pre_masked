
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {char* name; int start; } ;
struct map {unsigned long long (* unmap_ip ) (struct map*,int ) ;TYPE_1__* dso; } ;
struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ short_name; } ;


 scalar_t__ FUNC_0 (struct map*) ;
 struct symbol* FUNC_1 (struct machine*,unsigned long long,struct map**) ;
 unsigned long long FUNC_2 (struct map*,int ) ;

char *FUNC_3(void *VAR_0, unsigned long long *VAR_1, char **VAR_2)
{
 struct machine *VAR_3 = VAR_0;
 struct map *VAR_4;
 struct symbol *VAR_5 = FUNC_1(VAR_3, *VAR_1, &VAR_4);

 if (VAR_5 == ((void*)0))
  return ((void*)0);

 *VAR_2 = FUNC_0(VAR_4) ? (char *)VAR_4->dso->short_name : ((void*)0);
 *VAR_1 = VAR_4->unmap_ip(VAR_4, VAR_5->start);
 return VAR_5->name;
}
