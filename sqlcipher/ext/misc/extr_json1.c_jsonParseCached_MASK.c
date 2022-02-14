
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_8__ {int nJson; char* zJson; scalar_t__ iHold; scalar_t__ nErr; } ;
typedef TYPE_1__ JsonParse ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,TYPE_1__*,void (*) (void*)) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static JsonParse *FUNC_11(
  sqlite3_context *VAR_3,
  sqlite3_value **VAR_4,
  sqlite3_context *VAR_5
){
  const char *VAR_6 = (const char*)FUNC_10(VAR_4[0]);
  int VAR_7 = FUNC_9(VAR_4[0]);
  JsonParse *VAR_8;
  JsonParse *VAR_9 = 0;
  int VAR_10;
  int VAR_11 = 0;
  u32 VAR_12 = 0xffffffff;
  u32 VAR_13 = 0;
  if( VAR_6==0 ) return 0;
  for(VAR_10=0; VAR_10<VAR_1; VAR_10++){
    VAR_8 = (JsonParse*)FUNC_5(VAR_3, VAR_0+VAR_10);
    if( VAR_8==0 ){
      VAR_11 = VAR_10;
      break;
    }
    if( VAR_9==0
     && VAR_8->nJson==VAR_7
     && FUNC_1(VAR_8->zJson,VAR_6,VAR_7)==0
    ){
      VAR_8->nErr = 0;
      VAR_9 = VAR_8;
    }else if( VAR_8->iHold<VAR_12 ){
      VAR_12 = VAR_8->iHold;
      VAR_11 = VAR_10;
    }
    if( VAR_8->iHold>VAR_13 ){
      VAR_13 = VAR_8->iHold;
    }
  }
  if( VAR_9 ){
    VAR_9->nErr = 0;
    VAR_9->iHold = VAR_13+1;
    return VAR_9;
  }
  VAR_8 = FUNC_6( sizeof(*VAR_8) + VAR_7 + 1 );
  if( VAR_8==0 ){
    FUNC_7(VAR_3);
    return 0;
  }
  FUNC_3(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->zJson = (char*)&VAR_8[1];
  FUNC_2((char*)VAR_8->zJson, VAR_6, VAR_7+1);
  if( FUNC_0(VAR_8, VAR_5, VAR_8->zJson) ){
    FUNC_4(VAR_8);
    return 0;
  }
  VAR_8->nJson = VAR_7;
  VAR_8->iHold = VAR_13+1;
  FUNC_8(VAR_3, VAR_0+VAR_11, VAR_8,
                      (void(*)(void*))VAR_2);
  return (JsonParse*)FUNC_5(VAR_3, VAR_0+VAR_11);
}
