
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirty_throttle_control {unsigned long dirty; unsigned long avail; } ;


 struct dirty_throttle_control* FUNC_0 (struct dirty_throttle_control*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct dirty_throttle_control *VAR_0,
       unsigned long VAR_1, unsigned long VAR_2)
{
 struct dirty_throttle_control *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4 = VAR_1 - FUNC_1(VAR_1, VAR_0->dirty);
 unsigned long VAR_5 = VAR_3->avail - FUNC_1(VAR_3->avail, VAR_3->dirty);
 unsigned long VAR_6 = VAR_5 - FUNC_1(VAR_5, VAR_4);

 VAR_0->avail = VAR_1 + FUNC_1(VAR_2, VAR_6);
}
