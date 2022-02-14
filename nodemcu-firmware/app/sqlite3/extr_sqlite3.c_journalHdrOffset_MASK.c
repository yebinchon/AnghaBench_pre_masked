
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_4__ {int journalOff; } ;
typedef TYPE_1__ Pager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static i64 FUNC_2(Pager *VAR_0){
  i64 VAR_1 = 0;
  i64 VAR_2 = VAR_0->journalOff;
  if( VAR_2 ){
    VAR_1 = ((VAR_2-1)/FUNC_0(VAR_0) + 1) * FUNC_0(VAR_0);
  }
  FUNC_1( VAR_1%FUNC_0(VAR_0)==0 );
  FUNC_1( VAR_1>=VAR_2 );
  FUNC_1( (VAR_1-VAR_2)<FUNC_0(VAR_0) );
  return VAR_1;
}
