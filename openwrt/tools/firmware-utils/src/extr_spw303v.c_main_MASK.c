
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 size_t FUNC_7 (char*,int,int,int *) ;
 int FUNC_8 (char*,size_t,int,int *) ;
 int FUNC_9 (int,char**,char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_10 () ;

int FUNC_11(int VAR_8, char **VAR_9)
{
 char VAR_10[1024];
 FILE *VAR_11 = VAR_6;
 FILE *VAR_12 = VAR_7;
 char *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);
 int VAR_15;
 int VAR_16, VAR_17, VAR_18;
 size_t VAR_19;
 int VAR_20 = 1;

 uint32_t VAR_21 = VAR_2;

 while ((VAR_15 = FUNC_9(VAR_8, VAR_9, "i:o:h")) != -1) {
  switch (VAR_15) {
   case 'i':
    VAR_13 = VAR_3;
    break;
   case 'o':
    VAR_14 = VAR_3;
    break;
   case 'h':
   default:
    FUNC_10();
  }
 }

 if (VAR_4 != VAR_8 || VAR_4 == 1) {
  FUNC_6(VAR_5, "illegal arg \"%s\"\n", VAR_9[VAR_4]);
  FUNC_10();
 }

 if (VAR_13 && !(VAR_11 = FUNC_5(VAR_13, "r"))) {
  FUNC_6(VAR_5, "can not open \"%s\" for reading\n", VAR_13);
  FUNC_10();
 }

 if (VAR_14 && !(VAR_12 = FUNC_5(VAR_14, "w"))) {
  FUNC_6(VAR_5, "can not open \"%s\" for writing\n", VAR_14);
  FUNC_10();
 }



 while ((VAR_19 = FUNC_7(VAR_10, 1, sizeof(VAR_10), VAR_11)) > 0) {
  if (VAR_19 < sizeof(VAR_10)) {
   if (FUNC_2(VAR_11)) {
   FREAD_ERROR:
    FUNC_6(VAR_5, "fread error\n");
    return VAR_0;
   }
  }

  if (VAR_20 && VAR_19 >= 256) {
   FUNC_4(VAR_10);
   VAR_20 = 0;
  }

  VAR_21 = FUNC_0(VAR_21, VAR_10, VAR_19);

  if (!FUNC_8(VAR_10, VAR_19, 1, VAR_12)) {
  FWRITE_ERROR:
   FUNC_6(VAR_5, "fwrite error\n");
   return VAR_0;
  }
 }

 if (FUNC_2(VAR_11)) {
  goto FREAD_ERROR;
 }

 if (FUNC_3(VAR_12)) {
  goto FWRITE_ERROR;
 }

 FUNC_1(VAR_11);
 FUNC_1(VAR_12);

 return VAR_1;
}
