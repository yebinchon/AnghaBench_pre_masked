
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef int ip_addr_t ;


 int FUNC_0 (int const*) ;

char *FUNC_1(const ip_addr_t *VAR_0, char *VAR_1, int VAR_2)
{
  u32_t VAR_3;
  char VAR_4[3];
  char *VAR_5;
  u8_t *VAR_6;
  u8_t VAR_7;
  u8_t VAR_8;
  u8_t VAR_9;
  int VAR_10 = 0;

  VAR_3 = FUNC_0(VAR_0);

  VAR_5 = VAR_1;
  VAR_6 = (u8_t *)&VAR_3;
  for(VAR_8 = 0; VAR_8 < 4; VAR_8++) {
    VAR_9 = 0;
    do {
      VAR_7 = *VAR_6 % (u8_t)10;
      *VAR_6 /= (u8_t)10;
      VAR_4[VAR_9++] = '0' + VAR_7;
    } while(*VAR_6);
    while(VAR_9--) {
      if (VAR_10++ >= VAR_2) {
        return ((void*)0);
      }
      *VAR_5++ = VAR_4[VAR_9];
    }
    if (VAR_10++ >= VAR_2) {
      return ((void*)0);
    }
    *VAR_5++ = '.';
    VAR_6++;
  }
  *--VAR_5 = 0;
  return VAR_1;
}
