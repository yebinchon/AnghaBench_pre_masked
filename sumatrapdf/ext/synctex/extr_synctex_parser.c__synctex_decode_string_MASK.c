
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ synctex_status_t ;
typedef int * synctex_scanner_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (int *,size_t*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,size_t) ;
 char* FUNC_4 (char*,size_t) ;

synctex_status_t FUNC_5(synctex_scanner_t VAR_7, char ** VAR_8) {
 char * VAR_9 = ((void*)0);
 size_t VAR_10 = 0;
 size_t VAR_11 = 0;
 size_t VAR_12 = 0;
 size_t VAR_13 = 0;
 synctex_status_t VAR_14 = 0;
 if (((void*)0) == VAR_7 || ((void*)0) == VAR_8) {
  return VAR_2;
 }

 if (VAR_0>=VAR_1) {
  VAR_13 = 1;
  VAR_14 = FUNC_0(VAR_7,&VAR_13);
  if (VAR_14 < 0) {
   return VAR_14;
  }
  if (0 == VAR_13) {
   return VAR_3;
  }
 }



 VAR_9 = VAR_0;
 * VAR_8 = ((void*)0);

next_character:
 if (VAR_9<VAR_1) {
  if (*VAR_9 == '\n') {

   VAR_12 = VAR_9 - VAR_0;
   if (VAR_10>VAR_6-VAR_12-1) {



    return VAR_6-VAR_12-1 - VAR_10;
   }
   VAR_11 = VAR_10+VAR_12;



   if ((* VAR_8 = FUNC_4(* VAR_8,VAR_11+1)) != ((void*)0)) {
    if (FUNC_3((*VAR_8)+VAR_10,VAR_0,VAR_12)) {

     if (VAR_11 > 0 && (*VAR_8)[VAR_11 - 1] == '\r')
      VAR_11--;
     (* VAR_8)[VAR_11]='\0';
     VAR_0 += VAR_12;
     return VAR_5;
    }
    FUNC_2(* VAR_8);
    * VAR_8 = ((void*)0);
    FUNC_1("could not copy memory (1).");
    return VAR_4;
   }
   FUNC_1("could not allocate memory (1).");
   return VAR_4;
  } else {
   ++VAR_9;
   goto next_character;
  }
 } else {

  VAR_12 = VAR_1 - VAR_0;
  if (VAR_10>VAR_6-VAR_12-1) {

   FUNC_1("limit reached (missing %i).",VAR_10-(VAR_6-VAR_12-1));
   return VAR_4;
  }
  VAR_11 = VAR_10+VAR_12;
  if ((* VAR_8 = FUNC_4(* VAR_8,VAR_11+1)) != ((void*)0)) {
   if (FUNC_3((*VAR_8)+VAR_10,VAR_0,VAR_12)) {
    (* VAR_8)[VAR_11]='\0';
    VAR_0 = VAR_1;
    return VAR_5;
   }
   FUNC_2(* VAR_8);
   * VAR_8 = ((void*)0);
   FUNC_1("could not copy memory (2).");
   return VAR_4;
  }

  FUNC_1("could not allocate memory (2).");
  return VAR_4;
 }
}
