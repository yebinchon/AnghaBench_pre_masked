
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icon_theme {void* dir; int subdirs; } ;
typedef int ssize_t ;
typedef int FILE ;


 struct icon_theme* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct icon_theme*) ;
 int FUNC_3 (char*,char*,char*,struct icon_theme*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char**,size_t*,int *) ;
 int FUNC_8 (char*,char*,struct icon_theme*) ;
 scalar_t__ FUNC_9 (char) ;
 int FUNC_10 (char) ;
 scalar_t__ FUNC_11 (char) ;
 char* FUNC_12 (size_t) ;
 int FUNC_13 (char*,size_t,char*,char*,char*) ;
 void* FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (struct icon_theme*) ;

__attribute__((used)) static struct icon_theme *FUNC_16(char *VAR_0, char *VAR_1) {

 size_t VAR_2 = FUNC_13(((void*)0), 0, "%s/%s/index.theme", VAR_0,
   VAR_1) + 1;
 char *VAR_3 = FUNC_12(VAR_2);
 if (!VAR_3) {
  return ((void*)0);
 }
 FUNC_13(VAR_3, VAR_2, "%s/%s/index.theme", VAR_0, VAR_1);
 FILE *VAR_4 = FUNC_5(VAR_3, "r");
 FUNC_6(VAR_3);
 if (!VAR_4) {
  return ((void*)0);
 }

 struct icon_theme *VAR_5 = FUNC_0(1, sizeof(struct icon_theme));
 if (!VAR_5) {
  FUNC_4(VAR_4);
  return ((void*)0);
 }
 VAR_5->subdirs = FUNC_1();

 bool VAR_6 = 0;
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 size_t VAR_9 = 0;
 ssize_t VAR_10;
 while ((VAR_10 = FUNC_7(&VAR_8, &VAR_9, VAR_4)) != -1) {
  char *VAR_11 = VAR_8 - 1;
  while (FUNC_11(*++VAR_11)) {}
  if (!*VAR_11 || VAR_11[0] == '#') continue;

  int VAR_12 = VAR_10 - (VAR_11 - VAR_8);
  while (FUNC_11(VAR_11[--VAR_12])) {}
  VAR_11[++VAR_12] = '\0';

  if (VAR_11[0] == '[') {

   if (VAR_11[--VAR_12] != ']') {
    VAR_6 = 1;
    break;
   }
   int VAR_13 = 1;
   for (; !FUNC_10(VAR_11[VAR_13]) && VAR_11[VAR_13] != '[' && VAR_11[VAR_13] != ']'; ++VAR_13) {}
   if (VAR_13 < VAR_12) {
    VAR_6 = 1;
    break;
   }


   VAR_11[VAR_12] = '\0';
   VAR_6 = FUNC_8(VAR_7, &VAR_11[1], VAR_5);
   if (VAR_6) {
    break;
   }
   FUNC_6(VAR_7);
   VAR_7 = FUNC_14(&VAR_11[1]);
  } else {
   if (!VAR_7) {
    VAR_6 = 1;
    break;
   }

   int VAR_14 = 0;
   for (; FUNC_9(VAR_11[VAR_14]) || VAR_11[VAR_14] == '-'; ++VAR_14) {}
   int VAR_15 = VAR_14 - 1;
   while (FUNC_11(VAR_11[++VAR_15])) {}
   if (VAR_11[VAR_15] != '=') {
    VAR_6 = 1;
    break;
   }

   VAR_11[VAR_14] = '\0';
   char *VAR_16 = &VAR_11[VAR_15];
   while (FUNC_11(*++VAR_16)) {}

   VAR_6 = FUNC_3(VAR_7, VAR_11, VAR_16, VAR_5);
   if (VAR_6) {
    break;
   }
  }
 }

 if (!VAR_6 && VAR_7) {
  VAR_6 = FUNC_8(VAR_7, ((void*)0), VAR_5);
 }

 FUNC_6(VAR_7);
 FUNC_6(VAR_8);
 FUNC_4(VAR_4);

 if (!VAR_6 && FUNC_15(VAR_5)) {
  VAR_5->dir = FUNC_14(VAR_1);
  return VAR_5;
 } else {
  FUNC_2(VAR_5);
  return ((void*)0);
 }
}
