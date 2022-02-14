
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {void (* xWriteHook ) (void*,int,VAR_0,int,int) ;void* pWriteCtx; } ;
typedef TYPE_1__ LsmDb ;


 scalar_t__ FUNC_0 (int *) ;

void FUNC_1(
  TestDb *VAR_1,
  void (*VAR_2)(void *, int, VAR_3, int, int),
  void *VAR_4
){
  if( FUNC_0(VAR_1) ){
    LsmDb *VAR_5 = (LsmDb *)VAR_1;
    VAR_5->xWriteHook = VAR_2;
    VAR_5->pWriteCtx = VAR_4;
  }
}
