
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int SamplerRandomState ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint32
FUNC_3(uint32 VAR_0, SamplerRandomState VAR_1)
{
 uint32 VAR_2;


 if (VAR_0 <= 1)
  return 1;






 do
 {
  FUNC_0();
  VAR_2 = (uint32) (FUNC_2(VAR_1) * VAR_0);
 } while (VAR_2 == 0 || FUNC_1(VAR_2, VAR_0) > 1);

 return VAR_2;
}
