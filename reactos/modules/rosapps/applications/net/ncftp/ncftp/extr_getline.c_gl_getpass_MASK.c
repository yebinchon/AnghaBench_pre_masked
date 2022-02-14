
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsize ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char* const,int ) ;
 int FUNC_4 (char const* const) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char) ;
 int FUNC_11 (char const* const) ;
 int FUNC_12 (char* const,int ,size_t) ;

char *FUNC_13(const char *const VAR_1, char *const VAR_2, int VAR_3)
{

 char *VAR_4;
 int VAR_5;

 FUNC_12(VAR_2, 0, (size_t) sizeof(VAR_3));
 VAR_3--;
 FUNC_9();


 if ((VAR_1 != ((void*)0)) && (VAR_1[0] != '\0'))
  FUNC_11(VAR_1);

 VAR_4 = VAR_2;
 while ((VAR_5 = FUNC_8()) != (-1)) {
  if ((VAR_5 == '\r') || (VAR_5 == '\n'))
   break;
  if ((VAR_5 == '\010') || (VAR_5 == '\177')) {

   if (VAR_4 > VAR_2) {
    *--VAR_4 = '\0';
    FUNC_10('\010');
    FUNC_10(' ');
    FUNC_10('\010');
   }
  } else if (VAR_4 < (VAR_2 + VAR_3)) {
   FUNC_10('*');
   *VAR_4++ = VAR_5;
  }
 }
 *VAR_4 = '\0';
 FUNC_10('\n');
 FUNC_7();
 return (VAR_2);
}
