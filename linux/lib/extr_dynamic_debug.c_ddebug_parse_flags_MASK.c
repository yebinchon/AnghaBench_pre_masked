
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const opt_char; unsigned int flag; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char const,char const*) ;
 int FUNC_2 (char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, unsigned int *VAR_3,
          unsigned int *VAR_4)
{
 unsigned VAR_5 = 0;
 int VAR_6 = '=', VAR_7;

 switch (*VAR_2) {
 case '+':
 case '-':
 case '=':
  VAR_6 = *VAR_2++;
  break;
 default:
  FUNC_1("bad flag-op %c, at start of %s\n", *VAR_2, VAR_2);
  return -VAR_0;
 }
 FUNC_2("op='%c'\n", VAR_6);

 for (; *VAR_2 ; ++VAR_2) {
  for (VAR_7 = FUNC_0(VAR_1) - 1; VAR_7 >= 0; VAR_7--) {
   if (*VAR_2 == VAR_1[VAR_7].opt_char) {
    VAR_5 |= VAR_1[VAR_7].flag;
    break;
   }
  }
  if (VAR_7 < 0) {
   FUNC_1("unknown flag '%c' in \"%s\"\n", *VAR_2, VAR_2);
   return -VAR_0;
  }
 }
 FUNC_2("flags=0x%x\n", VAR_5);


 switch (VAR_6) {
 case '=':
  *VAR_4 = 0;
  *VAR_3 = VAR_5;
  break;
 case '+':
  *VAR_4 = ~0U;
  *VAR_3 = VAR_5;
  break;
 case '-':
  *VAR_4 = ~VAR_5;
  *VAR_3 = 0;
  break;
 }
 FUNC_2("*flagsp=0x%x *maskp=0x%x\n", *VAR_3, *VAR_4);
 return 0;
}
