
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_global {int sequence; int events; scalar_t__ period; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct fprop_global *VAR_0, gfp_t VAR_1)
{
 int VAR_2;

 VAR_0->period = 0;

 VAR_2 = FUNC_0(&VAR_0->events, 1, VAR_1);
 if (VAR_2)
  return VAR_2;
 FUNC_1(&VAR_0->sequence);
 return 0;
}
