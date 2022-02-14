
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int synctex_io_mode_t ;
typedef scalar_t__ synctex_bool_t ;
typedef int gzFile ;


 int FUNC_0 (char) ;
 int FUNC_1 (char const*,char**,int *,scalar_t__,int *) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (size_t) ;
 char* FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;

int FUNC_8(const char * VAR_0, const char * VAR_1, char ** VAR_2, gzFile * VAR_3, synctex_bool_t VAR_4, synctex_io_mode_t * VAR_5) {


 int VAR_6 = FUNC_1(VAR_0,VAR_2,VAR_3,VAR_4,VAR_5);
 if ((VAR_6 || !*VAR_3) && VAR_1 && FUNC_7(VAR_1)) {
  char * VAR_7;
  const char *VAR_8;
  size_t VAR_9;
  synctex_bool_t VAR_10;
  VAR_7 = ((void*)0);
  VAR_8 = FUNC_2(VAR_0);
  VAR_9 = FUNC_7(VAR_1)+FUNC_7(VAR_8)+2;
  VAR_10 = FUNC_3(VAR_1);
  if (!VAR_10) {
   VAR_9 += FUNC_7(VAR_0);
  }
  if ((VAR_7 = (char *)FUNC_4(VAR_9))) {
   if (VAR_10) {
    VAR_7[0] = '\0';
   } else {
    if (VAR_7 != FUNC_6(VAR_7,VAR_0)) {
     return -4;
    }
    VAR_7[VAR_8-VAR_0]='\0';
   }
   if (VAR_7 == FUNC_5(VAR_7,VAR_1)) {

    if (!FUNC_0(VAR_7[FUNC_7(VAR_1)-1])) {
     if (VAR_7 != FUNC_5(VAR_7,"/")) {
      return -2;
     }
    }

    if (VAR_7 != FUNC_5(VAR_7,VAR_8)) {
     return -3;
    }
    return FUNC_1(VAR_7,VAR_2,VAR_3,VAR_4,VAR_5);
   }
  }
  return -1;
 }
 return VAR_6;


}
