
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char const*,size_t) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, size_t VAR_1, const char VAR_2)
{
 int VAR_3;
 unsigned char VAR_4[2] = { 0, 0 };

 while (VAR_1 > 0) {
  VAR_3 = (*VAR_0 == '\0' ? 1 : FUNC_1(VAR_0, VAR_1));
  switch (VAR_3) {
   case -2:
   case -1:
    VAR_3 = 1;
    FUNC_0();
    break;
   case 0:
    goto quit_loop;
   case 1:
   default:
    VAR_4[0] = VAR_4[1];
    VAR_4[1] = *VAR_0;
    break;
  }
  VAR_0 += VAR_3;
  VAR_1 -= VAR_3;
 }
quit_loop:
 switch (VAR_4[1]) {
  case '\n':
   if (VAR_4[0] == '\r') {
    return VAR_0 - 2;
   }

  case '\r':
   return VAR_0 - 1;
 }
 return VAR_0;
}
