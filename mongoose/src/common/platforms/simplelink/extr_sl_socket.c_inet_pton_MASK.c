
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int *,int *,int *,int *) ;

int FUNC_1(int VAR_3, const char *VAR_4, void *VAR_5) {
  uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
  uint8_t *VAR_10 = (uint8_t *) VAR_5;
  if (VAR_3 != VAR_0) {
    VAR_2 = VAR_1;
    return 0;
  }
  if (FUNC_0(VAR_4, "%lu.%lu.%lu.%lu", &VAR_6, &VAR_7, &VAR_8, &VAR_9) != 4) {
    return 0;
  }
  *VAR_10 = VAR_9;
  *(VAR_10 + 1) = VAR_8;
  *(VAR_10 + 2) = VAR_7;
  *(VAR_10 + 3) = VAR_6;
  return 1;
}
