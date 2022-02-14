
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char* const,char const* const,size_t const) ;
 scalar_t__ FUNC_1 (char const* const,char const* const) ;
 scalar_t__ FUNC_2 (char const* const,char const* const,size_t const) ;

void
FUNC_3(char *const VAR_0, const size_t VAR_1, const char *const VAR_2, const char *const VAR_3, const size_t VAR_4)
{
 *VAR_0 = '\0';
 if (FUNC_1(VAR_2, VAR_3) != 0) {
  if (FUNC_1(VAR_3, "/") == 0) {
   (void) FUNC_0(VAR_0, VAR_2 + 1, VAR_1);
  } else if ((FUNC_2(VAR_3, VAR_2, VAR_4) == 0) && (VAR_2[VAR_4] == '/')) {
   (void) FUNC_0(VAR_0, VAR_2 + VAR_4 + 1, VAR_1);
  } else {

   (void) FUNC_0(VAR_0, VAR_2, VAR_1);
  }
 }
}
