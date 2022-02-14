
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iType; int nData; int pData; } ;
typedef int DocListReader ;
typedef TYPE_1__ DocList ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(DocList *VAR_0, DocList *VAR_1){
  DocListReader VAR_2;

  FUNC_0( VAR_0!=((void*)0) && VAR_1!=((void*)0) );
  FUNC_0( VAR_0->iType==VAR_1->iType);

  FUNC_3(&VAR_2, VAR_0);
  FUNC_1(&VAR_2, FUNC_2(VAR_1),
                       VAR_1->pData, VAR_1->nData);
}
