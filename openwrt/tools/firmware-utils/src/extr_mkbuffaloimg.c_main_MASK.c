
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
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
 int * VAR_5 ;
 char* VAR_6 ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char*,int ,int) ;
 int * VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_12 (char*,int,char*,char*,char*,char*,char*,char*) ;
 int FUNC_13 (int *,struct stat*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;
 char* VAR_12 ;

int FUNC_16(int VAR_13, char *VAR_14[])
{
 int VAR_15 = VAR_1;
 int VAR_16;
 int VAR_17;
 struct stat VAR_18;
 char *VAR_19;
 int VAR_20;
 uint8_t VAR_21;

 FILE *VAR_22, *VAR_23;

 VAR_9 = FUNC_2(VAR_14[0]);

 while ( 1 ) {
  int VAR_24;

  VAR_24 = FUNC_9(VAR_13, VAR_14, "B:i:o:v:r:R:K:h");
  if (VAR_24 == -1)
   break;

  switch (VAR_24) {
  case 'B':
   VAR_3 = VAR_8;
   break;
  case 'i':
   VAR_5 = VAR_8;
   break;
  case 'o':
   VAR_7 = VAR_8;
   break;
  case 'v':
   VAR_12 = VAR_8;
   break;
  case 'r':
   VAR_10 = VAR_8;
   break;
  case 'R':
   VAR_11 = VAR_8;
   break;
  case 'K':
   VAR_6 = VAR_8;
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

 if (VAR_11 == ((void*)0)) {
  FUNC_0("no rootfs_size specified");
  goto err;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_0("no kernel_size specified");
  goto err;
 }

 if (VAR_5 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto err;
 }

 if (VAR_7 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto err;
 }

 VAR_17 = FUNC_13(VAR_5, &VAR_18);
 if (VAR_17){
  FUNC_1("stat failed on %s", VAR_5);
  goto err;
 }

 VAR_16 = VAR_18.st_size + VAR_0 + 1;
 VAR_19 = FUNC_10(VAR_16);
 if (!VAR_19) {
  FUNC_0("no memory for buffer\n");
  goto err;
 }

 FUNC_11(VAR_19, 0, VAR_0);
 FUNC_12(VAR_19, VAR_0, "device:%s\nversion:%s\nregion:%s\n"
   "RootfsSize:%s\nKernelSize:%s\nInfoHeadSize:128\n",
   VAR_3, VAR_12, VAR_10, VAR_11, VAR_6);
 VAR_19[VAR_0 - 2] = 0x12;
 VAR_19[VAR_0 - 1] = 0x32;

 VAR_23 = FUNC_5(VAR_5, "r");
 if (VAR_23 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for reading", VAR_5);
  goto err_free;
 }

 VAR_4 = 0;
 FUNC_6(VAR_19 + VAR_0, VAR_18.st_size, 1, VAR_23);
 if (VAR_4 != 0) {
  FUNC_1("unable to read from file %s", VAR_5);
  goto err_close_in;
 }

 VAR_21 = 0;
 for (VAR_20 = 0; VAR_20 < (VAR_18.st_size + VAR_0); VAR_20++)
  VAR_21 += VAR_19[VAR_20];

 VAR_21 = 0xff - VAR_21;
 VAR_19[VAR_18.st_size + VAR_0] = VAR_21;

 VAR_22 = FUNC_5(VAR_7, "w");
 if (VAR_22 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for writing", VAR_7);
  goto err_close_in;
 }

 VAR_4 = 0;
 FUNC_8(VAR_19, VAR_16, 1, VAR_22);
 if (VAR_4) {
  FUNC_1("unable to write to file %s", VAR_7);
  goto err_close_out;
 }

 VAR_15 = VAR_2;

 FUNC_4(VAR_22);

 err_close_out:
 FUNC_3(VAR_22);
 if (VAR_15 != VAR_2) {
  FUNC_14(VAR_7);
 }

 err_close_in:
 FUNC_3(VAR_23);

 err_free:
 FUNC_7(VAR_19);

 err:
 return VAR_15;
}
