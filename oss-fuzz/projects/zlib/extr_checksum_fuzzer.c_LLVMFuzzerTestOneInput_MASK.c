
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;


 size_t FUNC_0 (size_t,size_t const*,size_t) ;
 scalar_t__ FUNC_1 (size_t,size_t,size_t) ;
 size_t FUNC_2 (size_t,size_t const*,size_t) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (size_t,size_t const*,size_t) ;
 scalar_t__ FUNC_5 (size_t,size_t,size_t) ;
 size_t FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (size_t,size_t,size_t) ;
 size_t FUNC_8 (size_t,size_t const*,size_t) ;

int FUNC_9(const uint8_t *VAR_0, size_t VAR_1) {
  uint32_t VAR_2 = FUNC_4(0L, ((void*)0), 0);
  uint32_t VAR_3 = VAR_2;
  uint32_t VAR_4 = VAR_2;
  uint32_t VAR_5 = FUNC_0(0L, ((void*)0), 0);
  uint32_t VAR_6 = VAR_5;
  uint32_t VAR_7 = VAR_5;

  uint32_t VAR_8 = VAR_0[0];
  uint32_t VAR_9 = 0;
  uint32_t VAR_10;


  static size_t VAR_11 = 1024 * 1024;
  if (VAR_1 < 1 || VAR_1 > VAR_11)
    return 0;


  if (VAR_8 == 0)
    ++VAR_8;


  VAR_10 = FUNC_6(VAR_8);
  for (VAR_9 = 0; VAR_9 + VAR_8 <= VAR_1; VAR_9 += VAR_8) {
    uint32_t VAR_12 = FUNC_8(VAR_2, VAR_0 + VAR_9, VAR_8);
    uint32_t VAR_13 = FUNC_7(VAR_3, VAR_12, VAR_10);
    VAR_3 = FUNC_8(VAR_3, VAR_0 + VAR_9, VAR_8);
    FUNC_3(VAR_3 == VAR_13);
  }
  VAR_3 = FUNC_8(VAR_3, VAR_0 + VAR_9, VAR_1 % VAR_8);

  VAR_4 = FUNC_4(VAR_4, VAR_0, (uint32_t) VAR_1);

  FUNC_3(VAR_3 == VAR_4);
  FUNC_3(FUNC_5(VAR_3, VAR_4, VAR_1) ==
         FUNC_5(VAR_3, VAR_3, VAR_1));


  VAR_10 = FUNC_6(VAR_1);
  FUNC_3(FUNC_7(VAR_3, VAR_4, VAR_10) ==
         FUNC_7(VAR_4, VAR_3, VAR_10));
  FUNC_3(FUNC_5(VAR_3, VAR_4, VAR_1) ==
         FUNC_7(VAR_4, VAR_3, VAR_10));


  for (VAR_9 = 0; VAR_9 + VAR_8 <= VAR_1; VAR_9 += VAR_8)
    VAR_6 = FUNC_2(VAR_6, VAR_0 + VAR_9, VAR_8);
  VAR_6 = FUNC_2(VAR_6, VAR_0 + VAR_9, VAR_1 % VAR_8);

  VAR_7 = FUNC_0(VAR_7, VAR_0, (uint32_t) VAR_1);

  FUNC_3(VAR_6 == VAR_7);
  FUNC_3(FUNC_1(VAR_6, VAR_7, VAR_1) ==
         FUNC_1(VAR_6, VAR_6, VAR_1));


  return 0;
}
