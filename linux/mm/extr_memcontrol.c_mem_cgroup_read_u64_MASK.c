
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page_counter {int failcnt; int watermark; int max; } ;
struct mem_cgroup {int soft_limit; struct page_counter memsw; struct page_counter memory; struct page_counter tcpmem; struct page_counter kmem; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cftype {int private; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct mem_cgroup* FUNC_3 (struct cgroup_subsys_state*) ;
 int FUNC_4 (struct mem_cgroup*,int) ;
 int FUNC_5 (struct page_counter*) ;

__attribute__((used)) static u64 FUNC_6(struct cgroup_subsys_state *VAR_1,
          struct cftype *VAR_2)
{
 struct mem_cgroup *VAR_3 = FUNC_3(VAR_1);
 struct page_counter *VAR_4;

 switch (FUNC_2(VAR_2->private)) {
 case 130:
  VAR_4 = &VAR_3->memory;
  break;
 case 129:
  VAR_4 = &VAR_3->memsw;
  break;
 case 131:
  VAR_4 = &VAR_3->kmem;
  break;
 case 128:
  VAR_4 = &VAR_3->tcpmem;
  break;
 default:
  FUNC_0();
 }

 switch (FUNC_1(VAR_2->private)) {
 case 132:
  if (VAR_4 == &VAR_3->memory)
   return (u64)FUNC_4(VAR_3, 0) * VAR_0;
  if (VAR_4 == &VAR_3->memsw)
   return (u64)FUNC_4(VAR_3, 1) * VAR_0;
  return (u64)FUNC_5(VAR_4) * VAR_0;
 case 135:
  return (u64)VAR_4->max * VAR_0;
 case 134:
  return (u64)VAR_4->watermark * VAR_0;
 case 136:
  return VAR_4->failcnt;
 case 133:
  return (u64)VAR_3->soft_limit * VAR_0;
 default:
  FUNC_0();
 }
}
