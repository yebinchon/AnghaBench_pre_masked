
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_arc4 ;


 unsigned char FUNC_0 (int *) ;

void
FUNC_1(fz_arc4 *VAR_0, unsigned char *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  unsigned char VAR_5;
  VAR_5 = FUNC_0(VAR_0);
  VAR_1[VAR_4] = VAR_2[VAR_4] ^ VAR_5;
 }
}
