
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct callchain_cursor_node {int ip; int srcline; int * sym; TYPE_1__* map; } ;
struct addr_location {char level; int cpumode; TYPE_2__* machine; TYPE_1__* map; int * sym; int addr; int srcline; } ;
struct TYPE_4__ {int kmaps; } ;
struct TYPE_3__ {int * groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;

int FUNC_1(struct addr_location *VAR_6, struct callchain_cursor_node *VAR_7,
   bool VAR_8)
{
 VAR_6->map = VAR_7->map;
 VAR_6->sym = VAR_7->sym;
 VAR_6->srcline = VAR_7->srcline;
 VAR_6->addr = VAR_7->ip;

 if (VAR_6->sym == ((void*)0)) {
  if (VAR_8)
   return 0;
  if (VAR_6->map == ((void*)0))
   goto out;
 }

 if (VAR_6->map->groups == &VAR_6->machine->kmaps) {
  if (FUNC_0(VAR_6->machine)) {
   VAR_6->cpumode = VAR_3;
   VAR_6->level = 'k';
  } else {
   VAR_6->cpumode = VAR_0;
   VAR_6->level = 'g';
  }
 } else {
  if (FUNC_0(VAR_6->machine)) {
   VAR_6->cpumode = VAR_4;
   VAR_6->level = '.';
  } else if (VAR_5) {
   VAR_6->cpumode = VAR_1;
   VAR_6->level = 'u';
  } else {
   VAR_6->cpumode = VAR_2;
   VAR_6->level = 'H';
  }
 }

out:
 return 1;
}
