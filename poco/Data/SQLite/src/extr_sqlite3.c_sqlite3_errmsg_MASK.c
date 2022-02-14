
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pErr; int mutex; scalar_t__ errCode; scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;

const char *FUNC_7(sqlite3 *VAR_2){
  const char *VAR_3;
  if( !VAR_2 ){
    return FUNC_1(VAR_1);
  }
  if( !FUNC_2(VAR_2) ){
    return FUNC_1(VAR_0);
  }
  FUNC_3(VAR_2->mutex);
  if( VAR_2->mallocFailed ){
    VAR_3 = FUNC_1(VAR_1);
  }else{
    FUNC_6( VAR_2->pErr==0 );
    VAR_3 = VAR_2->errCode ? (char*)FUNC_5(VAR_2->pErr) : 0;
    FUNC_0( !VAR_2->mallocFailed );
    if( VAR_3==0 ){
      VAR_3 = FUNC_1(VAR_2->errCode);
    }
  }
  FUNC_4(VAR_2->mutex);
  return VAR_3;
}
