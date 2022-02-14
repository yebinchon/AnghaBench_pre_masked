
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct MD5Context {int dummy; } ;
typedef int num_acked ;
typedef int digest ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,struct MD5Context*) ;
 int FUNC_1 (struct MD5Context*) ;
 int FUNC_2 (struct MD5Context*,int *,int) ;
 int FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (int,int*,int) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3,
                  uint32_t VAR_4) {
  uint8_t VAR_5[VAR_0];
  uint8_t VAR_6[16];
  struct MD5Context VAR_7;
  uint32_t VAR_8 = 0, VAR_9 = 0;
  if (VAR_3 > sizeof(VAR_5)) return 0x52;
  FUNC_1(&VAR_7);
  while (VAR_9 < VAR_2) {
    while (VAR_8 < VAR_2 && VAR_8 - VAR_9 < VAR_4) {
      uint32_t VAR_10 = VAR_2 - VAR_8;
      if (VAR_10 > VAR_3) VAR_10 = VAR_3;
      if (FUNC_4(VAR_1, (uint32_t *) VAR_5, VAR_10) != 0) return 0x53;
      FUNC_5(VAR_5, VAR_10);
      FUNC_2(&VAR_7, VAR_5, VAR_10);
      VAR_1 += VAR_10;
      VAR_8 += VAR_10;
    }
    {
      if (FUNC_3(&VAR_9, sizeof(VAR_9)) != 4) return 0x54;
      if (VAR_9 > VAR_8) return 0x55;
    }
  }
  FUNC_0(VAR_6, &VAR_7);
  FUNC_5(VAR_6, sizeof(VAR_6));
  return 0;
}
