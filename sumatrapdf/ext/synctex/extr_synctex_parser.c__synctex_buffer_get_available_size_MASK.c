
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int synctex_status_t ;
typedef int * synctex_scanner_t ;


 size_t VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int * VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,void*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 size_t VAR_11 ;

synctex_status_t FUNC_5(synctex_scanner_t VAR_12, size_t * VAR_13) {
   size_t VAR_14 = 0;
 if (((void*)0) == VAR_12 || ((void*)0) == VAR_13) {
  return VAR_5;
 }

 if ((* VAR_13)>VAR_0){
  (* VAR_13) = VAR_0;
 }
 VAR_14 = VAR_2 - VAR_1;
 if ((* VAR_13)<=VAR_14) {

  (* VAR_13) = VAR_14;
  return VAR_8;
 }
 if (VAR_3) {


  int VAR_15 = 0;
  if (VAR_14) {
   FUNC_4(VAR_4, VAR_1, VAR_14);
  }
  VAR_1 = VAR_4 + VAR_14;

  VAR_15 = FUNC_3(VAR_3,(void *)VAR_1,VAR_0 - VAR_14);
  if (VAR_15>0) {


   VAR_2 = VAR_1 + VAR_15;



   * VAR_2 = '\0';
   VAR_1 = VAR_4;
   (* VAR_13) = VAR_2 - VAR_1;
   return VAR_8;
  } else if (0>VAR_15) {

   int VAR_16 = 0;
   const char * VAR_17 = FUNC_2(VAR_3, &VAR_16);
   if (VAR_9 == VAR_16) {

    FUNC_0("gzread error from the file system (%i)",VAR_10);
                return VAR_7;
   } else if (VAR_16) {
    FUNC_0("gzread error (%i:%i,%s)",VAR_15,VAR_16,VAR_17);
                return VAR_7;
   }
  }

        FUNC_1(VAR_3);
        VAR_3 = ((void*)0);
        VAR_2 = VAR_1;
        VAR_1 = VAR_4;
        * VAR_2 = '\0';
        (* VAR_13) = VAR_2 - VAR_1;
        return VAR_6;
    }

 (* VAR_13) = VAR_14;
  return VAR_6;

}
