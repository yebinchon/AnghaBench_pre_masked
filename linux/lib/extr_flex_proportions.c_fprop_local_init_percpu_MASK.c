
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_local_percpu {int lock; scalar_t__ period; int events; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct fprop_local_percpu *VAR_0, gfp_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->events, 0, VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_0->period = 0;
 FUNC_1(&VAR_0->lock);
 return 0;
}
