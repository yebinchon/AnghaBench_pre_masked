
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 char* VAR_0 ;

__attribute__((used)) static void FUNC_0(const ut8 VAR_1[3], char VAR_2[4], int VAR_3) {
 if (VAR_3 < 1) {
  return;
 }
 VAR_2[0] = VAR_0[ VAR_1[0] >> 2 ];
 VAR_2[1] = VAR_0[ ((VAR_1[0] & 0x03) << 4) | ((VAR_3>1)?((VAR_1[1] & 0xf0) >> 4):0) ];
 VAR_2[2] = (VAR_3 > 1 ? VAR_0[ ((VAR_1[1] & 0x0f) << 2) | (VAR_3 > 2 ? ((VAR_1[2] & 0xc0) >> 6) : 0) ] : '=');
 VAR_2[3] = (VAR_3 > 2 ? VAR_0[ VAR_1[2] & 0x3f ] : '=');
}
