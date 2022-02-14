
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int cgroup; } ;
struct TYPE_4__ {int failcnt; scalar_t__ max; } ;
struct mem_cgroup {TYPE_1__ css; TYPE_2__ kmem; TYPE_2__ memsw; TYPE_2__ swap; TYPE_2__ memory; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 char* FUNC_3 (struct mem_cgroup*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;

void FUNC_8(struct mem_cgroup *VAR_1)
{
 char *VAR_2;

 FUNC_7("memory: usage %llukB, limit %llukB, failcnt %lu\n",
  FUNC_0((u64)FUNC_4(&VAR_1->memory)),
  FUNC_0((u64)VAR_1->memory.max), VAR_1->memory.failcnt);
 if (FUNC_1(VAR_0))
  FUNC_7("swap: usage %llukB, limit %llukB, failcnt %lu\n",
   FUNC_0((u64)FUNC_4(&VAR_1->swap)),
   FUNC_0((u64)VAR_1->swap.max), VAR_1->swap.failcnt);
 else {
  FUNC_7("memory+swap: usage %llukB, limit %llukB, failcnt %lu\n",
   FUNC_0((u64)FUNC_4(&VAR_1->memsw)),
   FUNC_0((u64)VAR_1->memsw.max), VAR_1->memsw.failcnt);
  FUNC_7("kmem: usage %llukB, limit %llukB, failcnt %lu\n",
   FUNC_0((u64)FUNC_4(&VAR_1->kmem)),
   FUNC_0((u64)VAR_1->kmem.max), VAR_1->kmem.failcnt);
 }

 FUNC_7("Memory cgroup stats for ");
 FUNC_6(VAR_1->css.cgroup);
 FUNC_5(":");
 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return;
 FUNC_7("%s", VAR_2);
 FUNC_2(VAR_2);
}
