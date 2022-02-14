
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int iType; } ;
struct TYPE_8__ {scalar_t__ iEndOffset; scalar_t__ iStartOffset; scalar_t__ iPosition; scalar_t__ iColumn; int iType; int nData; int pData; } ;
typedef TYPE_1__ PLReader ;
typedef TYPE_2__ DLReader ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(PLReader *VAR_0, DLReader *VAR_1){
  VAR_0->pData = FUNC_0(VAR_1);
  VAR_0->nData = FUNC_1(VAR_1);
  VAR_0->iType = VAR_1->iType;
  VAR_0->iColumn = 0;
  VAR_0->iPosition = 0;
  VAR_0->iStartOffset = 0;
  VAR_0->iEndOffset = 0;
  FUNC_2(VAR_0);
}
