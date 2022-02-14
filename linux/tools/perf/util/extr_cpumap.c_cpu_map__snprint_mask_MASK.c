
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; } ;


 int FUNC_0 (struct perf_cpu_map*,int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char) ;
 unsigned char* FUNC_3 (int) ;

size_t FUNC_4(struct perf_cpu_map *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5 = VAR_1;
 unsigned char *VAR_6;
 int VAR_7 = FUNC_0(VAR_0, VAR_0->nr - 1);

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_6 = FUNC_3(VAR_7 / 8 + 1);
 if (VAR_6 == ((void*)0)) {
  VAR_1[0] = '\0';
  return 0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_3);
  VAR_6[VAR_4 / 8] |= 1 << (VAR_4 % 8);
 }

 for (VAR_4 = VAR_7 / 4 * 4; VAR_4 >= 0; VAR_4 -= 4) {
  unsigned char VAR_8 = VAR_6[VAR_4 / 8];

  if (VAR_4 % 8)
   VAR_8 >>= 4;
  else
   VAR_8 &= 0xf;

  *VAR_5++ = FUNC_2(VAR_8);
  if ((VAR_4 % 32) == 0 && VAR_4 > 0)
   *VAR_5++ = ',';
 }
 *VAR_5 = '\0';
 FUNC_1(VAR_6);

 VAR_1[VAR_2 - 1] = '\0';
 return VAR_5 - VAR_1;
}
