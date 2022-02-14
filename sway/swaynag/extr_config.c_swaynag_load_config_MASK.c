
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaynag_type {int dummy; } ;
struct swaynag {int dummy; } ;
typedef int ssize_t ;
typedef int list_t ;
typedef int FILE ;


 char* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,size_t*,int *) ;
 int FUNC_6 (int *,struct swaynag_type*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,char*,char*) ;
 int VAR_0 ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (int,char**,struct swaynag*,int *,struct swaynag_type*,int *,int *) ;
 struct swaynag_type* FUNC_12 (int *,char*) ;
 struct swaynag_type* FUNC_13 (char*) ;

int FUNC_14(char *VAR_1, struct swaynag *VAR_2, list_t *VAR_3) {
 FILE *VAR_4 = FUNC_2(VAR_1, "r");
 if (!VAR_4) {
  FUNC_3(VAR_0, "Failed to read config. Running without it.\n");
  return 0;
 }

 struct swaynag_type *VAR_5 = FUNC_13("<config>");
 FUNC_6(VAR_3, VAR_5);

 char *VAR_6 = ((void*)0);
 size_t VAR_7 = 0;
 ssize_t VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 while ((VAR_8 = FUNC_5(&VAR_6, &VAR_7, VAR_4)) != -1) {
  VAR_9++;
  if (!*VAR_6 || VAR_6[0] == '\n' || VAR_6[0] == '#') {
   continue;
  }

  if (VAR_6[VAR_8 - 1] == '\n') {
   VAR_6[VAR_8 - 1] = '\0';
  }

  if (VAR_6[0] == '[') {
   char *VAR_11 = FUNC_9(VAR_6, ']');
   if (!VAR_11) {
    FUNC_3(VAR_0, "Closing bracket not found on line %d\n",
      VAR_9);
    VAR_10 = 1;
    break;
   }
   char *VAR_12 = FUNC_0(1, VAR_11 - VAR_6);
   FUNC_10(VAR_12, VAR_6 + 1, VAR_11 - VAR_6 - 1);
   VAR_5 = FUNC_12(VAR_3, VAR_12);
   if (!VAR_5) {
    VAR_5 = FUNC_13(VAR_12);
    FUNC_6(VAR_3, VAR_5);
   }
   FUNC_4(VAR_12);
  } else {
   char *VAR_13 = FUNC_7(sizeof(char) * (VAR_8 + 3));
   FUNC_8(VAR_13, "--%s", VAR_6);
   char *VAR_14[] = {"swaynag", VAR_13};
   VAR_10 = FUNC_11(2, VAR_14, VAR_2, VAR_3, VAR_5,
     ((void*)0), ((void*)0));
   FUNC_4(VAR_13);
   if (VAR_10 != 0) {
    break;
   }
  }
 }
 FUNC_4(VAR_6);
 FUNC_1(VAR_4);
 return VAR_10;
}
