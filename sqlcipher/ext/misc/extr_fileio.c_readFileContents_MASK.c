
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (void*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int *,int ,int) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int *,void*,int,int (*) (void*)) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(sqlite3_context *VAR_4, const char *VAR_5){
  FILE *VAR_6;
  sqlite3_int64 VAR_7;
  void *VAR_8;
  sqlite3 *VAR_9;
  int VAR_10;

  VAR_6 = FUNC_1(VAR_5, "rb");
  if( VAR_6==0 ){

    return;
  }
  FUNC_3(VAR_6, 0, VAR_0);
  VAR_7 = FUNC_4(VAR_6);
  FUNC_5(VAR_6);
  VAR_9 = FUNC_6(VAR_4);
  VAR_10 = FUNC_8(VAR_9, VAR_2, -1);
  if( VAR_7>VAR_10 ){
    FUNC_11(VAR_4, VAR_3);
    FUNC_0(VAR_6);
    return;
  }
  VAR_8 = FUNC_9( VAR_7 ? VAR_7 : 1 );
  if( VAR_8==0 ){
    FUNC_12(VAR_4);
    FUNC_0(VAR_6);
    return;
  }
  if( VAR_7==(sqlite3_int64)FUNC_2(VAR_8, 1, (size_t)VAR_7, VAR_6) ){
    FUNC_10(VAR_4, VAR_8, VAR_7, FUNC_7);
  }else{
    FUNC_11(VAR_4, VAR_1);
    FUNC_7(VAR_8);
  }
  FUNC_0(VAR_6);
}
