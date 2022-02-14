
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ exclusiveMode; int pWal; int tempFile; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(Pager *VAR_3, int VAR_4){
  FUNC_0( VAR_4==VAR_2
            || VAR_4==VAR_1
            || VAR_4==VAR_0 );
  FUNC_0( VAR_2<0 );
  FUNC_0( VAR_1>=0 && VAR_0>=0 );
  FUNC_0( VAR_3->exclusiveMode || 0==FUNC_1(VAR_3->pWal) );
  if( VAR_4>=0 && !VAR_3->tempFile && !FUNC_1(VAR_3->pWal) ){
    VAR_3->exclusiveMode = (u8)VAR_4;
  }
  return (int)VAR_3->exclusiveMode;
}
