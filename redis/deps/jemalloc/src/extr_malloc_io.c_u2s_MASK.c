
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uintmax_t ;
typedef size_t uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(uintmax_t VAR_1, unsigned VAR_2, bool VAR_3, char *VAR_4, size_t *VAR_5) {
 unsigned VAR_6;

 VAR_6 = VAR_0 - 1;
 VAR_4[VAR_6] = '\0';
 switch (VAR_2) {
 case 10:
  do {
   VAR_6--;
   VAR_4[VAR_6] = "0123456789"[VAR_1 % (uint64_t)10];
   VAR_1 /= (uint64_t)10;
  } while (VAR_1 > 0);
  break;
 case 16: {
  const char *VAR_7 = (VAR_3)
      ? "0123456789ABCDEF"
      : "0123456789abcdef";

  do {
   VAR_6--;
   VAR_4[VAR_6] = VAR_7[VAR_1 & 0xf];
   VAR_1 >>= 4;
  } while (VAR_1 > 0);
  break;
 } default: {
  const char *VAR_8 = (VAR_3)
      ? "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
      : "0123456789abcdefghijklmnopqrstuvwxyz";

  FUNC_0(VAR_2 >= 2 && VAR_2 <= 36);
  do {
   VAR_6--;
   VAR_4[VAR_6] = VAR_8[VAR_1 % (uint64_t)VAR_2];
   VAR_1 /= (uint64_t)VAR_2;
  } while (VAR_1 > 0);
 }}

 *VAR_5 = VAR_0 - 1 - VAR_6;
 return &VAR_4[VAR_6];
}
