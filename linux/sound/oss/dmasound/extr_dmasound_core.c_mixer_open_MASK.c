
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int owner; } ;
struct TYPE_6__ {TYPE_1__ mach; } ;
struct TYPE_5__ {int busy; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{
 FUNC_0(&VAR_2);
 if (!FUNC_2(VAR_1.mach.owner)) {
  FUNC_1(&VAR_2);
  return -VAR_0;
 }
 VAR_3.busy = 1;
 FUNC_1(&VAR_2);
 return 0;
}
