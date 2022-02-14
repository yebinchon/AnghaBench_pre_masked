
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {unsigned int* retwords; } ;
struct cmdif {int dummy; } ;


 union cmdret VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cmdif*,unsigned char,union cmdret*) ;
 int FUNC_1 (char*,unsigned char,unsigned char,...) ;

__attribute__((used)) static int
FUNC_2(struct cmdif *VAR_2, unsigned char *VAR_3, unsigned int *VAR_4)
{
 unsigned char *VAR_5;
 unsigned int VAR_6[2] = { 0, 0 };
 int VAR_7;
 union cmdret VAR_8 = VAR_0;

 VAR_5 = VAR_3;
 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  if (*VAR_5 != 0xff) {
   if (FUNC_0(VAR_2, *VAR_5, &VAR_8) &&
       FUNC_0(VAR_2, *VAR_5, &VAR_8))
    return -VAR_1;
   VAR_6[VAR_7] += VAR_8.retwords[1];
   VAR_6[VAR_7] *= VAR_8.retwords[2];
   VAR_6[VAR_7] += VAR_8.retwords[3];
   VAR_6[VAR_7] /= 65536;
  }
  VAR_5++;
 }
 if (VAR_6[0]) {
  if (VAR_6[1] != VAR_6[0])
   FUNC_1("rates differ %d %d\n", VAR_6[0], VAR_6[1]);
  *VAR_4 = (unsigned int)VAR_6[0];
 } else
  *VAR_4 = (unsigned int)VAR_6[1];
 FUNC_1("getsampleformat %d %d %d\n", VAR_3[0], VAR_3[1], *VAR_4);
 return 0;
}
