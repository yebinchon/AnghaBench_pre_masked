
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct TYPE_2__ {int type; int rmtp; int compat_rmtp; } ;
struct restart_block {TYPE_1__ nanosleep; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (struct timespec64*,int ) ;
 int FUNC_2 (struct timespec64*,int ) ;

int FUNC_3(struct restart_block *VAR_2, struct timespec64 *VAR_3)
{
 switch(VAR_2->nanosleep.type) {






 case 128:
  if (FUNC_2(VAR_3, VAR_2->nanosleep.rmtp))
   return -VAR_0;
  break;
 default:
  FUNC_0();
 }
 return -VAR_1;
}
