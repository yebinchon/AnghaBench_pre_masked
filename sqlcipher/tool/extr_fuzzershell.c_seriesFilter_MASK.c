
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_2__ {int mnValue; int mxValue; int iStep; int isDesc; int iValue; int iRowid; } ;
typedef TYPE_1__ series_cursor ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  series_cursor *VAR_6 = (series_cursor *)VAR_1;
  int VAR_7 = 0;
  if( VAR_2 & 1 ){
    VAR_6->mnValue = FUNC_0(VAR_5[VAR_7++]);
  }else{
    VAR_6->mnValue = 0;
  }
  if( VAR_2 & 2 ){
    VAR_6->mxValue = FUNC_0(VAR_5[VAR_7++]);
  }else{
    VAR_6->mxValue = 0xffffffff;
  }
  if( VAR_2 & 4 ){
    VAR_6->iStep = FUNC_0(VAR_5[VAR_7++]);
    if( VAR_6->iStep<1 ) VAR_6->iStep = 1;
  }else{
    VAR_6->iStep = 1;
  }
  if( VAR_2 & 8 ){
    VAR_6->isDesc = 1;
    VAR_6->iValue = VAR_6->mxValue;
    if( VAR_6->iStep>0 ){
      VAR_6->iValue -= (VAR_6->mxValue - VAR_6->mnValue)%VAR_6->iStep;
    }
  }else{
    VAR_6->isDesc = 0;
    VAR_6->iValue = VAR_6->mnValue;
  }
  VAR_6->iRowid = 1;
  return VAR_0;
}
