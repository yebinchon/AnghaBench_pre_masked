
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct hist_entry {TYPE_2__* mem_info; } ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ iaddr; } ;



int64_t
FUNC_0(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 uint64_t VAR_2 = 0, VAR_3 = 0;

 if (VAR_0->mem_info)
  VAR_2 = VAR_0->mem_info->iaddr.addr;
 if (VAR_1->mem_info)
  VAR_3 = VAR_1->mem_info->iaddr.addr;

 return (int64_t)(VAR_3 - VAR_2);
}
