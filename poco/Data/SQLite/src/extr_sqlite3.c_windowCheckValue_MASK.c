
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vdbe ;
typedef int Parse ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int const,int,int,int) ;
 int FUNC_11 (int *,int ,int ,int,int ,char*,int ) ;
 int FUNC_12 (int *,void*,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(Parse *VAR_10, int VAR_11, int VAR_12){
  static const char *VAR_13[] = {
    "frame starting offset must be a non-negative integer",
    "frame ending offset must be a non-negative integer",
    "second argument to nth_value must be a positive integer",
    "frame starting offset must be a non-negative number",
    "frame ending offset must be a non-negative number",
  };
  static int VAR_14[] = { 129, 129, 128, 129, 129 };
  Vdbe *VAR_15 = FUNC_6(VAR_10);
  int VAR_16 = FUNC_5(VAR_10);
  FUNC_4( VAR_12>=0 && VAR_12<FUNC_0(VAR_13) );
  FUNC_9(VAR_15, VAR_2, 0, VAR_16);
  if( VAR_12>=VAR_9 ){
    int VAR_17 = FUNC_5(VAR_10);
    FUNC_11(VAR_15, VAR_4, 0, VAR_17, 0, "", VAR_5);
    FUNC_10(VAR_15, 129, VAR_17, FUNC_14(VAR_15)+2, VAR_11);
    FUNC_13(VAR_15, VAR_6|VAR_8);
    FUNC_1(VAR_15);
    FUNC_4( VAR_12==3 || VAR_12==4 );
    FUNC_2(VAR_15, VAR_12==3);
    FUNC_2(VAR_15, VAR_12==4);
  }else{
    FUNC_9(VAR_15, VAR_3, VAR_11, FUNC_14(VAR_15)+2);
    FUNC_1(VAR_15);
    FUNC_4( VAR_12==0 || VAR_12==1 || VAR_12==2 );
    FUNC_2(VAR_15, VAR_12==0);
    FUNC_2(VAR_15, VAR_12==1);
    FUNC_2(VAR_15, VAR_12==2);
  }
  FUNC_10(VAR_15, VAR_14[VAR_12], VAR_16, FUNC_14(VAR_15)+2, VAR_11);
  FUNC_3(VAR_15, VAR_12==0);
  FUNC_3(VAR_15, VAR_12==1);
  FUNC_3(VAR_15, VAR_12==2);
  FUNC_3(VAR_15, VAR_12==3);
  FUNC_3(VAR_15, VAR_12==4);
  FUNC_7(VAR_10);
  FUNC_9(VAR_15, VAR_1, VAR_7, VAR_0);
  FUNC_12(VAR_15, (void*)VAR_13[VAR_12], VAR_5);
  FUNC_8(VAR_10, VAR_16);
}
