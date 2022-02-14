
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char const* const,char const* const) ;
 int FUNC_1 (char*,char const* const,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char*,unsigned int) ;
 scalar_t__ FUNC_5 (char const* const,char*) ;
 size_t FUNC_6 (char const* const) ;
 scalar_t__ FUNC_7 (char*,char const* const,size_t) ;

char *
FUNC_8(char *VAR_0, size_t VAR_1, const char *const VAR_2, const char *const VAR_3, const char *const VAR_4, const char *const VAR_5, const char *const VAR_6, const char *const VAR_7, const unsigned int VAR_8)
{
 size_t VAR_9, VAR_10;
 char *VAR_11, VAR_12[32];
 int VAR_13;





 (void) FUNC_2(VAR_0, "ftp://", VAR_1);
 VAR_13 = 0;
 if ((VAR_5 != ((void*)0)) && (VAR_5[0] != '\0') && (FUNC_5(VAR_5, "anonymous") != 0) && (FUNC_5(VAR_5, "ftp") != 0)) {
  VAR_13 = 1;
  (void) FUNC_1(VAR_0, VAR_5, VAR_1);
  if ((VAR_6 != ((void*)0)) && (VAR_6[0] != '\0')) {
   (void) FUNC_1(VAR_0, ":", VAR_1);
   (void) FUNC_1(VAR_0, "PASSWORD", VAR_1);
  }
  (void) FUNC_1(VAR_0, "@", VAR_1);
 }
 (void) FUNC_1(VAR_0, VAR_7, VAR_1);
 if ((VAR_8 != 21) && (VAR_8 != 0)) {
  (void) FUNC_4(VAR_12, ":%u", (unsigned int) VAR_8);
  (void) FUNC_1(VAR_0, VAR_12, VAR_1);
 }

 VAR_9 = FUNC_6(VAR_0);
 VAR_11 = VAR_0 + VAR_9;
 VAR_10 = VAR_1 - VAR_9;
 FUNC_0(VAR_11, VAR_10, VAR_3, VAR_2);
 if ((VAR_4 != ((void*)0)) && (VAR_4[0] != '\0') && (VAR_4[1] != '\0')) {
  if (FUNC_7(VAR_11, VAR_4, FUNC_6(VAR_4)) == 0) {

   FUNC_3(VAR_11, VAR_11 + FUNC_6(VAR_4), FUNC_6(VAR_11) - FUNC_6(VAR_4) + 1);
  } else if (VAR_13 != 0) {





   VAR_11[VAR_10 - 1] = '\0';
   VAR_11[VAR_10 - 2] = '\0';
   VAR_11[VAR_10 - 3] = '\0';
   VAR_11[VAR_10 - 4] = '\0';
   FUNC_3(VAR_11 + 4, VAR_11 + 1, FUNC_6(VAR_11 + 1));
   VAR_11[0] = '/';
   VAR_11[1] = '%';
   VAR_11[2] = '2';
   VAR_11[3] = 'F';
  }
 }

 return (VAR_0);
}
