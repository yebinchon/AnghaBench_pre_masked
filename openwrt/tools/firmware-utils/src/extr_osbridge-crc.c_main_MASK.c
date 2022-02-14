
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stat {int st_size; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,int,int *) ;
 int FUNC_11 (int,char**,char*) ;
 int * VAR_3 ;
 char* FUNC_12 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int *,struct stat*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;

int FUNC_16(int VAR_7, char *VAR_8[])
{
 int VAR_9 = VAR_0;
 int VAR_10;
 int VAR_11;
 struct stat VAR_12;
 char *VAR_13;
 uint32_t *VAR_14;
 uint32_t VAR_15;

 FILE *VAR_16, *VAR_17;

 VAR_6 = FUNC_3(VAR_8[0]);

 while ( 1 ) {
  int VAR_18;

  VAR_18 = FUNC_11(VAR_7, VAR_8, "i:o:h");
  if (VAR_18 == -1)
   break;

  switch (VAR_18) {
  case 'i':
   VAR_3 = VAR_5;
   break;
  case 'o':
   VAR_4 = VAR_5;
   break;
  case 'h':
   FUNC_15(VAR_1);
   break;
  default:
   FUNC_15(VAR_0);
   break;
  }
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto err;
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto err;
 }

 VAR_11 = FUNC_13(VAR_3, &VAR_12);
 if (VAR_11){
  FUNC_1("stat failed on %s", VAR_3);
  goto err;
 }

 VAR_10 = VAR_12.st_size;
 VAR_13 = FUNC_12(VAR_10);
 if (!VAR_13) {
  FUNC_0("no memory for buffer\n");
  goto err;
 }

 VAR_17 = FUNC_7(VAR_3, "r");
 if (VAR_17 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for reading", VAR_3);
  goto err_free;
 }

 VAR_2 = 0;
 FUNC_8(VAR_13, VAR_10, 1, VAR_17);
 if (VAR_2 != 0) {
  FUNC_1("unable to read from file %s", VAR_3);
  goto err_close_in;
 }

 VAR_15 = FUNC_4(VAR_13, VAR_10);
 VAR_14 = (uint32_t *)VAR_13;
 *VAR_14 = FUNC_2(VAR_15);

 VAR_16 = FUNC_7(VAR_4, "w");
 if (VAR_16 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for writing", VAR_4);
  goto err_close_in;
 }

 VAR_2 = 0;
 FUNC_10(VAR_13, VAR_10, 1, VAR_16);
 if (VAR_2) {
  FUNC_1("unable to write to file %s", VAR_4);
  goto err_close_out;
 }

 VAR_9 = VAR_1;

 out_flush:
 FUNC_6(VAR_16);

 err_close_out:
 FUNC_5(VAR_16);
 if (VAR_9 != VAR_1) {
  FUNC_14(VAR_4);
 }

 err_close_in:
 FUNC_5(VAR_17);

 err_free:
 FUNC_9(VAR_13);

 err:
 return VAR_9;
}
