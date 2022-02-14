
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {scalar_t__ iValue; scalar_t__ mnValue; scalar_t__ mxValue; scalar_t__ isDesc; } ;
typedef TYPE_1__ series_cursor ;



__attribute__((used)) static int FUNC_0(sqlite3_vtab_cursor *VAR_0){
  series_cursor *VAR_1 = (series_cursor*)VAR_0;
  if( VAR_1->isDesc ){
    return VAR_1->iValue < VAR_1->mnValue;
  }else{
    return VAR_1->iValue > VAR_1->mxValue;
  }
}
