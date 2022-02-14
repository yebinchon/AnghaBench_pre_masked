
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* xRealloc ) (void*,int) ;} ;
struct TYPE_4__ {int iOomCntdown; scalar_t__ nOomFault; TYPE_1__ sOrigMem; int bOomOnce; scalar_t__ bOomEnable; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (void*,int) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1, int VAR_2){
  if( VAR_2>0 && VAR_0.bOomEnable && VAR_0.iOomCntdown>0 ){
    VAR_0.iOomCntdown--;
    if( VAR_0.iOomCntdown==0 ){
      if( VAR_0.nOomFault==0 ) FUNC_0();
      VAR_0.nOomFault++;
      if( !VAR_0.bOomOnce ) VAR_0.iOomCntdown = 1;
      return 0;
    }
  }
  return VAR_0.sOrigMem.xRealloc(VAR_1, VAR_2);
}
