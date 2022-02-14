
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_3__ {int bErr; int bStatic; char* zBuf; scalar_t__ nUsed; } ;
typedef TYPE_1__ JsonString ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_6(sqlite3_context *VAR_4, int VAR_5){
  JsonString *VAR_6;
  VAR_6 = (JsonString*)FUNC_2(VAR_4, 0);
  if( VAR_6 ){
    FUNC_1(VAR_6, '}');
    if( VAR_6->bErr ){
      if( VAR_6->bErr==1 ) FUNC_3(VAR_4);
      FUNC_0( VAR_6->bStatic );
    }else if( VAR_5 ){
      FUNC_5(VAR_4, VAR_6->zBuf, (int)VAR_6->nUsed,
                          VAR_6->bStatic ? VAR_2 : VAR_3);
      VAR_6->bStatic = 1;
    }else{
      FUNC_5(VAR_4, VAR_6->zBuf, (int)VAR_6->nUsed, VAR_2);
      VAR_6->nUsed--;
    }
  }else{
    FUNC_5(VAR_4, "{}", 2, VAR_1);
  }
  FUNC_4(VAR_4, VAR_0);
}
