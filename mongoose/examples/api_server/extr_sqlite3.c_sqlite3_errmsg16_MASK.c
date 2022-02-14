
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char u16 ;
struct TYPE_4__ {int mutex; scalar_t__ mallocFailed; int pErr; int errCode; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

const void *FUNC_6(sqlite3 *VAR_2){
  static const u16 VAR_3[] = {
    'o', 'u', 't', ' ', 'o', 'f', ' ', 'm', 'e', 'm', 'o', 'r', 'y', 0
  };
  static const u16 VAR_4[] = {
    'l', 'i', 'b', 'r', 'a', 'r', 'y', ' ',
    'r', 'o', 'u', 't', 'i', 'n', 'e', ' ',
    'c', 'a', 'l', 'l', 'e', 'd', ' ',
    'o', 'u', 't', ' ',
    'o', 'f', ' ',
    's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0
  };

  const void *VAR_5;
  if( !VAR_2 ){
    return (void *)VAR_3;
  }
  if( !FUNC_1(VAR_2) ){
    return (void *)VAR_4;
  }
  FUNC_3(VAR_2->mutex);
  if( VAR_2->mallocFailed ){
    VAR_5 = (void *)VAR_3;
  }else{
    VAR_5 = FUNC_5(VAR_2->pErr);
    if( VAR_5==0 ){
      FUNC_2(VAR_2->pErr, -1, FUNC_0(VAR_2->errCode),
           VAR_1, VAR_0);
      VAR_5 = FUNC_5(VAR_2->pErr);
    }





    VAR_2->mallocFailed = 0;
  }
  FUNC_4(VAR_2->mutex);
  return VAR_5;
}
