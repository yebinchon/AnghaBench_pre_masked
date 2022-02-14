
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; } ;
struct TYPE_4__ {int owner; int default_hard; } ;
struct TYPE_6__ {TYPE_1__ mach; int hard; } ;
struct TYPE_5__ {scalar_t__ busy; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__ VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6, struct file *VAR_7)
{
 int VAR_8 = 0;

 FUNC_1(&VAR_2);

 if (VAR_7->f_mode & VAR_0) {
  if (VAR_5.busy)
   VAR_8 = FUNC_4();

  FUNC_5() ;
  FUNC_6();
  VAR_5.busy = 0;
 }

 if (VAR_7->f_mode & VAR_3) {
  VAR_3 = 0 ;
  VAR_4 = 0 ;
  VAR_1.hard = VAR_1.mach.default_hard ;
 }

 FUNC_0(VAR_1.mach.owner);
 FUNC_2(&VAR_2);

 return VAR_8;
}
