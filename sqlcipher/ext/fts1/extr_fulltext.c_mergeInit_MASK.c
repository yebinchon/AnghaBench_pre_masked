
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ iType; } ;
struct TYPE_7__ {int iOffset; TYPE_2__* pOut; int in; } ;
typedef TYPE_1__ DocListMerge ;
typedef TYPE_2__ DocList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(DocListMerge *VAR_1,
                      DocList *VAR_2, int VAR_3, DocList *VAR_4){
  FUNC_1(&VAR_1->in, VAR_2);
  VAR_1->pOut = VAR_4;
  VAR_1->iOffset = VAR_3;


  FUNC_0( VAR_2==((void*)0) || VAR_2->iType <= VAR_0 );
  FUNC_0( VAR_4->iType <= VAR_0 );
}
