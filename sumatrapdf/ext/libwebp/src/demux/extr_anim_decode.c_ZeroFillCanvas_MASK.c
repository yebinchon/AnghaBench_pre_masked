
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;

__attribute__((used)) static int FUNC_1(uint8_t* VAR_1, uint32_t VAR_2,
                          uint32_t VAR_3) {
  const uint64_t VAR_4 =
      (uint64_t)VAR_2 * VAR_3 * VAR_0 * sizeof(*VAR_1);
  if (VAR_4 != (size_t)VAR_4) return 0;
  FUNC_0(VAR_1, 0, (size_t)VAR_4);
  return 1;
}
