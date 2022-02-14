
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int * VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int,char**,char*) ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (int *) ;

int
FUNC_15(int VAR_10, char *VAR_11[])
{
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14 = VAR_0;

 FILE *VAR_15;

 VAR_8=FUNC_3(VAR_11[0]);

 VAR_5 = 0;
 while ( 1 ) {
  VAR_12 = 0;

  VAR_13 = FUNC_7(VAR_10, VAR_11, "b:B:ho:r:v");
  if (VAR_13 == -1)
   break;

  switch (VAR_13) {
  case 'b':
  case 'r':
   VAR_12 = FUNC_8(VAR_13,VAR_4);
   break;
  case 'B':
   VAR_12 = FUNC_9(VAR_13,VAR_4);
   break;
  case 'o':
   VAR_12 = FUNC_10(VAR_13,VAR_4);
   break;
  case 'v':
   VAR_9++;
   break;
  case 'h':
   FUNC_13(VAR_1);
   break;
  default:
   VAR_12 = 1;
   break;
  }
  if (VAR_12 != 0 ) {
   FUNC_1("invalid option: -%c", VAR_7);
   goto out;
  }
 }

 if (VAR_2 == ((void*)0)) {
  FUNC_1("no board specified");
  goto out;
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_1("no output file specified");
  goto out;
 }

 if (VAR_6 < VAR_10) {
  FUNC_1("invalid option: %s", VAR_11[VAR_6]);
  goto out;
 }

 if (FUNC_11() != 0) {
  goto out;
 }

 VAR_15 = FUNC_6(VAR_3, "w");
 if (VAR_15 == ((void*)0)) {
  FUNC_2("could not open \"%s\" for writing", VAR_3);
  goto out;
 }

 if (FUNC_14(VAR_15) != 0)
  goto out_flush;

 FUNC_0(1,"Image file %s completed.", VAR_3);

 VAR_14 = VAR_1;

out_flush:
 FUNC_5(VAR_15);
 FUNC_4(VAR_15);
 if (VAR_14 != VAR_1) {
  FUNC_12(VAR_3);
 }
out:
 return VAR_14;
}
