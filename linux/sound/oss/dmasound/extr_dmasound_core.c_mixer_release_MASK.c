
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
struct TYPE_5__ {scalar_t__ busy; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 FUNC_1(&VAR_1);
 VAR_2.busy = 0;
 FUNC_0(VAR_0.mach.owner);
 FUNC_2(&VAR_1);
 return 0;
}
