
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int * const,int) ;
 int FUNC_2 (int * const,size_t) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint8_t* FUNC_4(uint8_t* const VAR_5, int VAR_6,
                              int VAR_7, uint32_t VAR_8) {
  const size_t VAR_9 = VAR_0 + VAR_4;
  FUNC_3(VAR_6 >= 1 && VAR_7 >= 1);
  FUNC_3(VAR_6 <= VAR_1 && VAR_7 <= VAR_1);
  FUNC_3(VAR_6 * (uint64_t)VAR_7 < VAR_2);
  FUNC_2(VAR_5, FUNC_0('V', 'P', '8', 'X'));
  FUNC_2(VAR_5 + VAR_3, VAR_4);
  FUNC_2(VAR_5 + VAR_0, VAR_8);
  FUNC_1(VAR_5 + VAR_0 + 4, VAR_6 - 1);
  FUNC_1(VAR_5 + VAR_0 + 7, VAR_7 - 1);
  return VAR_5 + VAR_9;
}
