
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (char*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

char* FUNC_1(uint64_t VAR_0)
{
 uint64_t VAR_1 = VAR_0, VAR_2 = 10000000000ULL;
 uint16_t VAR_3[6];
 int VAR_4;
 static char VAR_5[64];

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  VAR_3[VAR_4] = (uint16_t) ((VAR_2 == 0)?VAR_1:(VAR_1 / VAR_2));
  VAR_1 %= VAR_2;
  VAR_2 /= 100ULL;
 }
 FUNC_0(VAR_5, "%04d.%02d.%02d %02d:%02d:%02d (UTC)", VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4], VAR_3[5]);
 return VAR_5;
}
