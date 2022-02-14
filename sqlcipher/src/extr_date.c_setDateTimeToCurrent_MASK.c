
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_3__ {scalar_t__ iJD; int validJD; } ;
typedef TYPE_1__ DateTime ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(sqlite3_context *VAR_0, DateTime *VAR_1){
  VAR_1->iJD = FUNC_0(VAR_0);
  if( VAR_1->iJD>0 ){
    VAR_1->validJD = 1;
    return 0;
  }else{
    return 1;
  }
}
