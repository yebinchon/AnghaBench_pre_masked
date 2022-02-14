
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nData; scalar_t__ iLastOffset; scalar_t__ iLastPos; scalar_t__ iLastColumn; int iType; int * pData; } ;
typedef int DocListType ;
typedef TYPE_1__ DocList ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static void FUNC_2(DocList *VAR_0, DocListType VAR_1,
                        const char *VAR_2, int VAR_3){
  VAR_0->nData = VAR_3;
  if( VAR_3>0 ){
    VAR_0->pData = FUNC_0(VAR_3);
    FUNC_1(VAR_0->pData, VAR_2, VAR_3);
  } else {
    VAR_0->pData = ((void*)0);
  }
  VAR_0->iType = VAR_1;
  VAR_0->iLastColumn = 0;
  VAR_0->iLastPos = VAR_0->iLastOffset = 0;
}
