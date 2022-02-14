
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ magic; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_5__ {scalar_t__ xLog; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int) ;

int FUNC_2(sqlite3 *VAR_4){
  u32 VAR_5;
  VAR_5 = VAR_4->magic;
  if( VAR_5!=VAR_2 &&
      VAR_5!=VAR_1 &&
      VAR_5!=VAR_0 ){
    FUNC_1( VAR_3.xLog!=0 );
    FUNC_0("invalid");
    return 0;
  }else{
    return 1;
  }
}
