
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int Fts3Cursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int *,int **) ;
 int FUNC_3 (int *,int *,char const*,char const*,char const*,int,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  Fts3Cursor *VAR_5;
  const char *VAR_6 = "<b>";
  const char *VAR_7 = "</b>";
  const char *VAR_8 = "<b>...</b>";
  int VAR_9 = -1;
  int VAR_10 = 15;




  FUNC_0( VAR_3>=1 );

  if( VAR_3>6 ){
    FUNC_4(VAR_2,
        "wrong number of arguments to function snippet()", -1);
    return;
  }
  if( FUNC_2(VAR_2, "snippet", VAR_4[0], &VAR_5) ) return;

  switch( VAR_3 ){
    case 6: VAR_10 = FUNC_7(VAR_4[5]);
    case 5: VAR_9 = FUNC_7(VAR_4[4]);
    case 4: VAR_8 = (const char*)FUNC_8(VAR_4[3]);
    case 3: VAR_7 = (const char*)FUNC_8(VAR_4[2]);
    case 2: VAR_6 = (const char*)FUNC_8(VAR_4[1]);
  }
  if( !VAR_8 || !VAR_7 || !VAR_6 ){
    FUNC_5(VAR_2);
  }else if( VAR_10==0 ){
    FUNC_6(VAR_2, "", -1, VAR_1);
  }else if( VAR_0==FUNC_1(VAR_2, VAR_5) ){
    FUNC_3(VAR_2, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
  }
}
