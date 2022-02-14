
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int registered; int persistent; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rfkill*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct rfkill *VAR_0, bool VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(!VAR_0);
 FUNC_0(VAR_0->registered);

 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_1(VAR_0, VAR_1);
 VAR_0->persistent = 1;
 FUNC_3(&VAR_0->lock, VAR_2);
}
