
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fprop_local_percpu {int events; } ;
struct fprop_global {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fprop_global*,struct fprop_local_percpu*,unsigned long*,unsigned long*) ;
 int FUNC_1 (struct fprop_global*,struct fprop_local_percpu*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct fprop_global *VAR_3,
       struct fprop_local_percpu *VAR_4, int VAR_5)
{
 if (FUNC_4(VAR_5 < VAR_0)) {
  unsigned long VAR_6, VAR_7;

  FUNC_0(VAR_3, VAR_4, &VAR_6, &VAR_7);
  if (VAR_6 >
      (((u64)VAR_7) * VAR_5) >> VAR_1)
   return;
 } else
  FUNC_1(VAR_3, VAR_4);
 FUNC_3(&VAR_4->events, 1, VAR_2);
 FUNC_2(&VAR_3->events, 1);
}
