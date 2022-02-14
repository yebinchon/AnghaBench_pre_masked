
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;
struct kernfs_open_file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct mem_cgroup*) ;
 struct mem_cgroup* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mem_cgroup*) ;
 int FUNC_3 (struct kernfs_open_file*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kernfs_open_file *VAR_1,
         char *VAR_2, size_t VAR_3,
         loff_t VAR_4)
{
 struct mem_cgroup *VAR_5 = FUNC_1(FUNC_3(VAR_1));

 if (FUNC_2(VAR_5))
  return -VAR_0;
 return FUNC_0(VAR_5) ?: VAR_3;
}
