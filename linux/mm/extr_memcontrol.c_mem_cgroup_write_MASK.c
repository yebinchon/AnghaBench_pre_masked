
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_cgroup {unsigned long soft_limit; } ;
struct kernfs_open_file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;






 struct mem_cgroup* FUNC_2 (int ) ;
 int FUNC_3 (struct mem_cgroup*) ;
 int FUNC_4 (struct mem_cgroup*,unsigned long,int) ;
 int FUNC_5 (struct mem_cgroup*,unsigned long) ;
 int FUNC_6 (struct mem_cgroup*,unsigned long) ;
 TYPE_1__* FUNC_7 (struct kernfs_open_file*) ;
 int FUNC_8 (struct kernfs_open_file*) ;
 int FUNC_9 (char*,char*,unsigned long*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static ssize_t FUNC_12(struct kernfs_open_file *VAR_1,
    char *VAR_2, size_t VAR_3, loff_t VAR_4)
{
 struct mem_cgroup *VAR_5 = FUNC_2(FUNC_8(VAR_1));
 unsigned long VAR_6;
 int VAR_7;

 VAR_2 = FUNC_11(VAR_2);
 VAR_7 = FUNC_9(VAR_2, "-1", &VAR_6);
 if (VAR_7)
  return VAR_7;

 switch (FUNC_0(FUNC_7(VAR_1)->private)) {
 case 133:
  if (FUNC_3(VAR_5)) {
   VAR_7 = -VAR_0;
   break;
  }
  switch (FUNC_1(FUNC_7(VAR_1)->private)) {
  case 130:
   VAR_7 = FUNC_4(VAR_5, VAR_6, 0);
   break;
  case 129:
   VAR_7 = FUNC_4(VAR_5, VAR_6, 1);
   break;
  case 131:
   FUNC_10("kmem.limit_in_bytes is deprecated and will be removed. "
         "Please report your usecase to linux-mm@kvack.org if you "
         "depend on this functionality.\n");
   VAR_7 = FUNC_5(VAR_5, VAR_6);
   break;
  case 128:
   VAR_7 = FUNC_6(VAR_5, VAR_6);
   break;
  }
  break;
 case 132:
  VAR_5->soft_limit = VAR_6;
  VAR_7 = 0;
  break;
 }
 return VAR_7 ?: VAR_3;
}
