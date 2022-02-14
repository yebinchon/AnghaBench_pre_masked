
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mxArray ;


 int * FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*,int *) ;
 void* VAR_0 ;
 int FUNC_2 () ;
 void* VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,char**) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 () ;
 int VAR_8 ;
 int FUNC_7 (int const*) ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_8 (int ) ;
 void* VAR_13 ;
 void* VAR_14 ;
 scalar_t__ FUNC_9 (int const*,char*,int) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 char* FUNC_12 (char*,char*) ;

void FUNC_13(
     int VAR_17,
     mxArray *VAR_18[],
     int VAR_19,
     const mxArray *VAR_20[]
)
{

 char VAR_21[4096+1];
 char *VAR_22, *VAR_23[128];
 int VAR_24 = 1;


 if (VAR_19 != 2) {

  FUNC_6();
  return;
 }


 if(VAR_17 > 1) {
  FUNC_3("Too many output arguments.");
 }




 FUNC_8(VAR_5);



 VAR_9 = 0;
 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);

 VAR_14 = VAR_1;
 VAR_16 = 0;

 VAR_4 = VAR_3;
 VAR_8 = VAR_2;
 VAR_7 = 1;
 VAR_0 = VAR_1;
 VAR_13 = VAR_1;



 if (!FUNC_11(VAR_20[0]))
  FUNC_3("Type mismatch on argument 1 -- Must be numeric");

 if (!FUNC_10(VAR_20[1]))
  FUNC_3("Type mismatch on argument 2 -- Must be string");






 if (FUNC_9(VAR_20[1], VAR_21, 4096))
  FUNC_3("Cannot unpack command string");



 VAR_23[0] = ((void*)0);
 for (VAR_22 = FUNC_12(VAR_21, " ");
  VAR_22;
  VAR_22 = FUNC_12(((void*)0), " ")) {

   VAR_23[VAR_24++] = VAR_22;
 }




 FUNC_4(VAR_24, VAR_23);


 VAR_15 = FUNC_7(VAR_20[0]);

 FUNC_5(VAR_24, VAR_23);


 VAR_18[0] = FUNC_0(VAR_20[0], VAR_6);


 FUNC_1(VAR_20[0], VAR_18[0]);

 FUNC_2();


}
