
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pData; } ;
struct TYPE_5__ {int iLastColumn; int iLastPos; int p; TYPE_2__* pDoclist; } ;
typedef TYPE_1__ DocListReader ;
typedef TYPE_2__ DocList ;



__attribute__((used)) static void FUNC_0(DocListReader *VAR_0, DocList *VAR_1){
  VAR_0->pDoclist = VAR_1;
  if( VAR_1!=((void*)0) ){
    VAR_0->p = VAR_1->pData;
  }
  VAR_0->iLastColumn = -1;
  VAR_0->iLastPos = -1;
}
