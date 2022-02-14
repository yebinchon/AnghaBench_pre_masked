
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ magic; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {scalar_t__ xLog; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_4__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

int FUNC_3(sqlite3 *VAR_2){
  u32 VAR_3;
  if( VAR_2==0 ){
    FUNC_0("NULL");
    return 0;
  }
  VAR_3 = VAR_2->magic;
  if( VAR_3!=VAR_0 ){
    if( FUNC_1(VAR_2) ){
      FUNC_2( VAR_1.xLog!=0 );
      FUNC_0("unopened");
    }
    return 0;
  }else{
    return 1;
  }
}
