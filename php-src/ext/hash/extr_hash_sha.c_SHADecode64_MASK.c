
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static void FUNC_0(uint64_t *VAR_0, const unsigned char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < VAR_2; VAR_3++, VAR_4 += 8)
  VAR_0[VAR_3] =
   ((uint64_t) VAR_1[VAR_4 + 7]) | (((uint64_t) VAR_1[VAR_4 + 6]) << 8) |
   (((uint64_t) VAR_1[VAR_4 + 5]) << 16) | (((uint64_t) VAR_1[VAR_4 + 4]) << 24) |
   (((uint64_t) VAR_1[VAR_4 + 3]) << 32) | (((uint64_t) VAR_1[VAR_4 + 2]) << 40) |
   (((uint64_t) VAR_1[VAR_4 + 1]) << 48) | (((uint64_t) VAR_1[VAR_4]) << 56);
}
