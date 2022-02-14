
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static int
FUNC_1(uint32_t VAR_1, uint8_t * VAR_2, int VAR_3) {
 if (VAR_3 < VAR_0 + sizeof(VAR_1))
  return -1;
 VAR_2[4] = VAR_1 & 0xff;
 VAR_2[5] = (VAR_1 >> 8) & 0xff;
 VAR_2[6] = (VAR_1 >> 16) & 0xff;
 VAR_2[7] = (VAR_1 >> 24) & 0xff;
 return FUNC_0(VAR_2, sizeof(VAR_1));
}
