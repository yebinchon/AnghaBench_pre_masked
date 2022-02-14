
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct stat {int st_size; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (int,char**,char*) ;
 char* VAR_5 ;
 int * VAR_6 ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char*,int ,int) ;
 int * VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_12 (char*,int,char*,char*,...) ;
 int FUNC_13 (int *,struct stat*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;
 char* VAR_11 ;

int FUNC_16(int VAR_12, char *VAR_13[])
{
 int VAR_14 = VAR_1;
 int VAR_15;
 int VAR_16;
 struct stat VAR_17;
 char *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 uint8_t VAR_22;

 FILE *VAR_23, *VAR_24;

 VAR_9 = FUNC_2(VAR_13[0]);

 while ( 1 ) {
  int VAR_25;

  VAR_25 = FUNC_9(VAR_12, VAR_13, "B:i:o:v:r:H:h");
  if (VAR_25 == -1)
   break;

  switch (VAR_25) {
  case 'B':
   VAR_3 = VAR_8;
   break;
  case 'i':
   VAR_6 = VAR_8;
   break;
  case 'o':
   VAR_7 = VAR_8;
   break;
  case 'v':
   VAR_11 = VAR_8;
   break;
  case 'r':
   VAR_10 = VAR_8;
   break;
  case 'H':
   VAR_5 = VAR_8;
   break;
  case 'h':
   FUNC_15(VAR_2);
   break;
  default:
   FUNC_15(VAR_1);
   break;
  }
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_0("no board specified");
  goto err;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto err;
 }

 if (VAR_7 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto err;
 }

 VAR_16 = FUNC_13(VAR_6, &VAR_17);
 if (VAR_16){
  FUNC_1("stat failed on %s", VAR_6);
  goto err;
 }

 VAR_15 = VAR_17.st_size + VAR_0 + 1;
 VAR_18 = FUNC_10(VAR_15);
 if (!VAR_18) {
  FUNC_0("no memory for buffer\n");
  goto err;
 }

 FUNC_11(VAR_18, 0, VAR_0);
 VAR_19 = FUNC_12(VAR_18, VAR_0, "device:%s\nversion:V%s\nregion:%s\n",
         VAR_3, VAR_11, VAR_10);
 VAR_20 = VAR_0 - VAR_19;
 if (VAR_19 >= 0 && VAR_20 > 1 && VAR_5) {
  FUNC_12(VAR_18 + VAR_19, VAR_20, "hd_id:%s\n", VAR_5);
 }

 VAR_24 = FUNC_5(VAR_6, "r");
 if (VAR_24 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for reading", VAR_6);
  goto err_free;
 }

 VAR_4 = 0;
 FUNC_6(VAR_18 + VAR_0, VAR_17.st_size, 1, VAR_24);
 if (VAR_4 != 0) {
  FUNC_1("unable to read from file %s", VAR_6);
  goto err_close_in;
 }

 VAR_22 = 0;
 for (VAR_21 = 0; VAR_21 < (VAR_17.st_size + VAR_0); VAR_21++)
  VAR_22 += VAR_18[VAR_21];

 VAR_22 = 0xff - VAR_22;
 VAR_18[VAR_17.st_size + VAR_0] = VAR_22;

 VAR_23 = FUNC_5(VAR_7, "w");
 if (VAR_23 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for writing", VAR_7);
  goto err_close_in;
 }

 VAR_4 = 0;
 FUNC_8(VAR_18, VAR_15, 1, VAR_23);
 if (VAR_4) {
  FUNC_1("unable to write to file %s", VAR_7);
  goto err_close_out;
 }

 VAR_14 = VAR_2;

 out_flush:
 FUNC_4(VAR_23);

 err_close_out:
 FUNC_3(VAR_23);
 if (VAR_14 != VAR_2) {
  FUNC_14(VAR_7);
 }

 err_close_in:
 FUNC_3(VAR_24);

 err_free:
 FUNC_7(VAR_18);

 err:
 return VAR_14;
}
