
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map {int dummy; } ;
struct hist_entry {TYPE_2__* mem_info; } ;
struct TYPE_3__ {struct map* map; } ;
struct TYPE_4__ {TYPE_1__ daddr; } ;


 int FUNC_0 (struct map*,char*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_0, char *VAR_1,
        size_t VAR_2, unsigned int VAR_3)
{
 struct map *VAR_4 = ((void*)0);

 if (VAR_0->mem_info)
  VAR_4 = VAR_0->mem_info->daddr.map;

 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
