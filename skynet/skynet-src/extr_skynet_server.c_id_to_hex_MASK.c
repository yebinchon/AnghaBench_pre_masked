
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(char * VAR_0, uint32_t VAR_1) {
 int VAR_2;
 static char VAR_3[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
 VAR_0[0] = ':';
 for (VAR_2=0;VAR_2<8;VAR_2++) {
  VAR_0[VAR_2+1] = VAR_3[(VAR_1 >> ((7-VAR_2) * 4))&0xf];
 }
 VAR_0[9] = '\0';
}
