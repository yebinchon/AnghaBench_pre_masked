
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_global {int period; int sequence; int events; } ;
typedef int s64 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

bool FUNC_6(struct fprop_global *VAR_0, int VAR_1)
{
 s64 VAR_2;
 unsigned long VAR_3;

 FUNC_1(VAR_3);
 VAR_2 = FUNC_3(&VAR_0->events);



 if (VAR_2 <= 1) {
  FUNC_0(VAR_3);
  return 0;
 }
 FUNC_4(&VAR_0->sequence);
 if (VAR_1 < 64)
  VAR_2 -= VAR_2 >> VAR_1;

 FUNC_2(&VAR_0->events, -VAR_2);
 VAR_0->period += VAR_1;
 FUNC_5(&VAR_0->sequence);
 FUNC_0(VAR_3);

 return 1;
}
