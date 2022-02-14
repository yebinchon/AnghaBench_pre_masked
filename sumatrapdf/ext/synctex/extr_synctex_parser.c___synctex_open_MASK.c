
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int synctex_io_mode_t ;
typedef scalar_t__ synctex_bool_t ;
typedef int * gzFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char**,size_t) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,char const*) ;
 int FUNC_11 (char const*) ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;

int FUNC_12(const char * VAR_5, char ** VAR_6, gzFile * VAR_7, synctex_bool_t VAR_8, synctex_io_mode_t * VAR_9) {
 if (VAR_6 && VAR_7 && VAR_9) {

        char * VAR_10 = ((void*)0);
        gzFile VAR_11 = ((void*)0);
        char * VAR_12 = ((void*)0);
  size_t VAR_13 = 0;
        synctex_io_mode_t VAR_14 = *VAR_9;
  const char * VAR_15 = FUNC_2(VAR_14);

  VAR_13 = FUNC_11(VAR_5)+FUNC_11(VAR_3)+FUNC_11(VAR_4)+1;
  VAR_10 = (char *)FUNC_7(VAR_13);
  if (((void*)0) == VAR_10) {
   FUNC_1("!  __synctex_open: Memory problem (1)\n");
   return 1;
  }


  if (VAR_10 != FUNC_10(VAR_10,VAR_5)) {
   FUNC_1("!  __synctex_open: Copy problem\n");
return_on_error:
   FUNC_4(VAR_10);
   FUNC_4(VAR_12);
   return 2;
  }

  FUNC_3(VAR_10);
  if (!FUNC_11(VAR_10)) {
   goto return_on_error;
  }

  if (VAR_8) {
   char * VAR_16 = ((void*)0);
   if (FUNC_0(VAR_10,&VAR_16,VAR_13) || (((void*)0) == VAR_16)) {

    goto return_on_error;
   }
   VAR_12 = VAR_10;
   VAR_10 = VAR_16;
  }

  if (VAR_10 != FUNC_9(VAR_10,VAR_3)){
   FUNC_1("!  __synctex_open: Concatenation problem (can't add suffix '%s')\n",VAR_3);
   goto return_on_error;
  }

  if (VAR_12 && (VAR_12 != FUNC_9(VAR_12,VAR_3))){
   FUNC_4(VAR_12);
   VAR_12 = ((void*)0);
  }
  if (((void*)0) == (VAR_11 = FUNC_6(VAR_10,VAR_15))) {

   if (VAR_1 != VAR_0) {

    FUNC_1("SyncTeX: could not open %s, error %i\n",VAR_10,VAR_1);
    goto return_on_error;
   }

   if (VAR_10 != FUNC_9(VAR_10,VAR_4)){
    FUNC_1("!  __synctex_open: Concatenation problem (can't add suffix '%s')\n",VAR_4);
    goto return_on_error;
   }
   VAR_14 |= VAR_2;
   VAR_15 = FUNC_2(VAR_14);

   if (VAR_12 && (VAR_12 != FUNC_9(VAR_12,VAR_4))){
    FUNC_4(VAR_12);
    VAR_12 = ((void*)0);
   }
   if (((void*)0) == (VAR_11 = FUNC_6(VAR_10,VAR_15))) {

    if (VAR_1 != VAR_0) {

     FUNC_1("SyncTeX: could not open %s, error %i\n",VAR_10,VAR_1);
    }
    goto return_on_error;
   }
  }


  if (VAR_12) {
   FUNC_5(VAR_11);
   if (FUNC_8(VAR_10,VAR_12)) {
    FUNC_1("SyncTeX: could not rename %s to %s, error %i\n",VAR_10,VAR_12,VAR_1);

    if (((void*)0) == (VAR_11 = FUNC_6(VAR_10,VAR_15))) {

     if (VAR_1 != VAR_0) {


      FUNC_1("SyncTeX: could not open again %s, error %i\n",VAR_10,VAR_1);
     }
     goto return_on_error;
    }
   } else {

    if (((void*)0) == (VAR_11 = FUNC_6(VAR_12,VAR_15))) {

     if (VAR_1 != VAR_0) {

      FUNC_1("SyncTeX: could not open renamed %s, error %i\n",VAR_12,VAR_1);
     }
     goto return_on_error;
    }

    FUNC_4(VAR_10);
    VAR_10 = VAR_12;
    VAR_12 = ((void*)0);
   }
  }

        * VAR_7 = VAR_11;
        * VAR_9 = VAR_14;
        * VAR_6 = VAR_10;
  return 0;
 }
 return 3;
}
