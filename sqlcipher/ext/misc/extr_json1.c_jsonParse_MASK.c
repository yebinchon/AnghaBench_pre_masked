
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_6__ {char const* zJson; scalar_t__ iDepth; scalar_t__ oom; } ;
typedef TYPE_1__ JsonParse ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (char const) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
  JsonParse *VAR_0,
  sqlite3_context *VAR_1,
  const char *VAR_2
){
  int VAR_3;
  FUNC_3(VAR_0, 0, sizeof(*VAR_0));
  if( VAR_2==0 ) return 1;
  VAR_0->zJson = VAR_2;
  VAR_3 = FUNC_2(VAR_0, 0);
  if( VAR_0->oom ) VAR_3 = -1;
  if( VAR_3>0 ){
    FUNC_0( VAR_0->iDepth==0 );
    while( FUNC_4(VAR_2[VAR_3]) ) VAR_3++;
    if( VAR_2[VAR_3] ) VAR_3 = -1;
  }
  if( VAR_3<=0 ){
    if( VAR_1!=0 ){
      if( VAR_0->oom ){
        FUNC_6(VAR_1);
      }else{
        FUNC_5(VAR_1, "malformed JSON", -1);
      }
    }
    FUNC_1(VAR_0);
    return 1;
  }
  return 0;
}
