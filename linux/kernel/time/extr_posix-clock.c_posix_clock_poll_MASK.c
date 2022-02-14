
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* poll ) (struct posix_clock*,struct file*,int *) ;} ;
struct posix_clock {TYPE_1__ ops; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 struct posix_clock* FUNC_0 (struct file*) ;
 int FUNC_1 (struct posix_clock*) ;
 int FUNC_2 (struct posix_clock*,struct file*,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_1, poll_table *VAR_2)
{
 struct posix_clock *VAR_3 = FUNC_0(VAR_1);
 __poll_t VAR_4 = 0;

 if (!VAR_3)
  return VAR_0;

 if (VAR_3->ops.poll)
  VAR_4 = VAR_3->ops.poll(VAR_3, VAR_1, VAR_2);

 FUNC_1(VAR_3);

 return VAR_4;
}
