
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nCount; scalar_t__ nFail; scalar_t__ bPersist; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(void){
  VAR_0.nCount--;
  if( VAR_0.nCount==0 || (VAR_0.nFail && VAR_0.bPersist) ){
    VAR_0.nFail++;
    return 1;
  }
  return 0;
}
