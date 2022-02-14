
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int slock_t ;


 int VAR_0 ;

void
FUNC_0(volatile slock_t *VAR_1, bool VAR_2)
{
 static int VAR_3 = 0;

 *VAR_1 = ((++VAR_3) % VAR_0) + 1;
}
