
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(unsigned char* VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  int VAR_9 = 0;
  for (VAR_8 = VAR_5; VAR_8 < VAR_4*VAR_5; VAR_8 += VAR_5) {
   VAR_9 += (VAR_6 * (((int)(VAR_2[VAR_8]) << VAR_1) - VAR_9)) >> VAR_0;
   VAR_2[VAR_8] = (unsigned char)(VAR_9 >> VAR_1);
  }
  VAR_2[(VAR_4-1)*VAR_5] = 0;
  VAR_9 = 0;
  for (VAR_8 = (VAR_4-2)*VAR_5; VAR_8 >= 0; VAR_8 -= VAR_5) {
   VAR_9 += (VAR_6 * (((int)(VAR_2[VAR_8]) << VAR_1) - VAR_9)) >> VAR_0;
   VAR_2[VAR_8] = (unsigned char)(VAR_9 >> VAR_1);
  }
  VAR_2[0] = 0;
  VAR_2++;
 }
}
