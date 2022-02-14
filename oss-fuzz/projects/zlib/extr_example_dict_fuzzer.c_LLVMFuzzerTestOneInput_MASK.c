
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t const* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t*) ;
 int FUNC_1 (size_t**,size_t*) ;
 int FUNC_2 (size_t*,size_t) ;

int FUNC_3(const uint8_t *VAR_3, size_t VAR_4) {
  size_t VAR_5 = 0;
  uint8_t *VAR_6;


  static size_t VAR_7 = 100 * 1024;

  if (VAR_4 < 1 || VAR_4 > VAR_7)
    return 0;

  VAR_0 = VAR_3;
  VAR_1 = VAR_4;




  VAR_2 = VAR_0[0];
  if (VAR_2 > VAR_1)
    VAR_2 = VAR_1;

  FUNC_1(&VAR_6, &VAR_5);
  FUNC_2(VAR_6, VAR_5);

  FUNC_0(VAR_6);


  return 0;
}
