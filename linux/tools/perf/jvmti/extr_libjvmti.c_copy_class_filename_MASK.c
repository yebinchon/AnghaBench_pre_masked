
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void
FUNC_3(const char * VAR_0, const char * VAR_1, char * VAR_2, size_t VAR_3)
{



 if (*VAR_0 == 'L') {
  int VAR_4, VAR_5 = 0;
  char *VAR_6 = FUNC_2(VAR_0, '/');
  if (VAR_6) {

   for (VAR_5 = 0; VAR_5 < (VAR_6 - VAR_0); VAR_5++)
    VAR_2[VAR_5] = VAR_0[VAR_5+1];
  }




  for (VAR_4 = 0; VAR_5 < (VAR_3 - 1) && VAR_1 && VAR_4 < FUNC_1(VAR_1); VAR_4++, VAR_5++)
   VAR_2[VAR_5] = VAR_1[VAR_4];

  VAR_2[VAR_5] = '\0';
 } else {

  FUNC_0(VAR_2, VAR_1, VAR_3);
 }
}
