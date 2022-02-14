
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int TestDb ;
typedef int DbParameters ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int,int,int*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int *,int,int,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int*) ;
 int FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (int *,char*,char*,int*) ;

__attribute__((used)) static void FUNC_8(
  DbParameters *VAR_1,
  TestDb *VAR_2,
  void (*VAR_3)(void *),
  void *VAR_4,
  int VAR_5,
  int *VAR_6
){
  const int VAR_7 = FUNC_3(VAR_1);
  int VAR_8;

  if( FUNC_4(VAR_2) ) FUNC_5(VAR_2, 1, VAR_6);
  for(VAR_8=1; *VAR_6==0 && VAR_8<=VAR_7; VAR_8++){
    char VAR_9[VAR_0];
    char VAR_10[VAR_0];
    u32 VAR_11 = 0;

    VAR_11 = FUNC_0(VAR_1, VAR_2, VAR_8, VAR_5, VAR_6);
    if( VAR_11 ){
      if( VAR_3 && VAR_8==1 ) VAR_3(VAR_4);
      FUNC_1(VAR_11, VAR_9);
      FUNC_2(VAR_1, VAR_8, VAR_5, VAR_10);
      FUNC_7(VAR_2, VAR_10, VAR_9, VAR_6);
    }
  }
  if( FUNC_4(VAR_2) ) FUNC_6(VAR_2, 0, VAR_6);
}
