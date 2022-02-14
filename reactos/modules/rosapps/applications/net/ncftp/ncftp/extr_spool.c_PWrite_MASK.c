
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,char const*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, const char *const VAR_3, size_t VAR_4)
{
 int VAR_5;
 const char *VAR_6 = VAR_3;
 int VAR_7;

 VAR_5 = (int) VAR_4;
 for (;;) {
  VAR_7 = (int) FUNC_0(VAR_2, VAR_6, VAR_5);
  if (VAR_7 < 0) {
   if (VAR_1 != VAR_0) {
    VAR_7 = (int) VAR_4 - VAR_5;
    if (VAR_7 == 0)
     VAR_7 = -1;
    return (VAR_7);
   } else {
    VAR_1 = 0;
    VAR_7 = 0;

   }
  }
  VAR_5 -= VAR_7;
  if (VAR_5 <= 0)
   break;
  VAR_6 += VAR_7;
 }
 VAR_7 = (int) VAR_4 - VAR_5;
 return (VAR_7);
}
