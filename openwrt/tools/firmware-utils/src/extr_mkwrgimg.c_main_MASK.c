
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrg_header {int offset; int size; int magic2; int magic1; int devname; int signature; } ;
struct stat {int st_size; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (struct wrg_header*,char*,int) ;
 int FUNC_10 (int,char**,char*) ;
 int * VAR_6 ;
 char* FUNC_11 (int) ;
 int FUNC_12 (struct wrg_header*,char,int) ;
 int VAR_7 ;
 int * VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int *,int) ;
 int * VAR_11 ;
 int FUNC_14 (int *,struct stat*) ;
 int FUNC_15 (int ,int *,int) ;
 int FUNC_16 (void*,int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;

int FUNC_19(int VAR_12, char *VAR_13[])
{
 struct wrg_header *VAR_14;
 char *VAR_15;
 struct stat VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19 = VAR_0;

 FILE *VAR_20, *VAR_21;

 VAR_10 = FUNC_2(VAR_13[0]);

 while ( 1 ) {
  int VAR_22;

  VAR_22 = FUNC_10(VAR_12, VAR_13, "bd:i:o:s:O:h");
  if (VAR_22 == -1)
   break;

  switch (VAR_22) {
  case 'b':
   VAR_3 = 1;
   break;
  case 'd':
   VAR_4 = VAR_9;
   break;
  case 'i':
   VAR_6 = VAR_9;
   break;
  case 'o':
   VAR_8 = VAR_9;
   break;
  case 's':
   VAR_11 = VAR_9;
   break;
  case 'O':
   VAR_7 = FUNC_16(VAR_9, ((void*)0), 0);
   break;
  case 'h':
   FUNC_18(VAR_1);
   break;

  default:
   FUNC_18(VAR_0);
   break;
  }
 }

 if (VAR_11 == ((void*)0)) {
  FUNC_0("no signature specified");
  goto err;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto err;
 }

 if (VAR_8 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto err;
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_0("no device name specified");
  goto err;
 }

 VAR_18 = FUNC_14(VAR_6, &VAR_16);
 if (VAR_18){
  FUNC_1("stat failed on %s", VAR_6);
  goto err;
 }

 VAR_17 = VAR_16.st_size + sizeof(struct wrg_header);
 VAR_15 = FUNC_11(VAR_17);
 if (!VAR_15) {
  FUNC_0("no memory for buffer\n");
  goto err;
 }

 VAR_21 = FUNC_5(VAR_6, "r");
 if (VAR_21 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for reading", VAR_6);
  goto err_free;
 }

 VAR_5 = 0;
 FUNC_6(VAR_15 + sizeof(struct wrg_header), VAR_16.st_size, 1, VAR_21);
 if (VAR_5 != 0) {
  FUNC_1("unable to read from file %s", VAR_6);
  goto close_in;
 }

 VAR_14 = (struct wrg_header *) VAR_15;
 FUNC_12(VAR_14, '\0', sizeof(struct wrg_header));

 FUNC_15(VAR_14->signature, VAR_11, sizeof(VAR_14->signature));
 FUNC_15(VAR_14->devname, VAR_4, sizeof(VAR_14->signature));
 FUNC_13(&VAR_14->magic1, VAR_2);
 FUNC_13(&VAR_14->magic2, VAR_2);
 FUNC_13(&VAR_14->size, VAR_16.st_size);
 FUNC_13(&VAR_14->offset, VAR_7);

 FUNC_9(VAR_14, VAR_15 + sizeof(struct wrg_header), VAR_16.st_size);

 VAR_20 = FUNC_5(VAR_8, "w");
 if (VAR_20 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for writing", VAR_8);
  goto close_in;
 }

 VAR_5 = 0;
 FUNC_8(VAR_15, VAR_17, 1, VAR_20);
 if (VAR_5) {
  FUNC_1("unable to write to file %s", VAR_8);
  goto close_out;
 }

 FUNC_4(VAR_20);

 VAR_19 = VAR_1;

close_out:
 FUNC_3(VAR_20);
 if (VAR_19 != VAR_1)
  FUNC_17(VAR_8);
close_in:
 FUNC_3(VAR_21);
err_free:
 FUNC_7(VAR_15);
err:
 return VAR_19;
}
