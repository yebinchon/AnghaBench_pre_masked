
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex_waiter {int dummy; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static inline void FUNC_1(struct rt_mutex_waiter *VAR_0)
{
 FUNC_0(1, "rtmutex deadlock detected\n");
}
