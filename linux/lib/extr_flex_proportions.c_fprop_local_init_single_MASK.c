
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_local_single {int lock; scalar_t__ period; scalar_t__ events; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct fprop_local_single *VAR_0)
{
 VAR_0->events = 0;
 VAR_0->period = 0;
 FUNC_0(&VAR_0->lock);
 return 0;
}
