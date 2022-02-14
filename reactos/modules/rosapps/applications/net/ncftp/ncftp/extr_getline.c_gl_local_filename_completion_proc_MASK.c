
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ffd ;
struct TYPE_5__ {char* cFileName; int dwFileAttributes; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 int * VAR_2 ;
 scalar_t__ FUNC_4 (char) ;
 char VAR_3 ;
 char* VAR_4 ;
 char* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,size_t) ;
 int FUNC_7 (char*) ;
 char VAR_5 ;
 char* VAR_6 ;
 char** VAR_7 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*,char const*,size_t) ;
 int FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_13 (char*,size_t) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (char const*) ;

char *
FUNC_16(const char *VAR_8, int VAR_9)
{
 static HANDLE VAR_10 = ((void*)0);
 static int VAR_11;
 static size_t VAR_12;

 WIN32_FIND_DATA VAR_13;
 DWORD VAR_14;
 char *VAR_15, *VAR_16, VAR_17;
 const char *VAR_18;
 const char *VAR_19, *VAR_20;
 char *VAR_21, *VAR_22;
 size_t VAR_23, VAR_24;

 if (VAR_9 == 0) {
  if (VAR_10 != ((void*)0)) {

   FUNC_0(VAR_10);
   VAR_10 = ((void*)0);
  }
 }


 if (VAR_10 == ((void*)0)) {
  VAR_21 = ((void*)0);
  VAR_22 = ((void*)0);
  VAR_15 = FUNC_5(VAR_8);
  if (VAR_15 == VAR_8) {
   VAR_19 = VAR_4;
   VAR_11 = 1;
  } else if (VAR_15 == ((void*)0)) {
   VAR_19 = ".";
   VAR_11 = 0;
  } else {
   VAR_23 = FUNC_15(VAR_8) + 1;
   VAR_21 = (char *) FUNC_9(VAR_23);
   if (VAR_21 == ((void*)0))
    return ((void*)0);
   FUNC_10(VAR_21, VAR_8, VAR_23);
   VAR_23 = (VAR_15 - VAR_8);
   VAR_21[VAR_23] = '\0';
   VAR_19 = VAR_21;
   VAR_11 = (int) ((VAR_15 + 1) - VAR_8);
  }

  if (FUNC_14(VAR_19, "~") == 0) {
   if (VAR_6 == ((void*)0))
    FUNC_8(((void*)0));
   if (VAR_6 == ((void*)0))
    return (((void*)0));
   VAR_19 = VAR_6;
  }

  VAR_23 = FUNC_15(VAR_19);
  VAR_22 = (char *) FUNC_9(VAR_23 + 8);
  if (VAR_22 == ((void*)0)) {
   if (VAR_21 != ((void*)0))
    FUNC_7(VAR_21);
   return ((void*)0);
  }

  FUNC_10(VAR_22, VAR_19, VAR_23 + 1);
  if (VAR_22[VAR_23 - 1] == VAR_3)
   FUNC_10(VAR_22 + VAR_23, "*.*", (size_t) 4);
  else
   FUNC_10(VAR_22 + VAR_23, "\\*.*", (size_t) 5);


  FUNC_12(&VAR_13, 0, sizeof(VAR_13));
  VAR_10 = FUNC_1(VAR_22, &VAR_13);

  FUNC_7(VAR_22);
  if (VAR_21 != ((void*)0))
   FUNC_7(VAR_21);

  if (VAR_10 == VAR_2) {
   return ((void*)0);
  }

  VAR_18 = VAR_8 + VAR_11;
  VAR_12 = FUNC_15(VAR_18);
 } else {

  VAR_18 = VAR_8 + VAR_11;
  goto next;
 }

 for (;;) {

  VAR_20 = VAR_13.cFileName;
  if ((VAR_20[0] == '.') && ((VAR_20[1] == '\0') || ((VAR_20[1] == '.') && (VAR_20[2] == '\0'))))
   goto next;

  if ((VAR_12 == 0) || (FUNC_6(VAR_20, VAR_18, VAR_12) == 0)) {

   VAR_23 = FUNC_15(VAR_20);
   VAR_15 = (char *) FUNC_9(VAR_11 + VAR_23 + 4 + 1 );
   *VAR_15 = '\0';
   if (VAR_11 > 0)
    FUNC_10(VAR_15, VAR_8, VAR_11);
   FUNC_10(VAR_15 + VAR_11, VAR_20, VAR_23 + 1);
   if (VAR_13.dwFileAttributes & VAR_1) {

    VAR_16 = VAR_15 + VAR_11 + VAR_23 + 1;
    *VAR_16++ = '\0';
    *VAR_16++ = 'd';
    *VAR_16 = '\0';
   } else {
    VAR_16 = VAR_15 + VAR_11 + VAR_23 + 1;
    *VAR_16++ = '\0';
    *VAR_16++ = '-';
    *VAR_16 = '\0';
   }
   return (VAR_15);
  }

next:
  if (!FUNC_2(VAR_10, &VAR_13)) {
   VAR_14 = FUNC_3();
   if (VAR_14 != VAR_0) {
    FUNC_0(VAR_10);
    VAR_10 = ((void*)0);
    return ((void*)0);
   }


   FUNC_0(VAR_10);
   VAR_10 = ((void*)0);

   if (VAR_9 == 1) {





    VAR_15 = VAR_7[0];
    VAR_17 = (char) VAR_15[FUNC_15(VAR_15) + 2];
    if (VAR_17 == (char) 'd')
     VAR_5 = VAR_3;

    if ((VAR_15[0] == '~') && ((VAR_15[1] == '\0') || (FUNC_4(VAR_15[1])))) {
     VAR_23 = FUNC_15(VAR_15 + 1) + 1;
     VAR_24 = FUNC_15(VAR_6);
     if (FUNC_4(VAR_6[VAR_24 - 1]))
      VAR_24--;
     VAR_15 = (char *) FUNC_13(VAR_7[0], VAR_23 + VAR_24 + 4);
     if (VAR_15 == ((void*)0)) {
      VAR_15 = VAR_7[0];
     } else {
      FUNC_11(VAR_15 + VAR_24, VAR_15 + 1, VAR_23);
      FUNC_10(VAR_15, VAR_6, VAR_24);
      VAR_16 = VAR_15 + VAR_23 + VAR_24;
      *VAR_16++ = '\0';
      *VAR_16++ = VAR_17;
      *VAR_16 = '\0';
      VAR_7[0] = VAR_15;
     }
    }
   }
   break;
  }
 }
 return (((void*)0));
}
