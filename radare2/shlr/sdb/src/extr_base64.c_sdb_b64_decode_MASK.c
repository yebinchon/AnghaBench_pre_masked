
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(const char VAR_1[4], ut8 VAR_2[3]) {
 int VAR_3 = 3;
 ut8 VAR_4, VAR_5[4] = {0};
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  if (VAR_1[VAR_4] < '+' || VAR_1[VAR_4] > 'z') {
   return -1;
  }
  VAR_5[VAR_4] = VAR_0[VAR_1[VAR_4] - '+'];
  if (VAR_5[VAR_4] == '$') {
   VAR_3 = VAR_4 ? VAR_4 - 1: -1;
   break;
  }
  VAR_5[VAR_4] -= 62;
 }
 VAR_2[0] = VAR_5[0] << 2 | VAR_5[1] >> 4;
 VAR_2[1] = VAR_5[1] << 4 | VAR_5[2] >> 2;
 VAR_2[2] = ((VAR_5[2] << 6) & 0xc0) | VAR_5[3];
 return VAR_3;
}
