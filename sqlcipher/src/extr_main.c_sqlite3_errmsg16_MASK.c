
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char u16 ;
struct TYPE_6__ {int mutex; int pErr; int errCode; scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

const void *FUNC_7(sqlite3 *VAR_0){
  static const u16 VAR_1[] = {
    'o', 'u', 't', ' ', 'o', 'f', ' ', 'm', 'e', 'm', 'o', 'r', 'y', 0
  };
  static const u16 VAR_2[] = {
    'b', 'a', 'd', ' ', 'p', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', ' ',
    'o', 'r', ' ', 'o', 't', 'h', 'e', 'r', ' ', 'A', 'P', 'I', ' ',
    'm', 'i', 's', 'u', 's', 'e', 0
  };

  const void *VAR_3;
  if( !VAR_0 ){
    return (void *)VAR_1;
  }
  if( !FUNC_3(VAR_0) ){
    return (void *)VAR_2;
  }
  FUNC_4(VAR_0->mutex);
  if( VAR_0->mallocFailed ){
    VAR_3 = (void *)VAR_1;
  }else{
    VAR_3 = FUNC_6(VAR_0->pErr);
    if( VAR_3==0 ){
      FUNC_1(VAR_0, VAR_0->errCode, FUNC_0(VAR_0->errCode));
      VAR_3 = FUNC_6(VAR_0->pErr);
    }





    FUNC_2(VAR_0);
  }
  FUNC_5(VAR_0->mutex);
  return VAR_3;
}
