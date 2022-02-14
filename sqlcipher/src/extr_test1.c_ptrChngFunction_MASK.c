
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const void *VAR_3, *VAR_4;
  const char *VAR_5;
  if( VAR_1!=4 ) return;
  VAR_5 = (const char*)FUNC_4(VAR_2[1]);
  if( VAR_5==0 ) return;
  if( FUNC_6(VAR_5,"text")==0 ){
    VAR_3 = (const void*)FUNC_4(VAR_2[0]);

  }else if( FUNC_6(VAR_5, "text16")==0 ){
    VAR_3 = (const void*)FUNC_5(VAR_2[0]);

  }else if( FUNC_6(VAR_5, "blob")==0 ){
    VAR_3 = (const void*)FUNC_1(VAR_2[0]);
  }else{
    return;
  }
  VAR_5 = (const char*)FUNC_4(VAR_2[2]);
  if( VAR_5==0 ) return;
  if( FUNC_6(VAR_5,"bytes")==0 ){
    FUNC_2(VAR_2[0]);

  }else if( FUNC_6(VAR_5, "bytes16")==0 ){
    FUNC_3(VAR_2[0]);

  }else if( FUNC_6(VAR_5, "noop")==0 ){

  }else{
    return;
  }
  VAR_5 = (const char*)FUNC_4(VAR_2[3]);
  if( VAR_5==0 ) return;
  if( FUNC_6(VAR_5,"text")==0 ){
    VAR_4 = (const void*)FUNC_4(VAR_2[0]);

  }else if( FUNC_6(VAR_5, "text16")==0 ){
    VAR_4 = (const void*)FUNC_5(VAR_2[0]);

  }else if( FUNC_6(VAR_5, "blob")==0 ){
    VAR_4 = (const void*)FUNC_1(VAR_2[0]);
  }else{
    return;
  }
  FUNC_0(VAR_0, VAR_3!=VAR_4);
}
