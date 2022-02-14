
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(void (*VAR_0)(const char), uint32_t VAR_1, int VAR_2, int VAR_3, char VAR_4)
{

 char *VAR_5, VAR_6[(sizeof(long) * 8 / 3) + 2];

 VAR_5 = VAR_6;
 do {
  *VAR_5++ = "0123456789abcdef"[VAR_1 % VAR_2];
 } while (VAR_1 /= VAR_2);

        while (VAR_5 - VAR_6 < VAR_3--) {
          VAR_0(VAR_4);
        }

 do {
  VAR_0(*--VAR_5);
 } while (VAR_5 > VAR_6);
}
