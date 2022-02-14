
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char * FUNC_0(unsigned long VAR_0, char *VAR_1, int VAR_2)
{
 unsigned VAR_3;
 int VAR_4=0, VAR_5;
 char VAR_6;

 while (1) {
  VAR_3 = VAR_0 % VAR_2;
  VAR_1[VAR_4] = ((VAR_3 < 10) ? '0' + VAR_3 : 'A' + VAR_3 - 10);
  VAR_0 /= VAR_2;
  if (VAR_0 == 0) break;
  VAR_4++;
 }
 VAR_1[VAR_4 + 1] = 0;
 for (VAR_5=0; VAR_5 < VAR_4; VAR_5++, VAR_4--) {
  VAR_6 = VAR_1[VAR_5];
  VAR_1[VAR_5] = VAR_1[VAR_4];
  VAR_1[VAR_4] = VAR_6;
 }
 return VAR_1;
}
