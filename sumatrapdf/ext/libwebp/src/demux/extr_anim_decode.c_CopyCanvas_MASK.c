
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(const uint8_t* VAR_1, uint8_t* VAR_2,
                      uint32_t VAR_3, uint32_t VAR_4) {
  const uint64_t VAR_5 = (uint64_t)VAR_3 * VAR_4 * VAR_0;
  if (VAR_5 != (size_t)VAR_5) return 0;
  FUNC_0(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));
  FUNC_1(VAR_2, VAR_1, (size_t)VAR_5);
  return 1;
}
