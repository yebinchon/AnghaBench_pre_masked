
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int *VAR_0, const unsigned char *VAR_1, const unsigned VAR_2)
{
 unsigned VAR_3, VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < VAR_2; VAR_3++, VAR_4 += 4)
 {
  VAR_0[VAR_3] = ((unsigned int)VAR_1[VAR_4]) |
  (((unsigned int)VAR_1[VAR_4+1]) << 8) |
  (((unsigned int)VAR_1[VAR_4+2]) << 16) |
  (((unsigned int)VAR_1[VAR_4+3]) << 24);
 }
}
