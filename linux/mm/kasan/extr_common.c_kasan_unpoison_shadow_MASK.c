
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t FUNC_1 (void const*) ;
 scalar_t__ FUNC_2 (void const*) ;
 int FUNC_3 (void const*,size_t,size_t) ;
 void* FUNC_4 (void const*) ;

void FUNC_5(const void *VAR_2, size_t VAR_3)
{
 u8 VAR_4 = FUNC_1(VAR_2);






 VAR_2 = FUNC_4(VAR_2);

 FUNC_3(VAR_2, VAR_3, VAR_4);

 if (VAR_3 & VAR_1) {
  u8 *VAR_5 = (u8 *)FUNC_2(VAR_2 + VAR_3);

  if (FUNC_0(VAR_0))
   *VAR_5 = VAR_4;
  else
   *VAR_5 = VAR_3 & VAR_1;
 }
}
