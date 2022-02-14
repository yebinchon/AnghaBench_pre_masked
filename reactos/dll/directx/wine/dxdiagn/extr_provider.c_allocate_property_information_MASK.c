
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {void* propName; } ;
typedef TYPE_1__ IDxDiagContainerImpl_Property ;


 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (void*,int const*) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static IDxDiagContainerImpl_Property *FUNC_5(const WCHAR *VAR_1)
{
    IDxDiagContainerImpl_Property *VAR_2;

    VAR_2 = FUNC_1(FUNC_0(), VAR_0, sizeof(*VAR_2));
    if (!VAR_2)
        return ((void*)0);

    VAR_2->propName = FUNC_1(FUNC_0(), 0, (FUNC_4(VAR_1) + 1) * sizeof(*VAR_1));
    if (!VAR_2->propName)
    {
        FUNC_2(FUNC_0(), 0, VAR_2);
        return ((void*)0);
    }
    FUNC_3(VAR_2->propName, VAR_1);

    return VAR_2;
}
