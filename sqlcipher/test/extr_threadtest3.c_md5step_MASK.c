
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_5__ {int isInit; } ;
typedef TYPE_1__ MD5Context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int ) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(sqlite3_context *VAR_0, int VAR_1, sqlite3_value **VAR_2){
  MD5Context *VAR_3;
  int VAR_4;
  if( VAR_1<1 ) return;
  VAR_3 = FUNC_2(VAR_0, sizeof(*VAR_3));
  if( VAR_3==0 ) return;
  if( !VAR_3->isInit ){
    FUNC_0(VAR_3);
  }
  for(VAR_4=0; VAR_4<VAR_1; VAR_4++){
    const char *VAR_5 = (char*)FUNC_3(VAR_2[VAR_4]);
    if( VAR_5 ){
      FUNC_1(VAR_3, (unsigned char*)VAR_5, FUNC_4(VAR_5));
    }
  }
}
