
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nSubContainers; int entry; int subContainers; } ;
typedef TYPE_1__ IDxDiagContainerImpl_Container ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(IDxDiagContainerImpl_Container *VAR_0, IDxDiagContainerImpl_Container *VAR_1)
{
    FUNC_0(&VAR_0->subContainers, &VAR_1->entry);
    ++VAR_0->nSubContainers;
}
