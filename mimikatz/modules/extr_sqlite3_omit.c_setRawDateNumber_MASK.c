
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_3__ {double s; int rawS; int validJD; scalar_t__ iJD; } ;
typedef TYPE_1__ DateTime ;



__attribute__((used)) static void FUNC_0(DateTime *VAR_0, double VAR_1){
  VAR_0->s = VAR_1;
  VAR_0->rawS = 1;
  if( VAR_1>=0.0 && VAR_1<5373484.5 ){
    VAR_0->iJD = (sqlite3_int64)(VAR_1*86400000.0 + 0.5);
    VAR_0->validJD = 1;
  }
}
