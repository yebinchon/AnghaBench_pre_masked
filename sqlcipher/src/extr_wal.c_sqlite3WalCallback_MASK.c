
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ iCallback; } ;
typedef TYPE_1__ Wal ;



int FUNC_0(Wal *VAR_0){
  u32 VAR_1 = 0;
  if( VAR_0 ){
    VAR_1 = VAR_0->iCallback;
    VAR_0->iCallback = 0;
  }
  return (int)VAR_1;
}
