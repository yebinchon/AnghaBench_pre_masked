
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_local_percpu {int events; } ;
struct fprop_global {int events; } ;


 int VAR_0 ;
 int FUNC_0 (struct fprop_global*,struct fprop_local_percpu*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;

void FUNC_3(struct fprop_global *VAR_1, struct fprop_local_percpu *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_2->events, 1, VAR_0);
 FUNC_1(&VAR_1->events, 1);
}
