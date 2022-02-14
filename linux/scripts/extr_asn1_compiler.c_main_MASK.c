
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
typedef size_t ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 char* VAR_2 ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,char*) ;
 scalar_t__ FUNC_8 (int,struct stat*) ;
 char* FUNC_9 (char*) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* FUNC_10 (size_t) ;
 int FUNC_11 (char**,char**,int) ;
 int FUNC_12 (char*,int ) ;
 char* VAR_5 ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 size_t FUNC_15 (int,char*,size_t) ;
 int FUNC_16 (int *,int *) ;
 int VAR_6 ;
 char* FUNC_17 (int ,char) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (char*,char) ;
 int FUNC_21 (char*,char*) ;
 int VAR_7 ;

int FUNC_22(int VAR_8, char **VAR_9)
{
 struct stat VAR_10;
 ssize_t VAR_11;
 FILE *VAR_12, *VAR_13;
 char *VAR_14, *VAR_15;
 char *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_9("KBUILD_VERBOSE");
 if (VAR_16)
  VAR_7 = FUNC_0(VAR_16);

 while (VAR_8 > 4) {
  if (FUNC_18(VAR_9[1], "-v") == 0)
   VAR_7 = 1;
  else if (FUNC_18(VAR_9[1], "-d") == 0)
   VAR_1 = 1;
  else
   break;
  FUNC_11(&VAR_9[1], &VAR_9[2], (VAR_8 - 2) * sizeof(char *));
  VAR_8--;
 }

 if (VAR_8 != 4) {
  FUNC_7(VAR_6, "Format: %s [-v] [-d] <grammar-file> <c-file> <hdr-file>\n",
   VAR_9[0]);
  FUNC_4(2);
 }

 VAR_2 = VAR_9[1];
 VAR_5 = VAR_9[2];
 VAR_4 = VAR_9[3];

 VAR_17 = FUNC_12(VAR_2, VAR_0);
 if (VAR_17 < 0) {
  FUNC_14(VAR_2);
  FUNC_4(1);
 }

 if (FUNC_8(VAR_17, &VAR_10) < 0) {
  FUNC_14(VAR_2);
  FUNC_4(1);
 }

 if (!(VAR_14 = FUNC_10(VAR_10.st_size + 1))) {
  FUNC_14(((void*)0));
  FUNC_4(1);
 }

 if ((VAR_11 = FUNC_15(VAR_17, VAR_14, VAR_10.st_size)) < 0) {
  FUNC_14(VAR_2);
  FUNC_4(1);
 }

 if (FUNC_2(VAR_17) < 0) {
  FUNC_14(VAR_2);
  FUNC_4(1);
 }

 if (VAR_11 != VAR_10.st_size) {
  FUNC_7(VAR_6, "%s: Short read\n", VAR_2);
  FUNC_4(1);
 }

 VAR_15 = FUNC_20(VAR_9[1], '/');
 VAR_15 = VAR_15 ? VAR_15 + 1 : VAR_9[1];
 VAR_3 = FUNC_19(VAR_15);
 if (!VAR_15) {
  FUNC_14(((void*)0));
  FUNC_4(1);
 }
 VAR_15 = FUNC_17(VAR_3, '.');
 if (VAR_15)
  *VAR_15 = '\0';

 VAR_14[VAR_11] = 0;
 FUNC_21(VAR_14, VAR_14 + VAR_11);
 FUNC_1();
 FUNC_13();
 FUNC_3();

 VAR_12 = FUNC_6(VAR_5, "w");
 if (!VAR_12) {
  FUNC_14(VAR_5);
  FUNC_4(1);
 }

 VAR_13 = FUNC_6(VAR_4, "w");
 if (!VAR_13) {
  FUNC_14(VAR_4);
  FUNC_4(1);
 }

 FUNC_16(VAR_12, VAR_13);

 if (FUNC_5(VAR_12) < 0) {
  FUNC_14(VAR_5);
  FUNC_4(1);
 }

 if (FUNC_5(VAR_13) < 0) {
  FUNC_14(VAR_4);
  FUNC_4(1);
 }

 return 0;
}
