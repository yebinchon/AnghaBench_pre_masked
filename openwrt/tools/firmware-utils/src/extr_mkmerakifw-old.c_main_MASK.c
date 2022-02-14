
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,int ,int ) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (int *,size_t,int *,int *) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int FUNC_11 (int) ;

int FUNC_12(int VAR_8, char *VAR_9[])
{
 int VAR_10 = VAR_0;
 char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 FILE *VAR_13, *VAR_14;
 size_t VAR_15;

 VAR_6 = FUNC_2(VAR_9[0]);

 while (1) {
  int VAR_16;

  VAR_16 = FUNC_8(VAR_8, VAR_9, "B:i:o:sh");
  if (VAR_16 == -1)
   break;

  switch (VAR_16) {
  case 'B':
   VAR_4 = VAR_5;
   break;
  case 'i':
   VAR_12 = VAR_5;
   break;
  case 'o':
   VAR_11 = VAR_5;
   break;
  case 's':
   VAR_7 = 1;
   break;
  case 'h':
   FUNC_11(VAR_1);
   break;
  default:
   FUNC_11(VAR_0);
   break;
  }
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_0("no board specified");
  goto err;
 }

 VAR_3 = FUNC_4(VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_0("unknown board \"%s\"", VAR_4);
  goto err;
 }

 if (VAR_12 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto err;
 }

 if (VAR_11 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto err;
 }

 VAR_14 = FUNC_5(VAR_12, "r");
 if (VAR_14 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for reading: %s", VAR_12);
  goto err;
 }


 FUNC_6(VAR_14, 0, VAR_2);
 VAR_15 = FUNC_7(VAR_14);
 FUNC_10(VAR_14);

 VAR_13 = FUNC_5(VAR_11, "w");
 if (VAR_13 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for writing: %s", VAR_11);
  goto err_close_in;
 }

 VAR_10 = FUNC_9(VAR_3, VAR_15, VAR_13, VAR_14);
 FUNC_3(VAR_13);

err_close_in:
 FUNC_3(VAR_14);

err:
 return VAR_10;
}
