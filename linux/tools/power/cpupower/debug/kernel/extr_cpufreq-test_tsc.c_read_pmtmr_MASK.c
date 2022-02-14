
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static u32 FUNC_1(void)
{
 u32 VAR_1=0,VAR_2=0,VAR_3=0;





 do {
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = FUNC_0(VAR_0);
  VAR_3 = FUNC_0(VAR_0);
 } while ((VAR_1 > VAR_2 && VAR_1 < VAR_3) || (VAR_2 > VAR_3 && VAR_2 < VAR_1)
   || (VAR_3 > VAR_1 && VAR_3 < VAR_2));


 return (VAR_2 & 0xFFFFFF);
}
