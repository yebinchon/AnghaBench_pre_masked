
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*) ;

__attribute__((used)) static inline void FUNC_4(char *VAR_0, char *VAR_1,
  const char *VAR_2)
{
 char *VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3
 && (VAR_3 == VAR_1 || *(VAR_3-1) == '\n')
 ) {
  char *VAR_4 = VAR_0 + (VAR_3 - VAR_1);
  char *VAR_5 = FUNC_1(VAR_3, '\n');

  if (VAR_5) {
   char *VAR_6 = VAR_4 + (VAR_5 - VAR_3);
   size_t VAR_7 = FUNC_2(VAR_5);

   FUNC_0(VAR_3, VAR_5+1, VAR_7);
   FUNC_0(VAR_4, VAR_6+1, VAR_7);
  } else {
   *VAR_3 = '\0';
   *VAR_4 = '\0';
  }
 }
}
