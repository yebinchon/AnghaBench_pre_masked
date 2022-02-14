
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int mem_cgroup; } ;
struct TYPE_2__ {int flags; int cgroup; } ;
struct mem_cgroup {TYPE_1__ css; } ;
typedef unsigned long ino_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct mem_cgroup* FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 struct mem_cgroup* FUNC_4 (struct page*) ;
 struct mem_cgroup* FUNC_5 (struct mem_cgroup*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

ino_t FUNC_8(struct page *VAR_1)
{
 struct mem_cgroup *VAR_2;
 unsigned long VAR_3 = 0;

 FUNC_6();
 if (FUNC_0(VAR_1) && !FUNC_1(VAR_1))
  VAR_2 = FUNC_4(VAR_1);
 else
  VAR_2 = FUNC_2(VAR_1->mem_cgroup);
 while (VAR_2 && !(VAR_2->css.flags & VAR_0))
  VAR_2 = FUNC_5(VAR_2);
 if (VAR_2)
  VAR_3 = FUNC_3(VAR_2->css.cgroup);
 FUNC_7();
 return VAR_3;
}
