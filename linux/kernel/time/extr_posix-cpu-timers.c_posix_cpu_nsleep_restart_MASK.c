
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct TYPE_2__ {int expires; int clockid; } ;
struct restart_block {TYPE_1__ nanosleep; } ;
typedef int clockid_t ;


 int VAR_0 ;
 long FUNC_0 (int ,int ,struct timespec64*) ;
 struct timespec64 FUNC_1 (int ) ;

__attribute__((used)) static long FUNC_2(struct restart_block *VAR_1)
{
 clockid_t VAR_2 = VAR_1->nanosleep.clockid;
 struct timespec64 VAR_3;

 VAR_3 = FUNC_1(VAR_1->nanosleep.expires);

 return FUNC_0(VAR_2, VAR_0, &VAR_3);
}
