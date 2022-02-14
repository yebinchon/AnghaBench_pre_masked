
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT32 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;

void FUNC_2(INT32 VAR_1, INT32 VAR_2)
{
 if(FUNC_0(VAR_1) && FUNC_1(VAR_2))
 {
  VAR_0 &= ~(1 << VAR_1);
  VAR_0 |= (VAR_2 << VAR_1);
 }
}
