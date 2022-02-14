
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* uint64_t ;
struct hist_entry {int level; TYPE_2__* mem_info; } ;
struct TYPE_3__ {char* phys_addr; } ;
struct TYPE_4__ {TYPE_1__ daddr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,size_t,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_1, char *VAR_2,
        size_t VAR_3, unsigned int VAR_4)
{
 uint64_t VAR_5 = 0;
 size_t VAR_6 = 0;
 size_t VAR_7 = VAR_0 / 4;

 VAR_5 = VAR_1->mem_info->daddr.phys_addr;

 VAR_6 += FUNC_0(VAR_2 + VAR_6, VAR_3 - VAR_6, "[%c] ", VAR_1->level);

 VAR_6 += FUNC_0(VAR_2 + VAR_6, VAR_3 - VAR_6, "%-#.*llx", VAR_7, VAR_5);

 VAR_6 += FUNC_0(VAR_2 + VAR_6, VAR_3 - VAR_6, "%-*s", VAR_4 - VAR_6, "");

 if (VAR_6 > VAR_4)
  VAR_2[VAR_4] = '\0';

 return VAR_4;
}
