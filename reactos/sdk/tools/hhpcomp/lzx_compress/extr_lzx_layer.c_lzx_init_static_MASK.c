
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 double FUNC_0 (int) ;
 int* VAR_1 ;
 double VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
  int VAR_3, VAR_4;

  if (VAR_0[49]) return;

  VAR_2 = 1.0/FUNC_0(2);
  for (VAR_3=0, VAR_4=0; VAR_3 <= 50; VAR_3 += 2) {
    VAR_0[VAR_3] = VAR_0[VAR_3+1] = VAR_4;
    if ((VAR_3 != 0) && (VAR_4 < 17)) VAR_4++;
  }

  for (VAR_3=0, VAR_4=0; VAR_3 <= 50; VAR_3++) {
    VAR_1[VAR_3] = VAR_4;
    VAR_4 += 1 << VAR_0[VAR_3];
  }
}
