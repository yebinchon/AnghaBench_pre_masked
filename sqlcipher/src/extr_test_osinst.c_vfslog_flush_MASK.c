
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nBuf; int iOffset; int aBuf; TYPE_4__* pLog; } ;
typedef TYPE_2__ VfslogVfs ;
struct TYPE_7__ {TYPE_1__* pMethods; } ;
struct TYPE_5__ {int (* xWrite ) (TYPE_4__*,int ,scalar_t__,int ) ;} ;


 int FUNC_0 (TYPE_4__*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(VfslogVfs *VAR_0){
  if( VAR_0->nBuf ){
    VAR_0->pLog->pMethods->xWrite(VAR_0->pLog, VAR_0->aBuf, VAR_0->nBuf, VAR_0->iOffset);
    VAR_0->iOffset += VAR_0->nBuf;
    VAR_0->nBuf = 0;
  }






}
