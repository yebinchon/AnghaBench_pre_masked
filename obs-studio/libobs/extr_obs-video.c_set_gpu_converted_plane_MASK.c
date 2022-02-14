
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;


 int FUNC_0 (int *,int const*,size_t) ;

__attribute__((used)) static const uint8_t *FUNC_1(uint32_t VAR_0, uint32_t VAR_1,
           uint32_t VAR_2,
           uint32_t VAR_3,
           const uint8_t *VAR_4, uint8_t *VAR_5)
{
 if ((VAR_0 == VAR_2) && (VAR_0 == VAR_3)) {
  size_t VAR_6 = VAR_0 * VAR_1;
  FUNC_0(VAR_5, VAR_4, VAR_6);
  VAR_4 += VAR_6;
 } else {
  for (size_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   FUNC_0(VAR_5, VAR_4, VAR_0);
   VAR_5 += VAR_3;
   VAR_4 += VAR_2;
  }
 }

 return VAR_4;
}
