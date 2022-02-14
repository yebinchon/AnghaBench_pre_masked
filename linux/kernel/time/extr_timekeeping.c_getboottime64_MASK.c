
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct timekeeper {int offs_boot; int offs_real; } ;
typedef int ktime_t ;
struct TYPE_2__ {struct timekeeper timekeeper; } ;


 int FUNC_0 (int ,int ) ;
 struct timespec64 FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(struct timespec64 *VAR_1)
{
 struct timekeeper *VAR_2 = &VAR_0.timekeeper;
 ktime_t VAR_3 = FUNC_0(VAR_2->offs_real, VAR_2->offs_boot);

 *VAR_1 = FUNC_1(VAR_3);
}
