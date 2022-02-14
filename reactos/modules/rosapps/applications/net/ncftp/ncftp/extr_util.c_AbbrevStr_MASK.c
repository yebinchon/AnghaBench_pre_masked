
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;

void
FUNC_4(char *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = (int) FUNC_3(VAR_1);
 if (VAR_4 > (int) VAR_2) {
  if (VAR_3 == 0) {

   (void) FUNC_2(VAR_0, "...");
   (void) FUNC_0(VAR_0, (char *) VAR_1 + VAR_4 - (int) VAR_2 + 3, VAR_2 + 1);
  } else {

   (void) FUNC_1(VAR_0, (char *) VAR_1, VAR_2 + 1);
   (void) FUNC_2(VAR_0 + VAR_2 - 3, "...");
  }
 } else {
  (void) FUNC_1(VAR_0, (char *) VAR_1, VAR_2 + 1);
 }
}
