
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int,unsigned int) ;
 int * FUNC_5 (char*,unsigned int,unsigned int*) ;
 char* FUNC_6 (char*,unsigned int*) ;
 unsigned int FUNC_7 (int,char**,char*) ;
 int FUNC_8 (char*,int,int ) ;
 char* VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int,int *,unsigned int) ;

int FUNC_13(int VAR_6, char **VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 char *VAR_12, *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);
 int VAR_15;
 ssize_t VAR_16;
 uint8_t *VAR_17;
 uint8_t *VAR_18 = ((void*)0);

 while ((VAR_10 = FUNC_7(VAR_6, VAR_7, "of:O:")) != -1) {
  switch (VAR_10) {
  case 'o':
   VAR_11 = 1;
   break;
  case 'O':
   VAR_14 = VAR_4;
   break;
  case 'f':
   VAR_13 = VAR_4;
   break;
  default:
   FUNC_11();
   return -1;
  }
 }

 FUNC_0();

 VAR_12 = FUNC_6(VAR_13, &VAR_9);
 if (!VAR_12) {
  FUNC_2(VAR_5, "Could not retrieve log buffer!\n");
  return -1;
 }

 VAR_18 = FUNC_5(VAR_12, VAR_9, &VAR_8);
 if (!VAR_18) {
  FUNC_2(VAR_5, "No JIT image found!\n");
  goto done;
 }
 if (!VAR_14) {
  FUNC_4(VAR_18, VAR_8, VAR_11);
  goto done;
 }

 VAR_15 = FUNC_8(VAR_14, VAR_3 | VAR_1 | VAR_2, VAR_0);
 if (VAR_15 < 0) {
  FUNC_2(VAR_5, "Could not open file %s for writing: ", VAR_14);
  FUNC_9(((void*)0));
  goto done;
 }
 VAR_17 = VAR_18;
 do {
  VAR_16 = FUNC_12(VAR_15, VAR_17, VAR_8);
  if (VAR_16 < 0) {
   FUNC_2(VAR_5, "Could not write data to %s: ", VAR_14);
   FUNC_9(((void*)0));
   goto done;
  }
  VAR_8 -= VAR_16;
  VAR_17 += VAR_16;
 } while (VAR_8);
 FUNC_1(VAR_15);

done:
 FUNC_10(VAR_12);
 FUNC_3(VAR_18);
 return 0;
}
