
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int properties; int subContainers; void* contName; } ;
typedef TYPE_1__ IDxDiagContainerImpl_Container ;


 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static IDxDiagContainerImpl_Container *FUNC_6(const WCHAR *VAR_1)
{
    IDxDiagContainerImpl_Container *VAR_2;

    VAR_2 = FUNC_1(FUNC_0(), VAR_0, sizeof(*VAR_2));
    if (!VAR_2)
        return ((void*)0);

    if (VAR_1)
    {
        VAR_2->contName = FUNC_1(FUNC_0(), 0, (FUNC_5(VAR_1) + 1) * sizeof(*VAR_1));
        if (!VAR_2->contName)
        {
            FUNC_2(FUNC_0(), 0, VAR_2);
            return ((void*)0);
        }
        FUNC_4(VAR_2->contName, VAR_1);
    }

    FUNC_3(&VAR_2->subContainers);
    FUNC_3(&VAR_2->properties);

    return VAR_2;
}
