
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 size_t FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (char*,size_t,int,int *) ;
 int FUNC_8 (int,char**,char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_9 () ;

int FUNC_10(int VAR_7, char **VAR_8)
{
 char VAR_9[1024];
 FILE *VAR_10 = VAR_5, *VAR_11 = VAR_6;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 size_t VAR_14;
 int VAR_15, VAR_16 = 1;

 while ((VAR_15 = FUNC_8(VAR_7, VAR_8, "i:o:h")) != -1) {
  switch (VAR_15) {
   case 'i':
    VAR_12 = VAR_2;
    break;
   case 'o':
    VAR_13 = VAR_2;
    break;
   case 'h':
   default:
    FUNC_9();
  }
 }

 if (VAR_3 != VAR_7 || VAR_3 == 1) {
  FUNC_5(VAR_4, "illegal arg \"%s\"\n", VAR_8[VAR_3]);
  FUNC_9();
 }

 if (VAR_12 && !(VAR_10 = FUNC_4(VAR_12, "r"))) {
  FUNC_5(VAR_4, "can not open \"%s\" for reading\n", VAR_12);
  FUNC_9();
 }

 if (VAR_13 && !(VAR_11 = FUNC_4(VAR_13, "w"))) {
  FUNC_5(VAR_4, "can not open \"%s\" for writing\n", VAR_13);
  FUNC_9();
 }

 while ((VAR_14 = FUNC_6(VAR_9, 1, sizeof(VAR_9), VAR_10)) > 0) {
  if (VAR_14 < sizeof(VAR_9)) {
   if (FUNC_1(VAR_10)) {
   FREAD_ERROR:
    FUNC_5(VAR_4, "fread error\n");
    return VAR_0;
   }
  }

  if (VAR_16 && VAR_14 >= 256) {
   FUNC_3(VAR_9);
   VAR_16 = 0;
  }

  if (!FUNC_7(VAR_9, VAR_14, 1, VAR_11)) {
  FWRITE_ERROR:
   FUNC_5(VAR_4, "fwrite error\n");
   return VAR_0;
  }
 }

 if (FUNC_1(VAR_10)) {
  goto FREAD_ERROR;
 }

 if (FUNC_2(VAR_11)) {
  goto FWRITE_ERROR;
 }

 FUNC_0(VAR_10);
 FUNC_0(VAR_11);

 return VAR_1;
}
