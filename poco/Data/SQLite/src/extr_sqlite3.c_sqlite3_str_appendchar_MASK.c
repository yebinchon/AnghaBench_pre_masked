
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nAlloc; char* zText; int nChar; } ;
typedef TYPE_1__ sqlite3_str ;
typedef int i64 ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;

void FUNC_2(sqlite3_str *VAR_0, int VAR_1, char VAR_2){
  FUNC_1( VAR_0->nChar + (i64)VAR_1 > 0x7fffffff );
  if( VAR_0->nChar+(i64)VAR_1 >= VAR_0->nAlloc && (VAR_1 = FUNC_0(VAR_0, VAR_1))<=0 ){
    return;
  }
  while( (VAR_1--)>0 ) VAR_0->zText[VAR_0->nChar++] = VAR_2;
}
