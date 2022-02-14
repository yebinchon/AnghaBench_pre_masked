
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_clock {int rwsem; int zombie; } ;
struct file {struct posix_clock* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct posix_clock *FUNC_2(struct file *VAR_0)
{
 struct posix_clock *VAR_1 = VAR_0->private_data;

 FUNC_0(&VAR_1->rwsem);

 if (!VAR_1->zombie)
  return VAR_1;

 FUNC_1(&VAR_1->rwsem);

 return ((void*)0);
}
