
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {int iRowid; scalar_t__ iStep; int iValue; scalar_t__ isDesc; } ;
typedef TYPE_1__ series_cursor ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab_cursor *VAR_1){
  series_cursor *VAR_2 = (series_cursor*)VAR_1;
  if( VAR_2->isDesc ){
    VAR_2->iValue -= VAR_2->iStep;
  }else{
    VAR_2->iValue += VAR_2->iStep;
  }
  VAR_2->iRowid++;
  return VAR_0;
}
