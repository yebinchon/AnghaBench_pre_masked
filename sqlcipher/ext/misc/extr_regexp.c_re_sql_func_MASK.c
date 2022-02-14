
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int ReCompiled ;


 char* FUNC_0 (int **,char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int *,void (*) (void*)) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  ReCompiled *VAR_3;
  const char *VAR_4;
  const unsigned char *VAR_5;
  const char *VAR_6;
  int VAR_7 = 0;

  VAR_3 = FUNC_3(VAR_0, 0);
  if( VAR_3==0 ){
    VAR_4 = (const char*)FUNC_8(VAR_2[0]);
    if( VAR_4==0 ) return;
    VAR_6 = FUNC_0(&VAR_3, VAR_4, 0);
    if( VAR_6 ){
      FUNC_1(VAR_3);
      FUNC_4(VAR_0, VAR_6, -1);
      return;
    }
    if( VAR_3==0 ){
      FUNC_5(VAR_0);
      return;
    }
    VAR_7 = 1;
  }
  VAR_5 = (const unsigned char*)FUNC_8(VAR_2[1]);
  if( VAR_5!=0 ){
    FUNC_6(VAR_0, FUNC_2(VAR_3, VAR_5, -1));
  }
  if( VAR_7 ){
    FUNC_7(VAR_0, 0, VAR_3, (void(*)(void*))FUNC_1);
  }
}
