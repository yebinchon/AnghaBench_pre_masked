
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mpg123_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*) ;
 char* FUNC_1 (int const*,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int * FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ,int ,int) ;
 int FUNC_10 (int *,unsigned char*,size_t,size_t*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(const uint8_t* VAR_3, size_t VAR_4) {
  static bool VAR_5 = 0;
  if (!VAR_5) {
    FUNC_6();
    VAR_5 = 1;
  }
  char* VAR_6 = FUNC_1(VAR_3, VAR_4);
  if (VAR_6 == ((void*)0)) {
    return 0;
  }

  size_t VAR_7 = VAR_4 * 2;
  unsigned char* VAR_8 = (unsigned char*)FUNC_3(VAR_7);
  if (VAR_8 == ((void*)0)) {
    FUNC_2(VAR_6);
    return 0;
  }

  int VAR_9;
  mpg123_handle* VAR_10 = FUNC_7(((void*)0), &VAR_9);
  if (VAR_10 == ((void*)0) || FUNC_9(VAR_10,
      VAR_0, VAR_2, 0.) != VAR_1) {
    FUNC_0(VAR_8);
    FUNC_2(VAR_6);
    return 0;
  }

  if (FUNC_8(VAR_10, VAR_6) == VAR_1) {
    int VAR_11;
    do {
      size_t VAR_12;
      VAR_11 = FUNC_10(VAR_10, VAR_8, VAR_7, &VAR_12);
    } while (VAR_11 == VAR_1 && FUNC_12(VAR_10) <= 10000
          && FUNC_11(VAR_10) <= 1<<20);
  }

  FUNC_4(VAR_10);
  FUNC_5(VAR_10);
  FUNC_0(VAR_8);
  FUNC_2(VAR_6);
  return 0;
}
