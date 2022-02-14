
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, uint32_t *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < VAR_2; VAR_3++, VAR_4 += 4) {
  VAR_0[VAR_4 + 3] = (unsigned char) ((VAR_1[VAR_3] >> 24) & 0xff);
  VAR_0[VAR_4 + 2] = (unsigned char) ((VAR_1[VAR_3] >> 16) & 0xff);
  VAR_0[VAR_4 + 1] = (unsigned char) ((VAR_1[VAR_3] >> 8) & 0xff);
  VAR_0[VAR_4 + 0] = (unsigned char) (VAR_1[VAR_3] & 0xff);
 }
}
