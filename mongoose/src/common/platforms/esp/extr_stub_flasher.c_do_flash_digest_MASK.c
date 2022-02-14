
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct MD5Context {int dummy; } ;
typedef int digest ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,struct MD5Context*) ;
 int FUNC_1 (struct MD5Context*) ;
 int FUNC_2 (struct MD5Context*,int *,int) ;
 scalar_t__ FUNC_3 (int,int*,int) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3) {
  uint8_t VAR_4[VAR_0];
  uint8_t VAR_5[16];
  uint32_t VAR_6 =
      VAR_3 ? VAR_3 : sizeof(VAR_4);
  struct MD5Context VAR_7;
  if (VAR_3 > sizeof(VAR_4)) return 0x62;
  FUNC_1(&VAR_7);
  while (VAR_2 > 0) {
    uint32_t VAR_8 = VAR_2;
    struct MD5Context VAR_9;
    FUNC_1(&VAR_9);
    if (VAR_8 > VAR_6) VAR_8 = VAR_6;
    if (FUNC_3(VAR_1, (uint32_t *) VAR_4, VAR_8) != 0) return 0x63;
    FUNC_2(&VAR_7, VAR_4, VAR_8);
    if (VAR_3 > 0) {
      FUNC_2(&VAR_9, VAR_4, VAR_8);
      FUNC_0(VAR_5, &VAR_9);
      FUNC_4(VAR_5, sizeof(VAR_5));
    }
    VAR_1 += VAR_8;
    VAR_2 -= VAR_8;
  }
  FUNC_0(VAR_5, &VAR_7);
  FUNC_4(VAR_5, sizeof(VAR_5));
  return 0;
}
