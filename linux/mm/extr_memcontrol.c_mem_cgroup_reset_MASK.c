
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_counter {int failcnt; } ;
struct mem_cgroup {struct page_counter tcpmem; struct page_counter kmem; struct page_counter memsw; struct page_counter memory; } ;
struct kernfs_open_file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int private; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;






 struct mem_cgroup* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct kernfs_open_file*) ;
 int FUNC_5 (struct kernfs_open_file*) ;
 int FUNC_6 (struct page_counter*) ;

__attribute__((used)) static ssize_t FUNC_7(struct kernfs_open_file *VAR_0, char *VAR_1,
    size_t VAR_2, loff_t VAR_3)
{
 struct mem_cgroup *VAR_4 = FUNC_3(FUNC_5(VAR_0));
 struct page_counter *VAR_5;

 switch (FUNC_2(FUNC_4(VAR_0)->private)) {
 case 130:
  VAR_5 = &VAR_4->memory;
  break;
 case 129:
  VAR_5 = &VAR_4->memsw;
  break;
 case 131:
  VAR_5 = &VAR_4->kmem;
  break;
 case 128:
  VAR_5 = &VAR_4->tcpmem;
  break;
 default:
  FUNC_0();
 }

 switch (FUNC_1(FUNC_4(VAR_0)->private)) {
 case 132:
  FUNC_6(VAR_5);
  break;
 case 133:
  VAR_5->failcnt = 0;
  break;
 default:
  FUNC_0();
 }

 return VAR_2;
}
