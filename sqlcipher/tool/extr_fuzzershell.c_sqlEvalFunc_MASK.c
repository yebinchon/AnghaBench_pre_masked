
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
struct EvalResult {char* zSep; int szSep; char* z; scalar_t__ nUsed; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct EvalResult*,int ,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,struct EvalResult*,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int (*) (char*)) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  const char *VAR_5;
  sqlite3 *VAR_6;
  char *VAR_7 = 0;
  int VAR_8;
  struct EvalResult VAR_9;

  FUNC_0(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.zSep = " ";
  VAR_5 = (const char*)FUNC_7(VAR_4[0]);
  if( VAR_5==0 ) return;
  if( VAR_3>1 ){
    VAR_9.zSep = (const char*)FUNC_7(VAR_4[1]);
    if( VAR_9.zSep==0 ) return;
  }
  VAR_9.szSep = (int)FUNC_8(VAR_9.zSep);
  VAR_6 = FUNC_1(VAR_2);
  VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_1, &VAR_9, &VAR_7);
  if( VAR_8!=VAR_0 ){
    FUNC_4(VAR_2, VAR_7, -1);
    FUNC_3(VAR_7);
  }else if( VAR_9.zSep==0 ){
    FUNC_5(VAR_2);
    FUNC_3(VAR_9.z);
  }else{
    FUNC_6(VAR_2, VAR_9.z, (int)VAR_9.nUsed, FUNC_3);
  }
}
