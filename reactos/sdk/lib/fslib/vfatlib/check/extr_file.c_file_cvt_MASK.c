
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,unsigned char) ;
 unsigned char FUNC_3 (unsigned char) ;

int FUNC_4(unsigned char *VAR_0, unsigned char *VAR_1)
{
    unsigned char VAR_2;
    int VAR_3, VAR_4, VAR_5;

    VAR_3 = 8;
    VAR_4 = 0;
    while (*VAR_0) {
 VAR_2 = *VAR_0;
 if (VAR_2 < ' ' || VAR_2 > 0x7e || FUNC_2("*?<>|\"/", VAR_2)) {
     FUNC_1("Invalid character in name. Use \\ooo for special "
     "characters.\n");
     return 0;
 }
 if (VAR_2 == '.') {
     if (VAR_4) {
  FUNC_1("Duplicate dots in name.\n");
  return 0;
     }
     while (VAR_3--)
  *VAR_1++ = ' ';
     VAR_3 = 3;
     VAR_4 = 1;
     VAR_0++;
     continue;
 }
 if (VAR_2 == '\\') {
     VAR_2 = 0;
     VAR_0++;
     for (VAR_5 = 3; VAR_5; VAR_5--) {
  if (*VAR_0 < '0' || *VAR_0 > '7') {
      FUNC_1("Expected three octal digits.\n");
      return 0;
  }
  VAR_2 = VAR_2 * 8 + *VAR_0++ - '0';
     }
     VAR_0--;
 }
 if (FUNC_0(VAR_2))
     VAR_2 = FUNC_3(VAR_2);
 if (VAR_3) {
     *VAR_1++ = VAR_2;
     VAR_3--;
 }
 VAR_0++;
    }
    if (*VAR_0 || VAR_3 == 8)
 return 0;
    if (!VAR_4) {
 while (VAR_3--)
     *VAR_1++ = ' ';
 VAR_3 = 3;
    }
    while (VAR_3--)
 *VAR_1++ = ' ';
    return 1;
}
