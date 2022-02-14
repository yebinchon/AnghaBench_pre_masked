
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (int *,size_t,int *,size_t,int) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (size_t) ;
 int const* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_4 (int *) ;

int FUNC_5(const uint8_t *VAR_2, size_t VAR_3) {

  size_t VAR_4 = 100 + 2 * FUNC_3(VAR_3);
  size_t VAR_5 = VAR_3;
  uint8_t *VAR_6, *VAR_7;


  static size_t VAR_8 = 1024 * 1024;

  if (VAR_3 < 1 || VAR_3 > VAR_8)
    return 0;

  VAR_0 = VAR_2;
  VAR_1 = VAR_3;
  VAR_6 = (uint8_t *)FUNC_0(1, VAR_4);
  VAR_7 = (uint8_t *)FUNC_0(1, VAR_5);

  FUNC_1(VAR_6, VAR_4, VAR_7, VAR_5, 1);
  FUNC_1(VAR_6, VAR_4, VAR_7, VAR_5, 3);
  FUNC_1(VAR_6, VAR_4, VAR_7, VAR_5, 6);
  FUNC_1(VAR_6, VAR_4, VAR_7, VAR_5, 7);

  FUNC_2(VAR_6, VAR_4);

  FUNC_4(VAR_6);
  FUNC_4(VAR_7);


  return 0;
}
