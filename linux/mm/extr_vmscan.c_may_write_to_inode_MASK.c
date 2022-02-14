
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scan_control {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int flags; scalar_t__ backing_dev_info; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct scan_control *VAR_3)
{
 if (VAR_1->flags & VAR_0)
  return 1;
 if (!FUNC_1(VAR_2))
  return 1;
 if (FUNC_0(VAR_2) == VAR_1->backing_dev_info)
  return 1;
 return 0;
}
