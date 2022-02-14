
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (void*,long,int,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (long) ;
 int FUNC_8 (int *,void*,long,int (*) (void*)) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const char *VAR_4;
  FILE *VAR_5;
  long VAR_6;
  void *VAR_7;

  VAR_4 = (const char*)FUNC_9(VAR_3[0]);
  if( VAR_4==0 ) return;
  VAR_5 = FUNC_1(VAR_4, "rb");
  if( VAR_5==0 ) return;
  FUNC_3(VAR_5, 0, VAR_0);
  VAR_6 = FUNC_4(VAR_5);
  FUNC_5(VAR_5);
  VAR_7 = FUNC_7( VAR_6 );
  if( VAR_7 && 1==FUNC_2(VAR_7, VAR_6, 1, VAR_5) ){
    FUNC_8(VAR_1, VAR_7, VAR_6, FUNC_6);
  }else{
    FUNC_6(VAR_7);
  }
  FUNC_0(VAR_5);
}
