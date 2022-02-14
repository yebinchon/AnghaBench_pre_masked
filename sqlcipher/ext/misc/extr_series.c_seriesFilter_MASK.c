
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_2__ {int mnValue; int mxValue; int iStep; int isDesc; int iValue; int iRowid; } ;
typedef TYPE_1__ series_cursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  series_cursor *VAR_7 = (series_cursor *)VAR_2;
  int VAR_8 = 0;
  if( VAR_3 & 1 ){
    VAR_7->mnValue = FUNC_0(VAR_6[VAR_8++]);
  }else{
    VAR_7->mnValue = 0;
  }
  if( VAR_3 & 2 ){
    VAR_7->mxValue = FUNC_0(VAR_6[VAR_8++]);
  }else{
    VAR_7->mxValue = 0xffffffff;
  }
  if( VAR_3 & 4 ){
    VAR_7->iStep = FUNC_0(VAR_6[VAR_8++]);
    if( VAR_7->iStep<1 ) VAR_7->iStep = 1;
  }else{
    VAR_7->iStep = 1;
  }
  for(VAR_8=0; VAR_8<VAR_5; VAR_8++){
    if( FUNC_1(VAR_6[VAR_8])==VAR_0 ){


      VAR_7->mnValue = 1;
      VAR_7->mxValue = 0;
      break;
    }
  }
  if( VAR_3 & 8 ){
    VAR_7->isDesc = 1;
    VAR_7->iValue = VAR_7->mxValue;
    if( VAR_7->iStep>0 ){
      VAR_7->iValue -= (VAR_7->mxValue - VAR_7->mnValue)%VAR_7->iStep;
    }
  }else{
    VAR_7->isDesc = 0;
    VAR_7->iValue = VAR_7->mnValue;
  }
  VAR_7->iRowid = 1;
  return VAR_1;
}
