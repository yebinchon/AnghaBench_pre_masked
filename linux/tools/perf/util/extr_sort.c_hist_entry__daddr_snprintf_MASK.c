
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct symbol {int dummy; } ;
struct map {int dummy; } ;
struct hist_entry {int level; TYPE_1__* mem_info; } ;
struct TYPE_4__ {struct symbol* sym; struct map* map; int addr; } ;
struct TYPE_3__ {TYPE_2__ daddr; } ;


 int FUNC_0 (struct map*,struct symbol*,int ,int ,char*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_0, char *VAR_1,
        size_t VAR_2, unsigned int VAR_3)
{
 uint64_t VAR_4 = 0;
 struct map *VAR_5 = ((void*)0);
 struct symbol *VAR_6 = ((void*)0);

 if (VAR_0->mem_info) {
  VAR_4 = VAR_0->mem_info->daddr.addr;
  VAR_5 = VAR_0->mem_info->daddr.map;
  VAR_6 = VAR_0->mem_info->daddr.sym;
 }
 return FUNC_0(VAR_5, VAR_6, VAR_4, VAR_0->level, VAR_1, VAR_2,
      VAR_3);
}
