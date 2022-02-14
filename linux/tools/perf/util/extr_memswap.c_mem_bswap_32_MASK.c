
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ) ;

void FUNC_1(void *VAR_0, int VAR_1)
{
 u32 *VAR_2 = VAR_0;
 while (VAR_1 > 0) {
  *VAR_2 = FUNC_0(*VAR_2);
  VAR_1 -= sizeof(u32);
  ++VAR_2;
 }
}
