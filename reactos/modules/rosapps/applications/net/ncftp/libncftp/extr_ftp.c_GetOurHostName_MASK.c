
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostent {char** h_aliases; scalar_t__ h_name; } ;
typedef int line ;
struct TYPE_2__ {char* defdname; } ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 struct hostent* FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 () ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (char*,char*) ;

int
FUNC_15(char *VAR_3, size_t VAR_4)
{







 struct hostent *VAR_5;
 int VAR_6;
 char **VAR_7;
 char VAR_8[64];
 char *VAR_9;
 int VAR_10;

 VAR_3[0] = '\0';
 VAR_6 = FUNC_7(VAR_3, (int) VAR_4);
 if ((VAR_6 < 0) || (VAR_3[0] == '\0')) {
  return (-1);
 }

 if (FUNC_11(VAR_3, '.') != ((void*)0)) {



  return (2);
 }

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5 != ((void*)0)) {

  VAR_9 = FUNC_11((char *) VAR_5->h_name, '.');
  if ((VAR_9 != ((void*)0)) && (VAR_9[1] != '\0')) {

   (void) FUNC_2(VAR_3, (char *) VAR_5->h_name, VAR_4);
   return (3);
  }


  for (VAR_7 = VAR_5->h_aliases; *VAR_7 != ((void*)0); VAR_7++) {
   VAR_9 = FUNC_11(*VAR_7, '.');
   if ((VAR_9 != ((void*)0)) && (VAR_9[1] != '\0')) {
    (void) FUNC_2(VAR_3, *VAR_7, VAR_4);
    return (4);
   }
  }
 }
 VAR_10 = -1;
 VAR_8[0] = '\0';
 if (VAR_8[0] == '\0') {
  FILE *VAR_11;
  char VAR_12[256];
  char *VAR_13;

  VAR_11 = FUNC_5("/etc/resolv.conf", "r");
  if (VAR_11 != ((void*)0)) {
   (void) FUNC_9(VAR_12, 0, sizeof(VAR_12));
   while (FUNC_4(VAR_12, sizeof(VAR_12) - 1, VAR_11) != ((void*)0)) {
    if (!FUNC_8((int) VAR_12[0]))
     continue;
    VAR_13 = FUNC_14(VAR_12, " \t\n\r");
    if (VAR_13 == ((void*)0))
     continue;
    if (FUNC_12(VAR_13, "domain") == 0) {
     VAR_13 = FUNC_14(((void*)0), " \t\n\r");
     if (VAR_13 == ((void*)0))
      continue;
     (void) FUNC_0(VAR_8, VAR_13);
     VAR_10 = 7;
     break;
    }
   }
   (void) FUNC_3(VAR_11);
  }
 }


 if (VAR_8[0] != '\0') {



  VAR_9 = VAR_8 + FUNC_13(VAR_8) - 1;
  if (*VAR_9 == '.')
   *VAR_9 = '\0';
  if (VAR_8[0] != '.')
   (void) FUNC_1(VAR_3, ".", VAR_4);
  (void) FUNC_1(VAR_3, VAR_8, VAR_4);
 }
 if (VAR_10 < 0)
  VAR_3[0] = '\0';
 return(VAR_10);

}
