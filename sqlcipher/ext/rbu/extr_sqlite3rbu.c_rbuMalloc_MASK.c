
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_int64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(sqlite3rbu *VAR_2, sqlite3_int64 VAR_3){
  void *VAR_4 = 0;
  if( VAR_2->rc==VAR_1 ){
    FUNC_0( VAR_3>0 );
    VAR_4 = FUNC_2(VAR_3);
    if( VAR_4==0 ){
      VAR_2->rc = VAR_0;
    }else{
      FUNC_1(VAR_4, 0, VAR_3);
    }
  }
  return VAR_4;
}
