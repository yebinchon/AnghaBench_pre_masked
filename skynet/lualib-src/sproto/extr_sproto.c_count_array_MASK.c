
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static int
FUNC_1(const uint8_t * VAR_1) {
 uint32_t VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0;
 VAR_1 += VAR_0;
 while (VAR_2 > 0) {
  uint32_t VAR_4;
  if (VAR_2 < VAR_0)
   return -1;
  VAR_4 = FUNC_0(VAR_1);
  VAR_4 += VAR_0;
  if (VAR_4 > VAR_2)
   return -1;
  ++VAR_3;
  VAR_1 += VAR_4;
  VAR_2 -= VAR_4;
 }

 return VAR_3;
}
