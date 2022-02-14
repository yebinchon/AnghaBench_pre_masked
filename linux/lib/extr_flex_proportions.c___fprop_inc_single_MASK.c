
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_local_single {int events; } ;
struct fprop_global {int events; } ;


 int FUNC_0 (struct fprop_global*,struct fprop_local_single*) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct fprop_global *VAR_0, struct fprop_local_single *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_1->events++;
 FUNC_1(&VAR_0->events, 1);
}
