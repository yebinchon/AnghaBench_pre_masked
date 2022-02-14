
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_2__ {char* zBuf; int nUsed; } ;
typedef TYPE_1__ JsonString ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,size_t) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  int VAR_3;
  int VAR_4 = 0;
  char *VAR_5;
  JsonString *VAR_6;
  FUNC_1(VAR_1);
  FUNC_1(VAR_2);
  VAR_6 = (JsonString*)FUNC_4(VAR_0, 0);





  VAR_5 = VAR_6->zBuf;
  for(VAR_3=1; VAR_5[VAR_3]!=',' || VAR_4; VAR_3++){
    FUNC_2( VAR_3<VAR_6->nUsed );
    if( VAR_5[VAR_3]=='"' ){
      VAR_4 = !VAR_4;
    }else if( VAR_5[VAR_3]=='\\' ){
      VAR_3++;
    }
  }
  VAR_6->nUsed -= VAR_3;
  FUNC_3(&VAR_5[1], &VAR_5[VAR_3+1], (size_t)VAR_6->nUsed-1);
}
