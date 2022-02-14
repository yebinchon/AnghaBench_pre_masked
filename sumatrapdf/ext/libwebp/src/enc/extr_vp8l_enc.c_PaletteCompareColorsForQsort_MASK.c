
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const void* VAR_0, const void* VAR_1) {
  const uint32_t VAR_2 = FUNC_0((uint8_t*)VAR_0);
  const uint32_t VAR_3 = FUNC_0((uint8_t*)VAR_1);
  FUNC_1(VAR_2 != VAR_3);
  return (VAR_2 < VAR_3) ? -1 : 1;
}
