
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vdbe ;
typedef int Parse ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int FUNC_8 (int *,int,int,int,int) ;
 int FUNC_9 (int *,void*,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(Parse *VAR_6, int VAR_7, int VAR_8){
  static const char *VAR_9[] = {
    "frame starting offset must be a non-negative integer",
    "frame ending offset must be a non-negative integer",
    "second argument to nth_value must be a positive integer"
  };
  static int VAR_10[] = { 129, 129, 128 };
  Vdbe *VAR_11 = FUNC_4(VAR_6);
  int VAR_12 = FUNC_3(VAR_6);
  FUNC_2( VAR_8==0 || VAR_8==1 || VAR_8==2 );
  FUNC_7(VAR_11, VAR_2, 0, VAR_12);
  FUNC_7(VAR_11, VAR_3, VAR_7, FUNC_10(VAR_11)+2);
  FUNC_0(VAR_11, VAR_8==0);
  FUNC_0(VAR_11, VAR_8==1);
  FUNC_0(VAR_11, VAR_8==2);
  FUNC_8(VAR_11, VAR_10[VAR_8], VAR_12, FUNC_10(VAR_11)+2, VAR_7);
  FUNC_1(VAR_11, VAR_8==0);
  FUNC_1(VAR_11, VAR_8==1);
  FUNC_1(VAR_11, VAR_8==2);
  FUNC_5(VAR_6);
  FUNC_7(VAR_11, VAR_1, VAR_5, VAR_0);
  FUNC_9(VAR_11, (void*)VAR_9[VAR_8], VAR_4);
  FUNC_6(VAR_6, VAR_12);
}
