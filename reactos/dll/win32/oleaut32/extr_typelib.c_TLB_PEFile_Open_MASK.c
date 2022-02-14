
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int refs; TYPE_2__ IUnknown_iface; int * typelib_base; int * typelib_resource; int * dll; int * typelib_global; } ;
typedef TYPE_1__ TLB_PEFile ;
typedef int * LPVOID ;
typedef int LPCWSTR ;
typedef TYPE_2__ IUnknown ;
typedef int INT ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 TYPE_1__* FUNC_8 (int) ;

__attribute__((used)) static HRESULT FUNC_9(LPCWSTR VAR_8, INT VAR_9, LPVOID *VAR_10, DWORD *VAR_11, IUnknown **VAR_12)
{
    TLB_PEFile *VAR_13;
    HRESULT VAR_14 = VAR_7;

    VAR_13 = FUNC_8(sizeof(TLB_PEFile));
    if (!VAR_13)
        return VAR_2;

    VAR_13->IUnknown_iface.lpVtbl = &VAR_6;
    VAR_13->refs = 1;
    VAR_13->dll = ((void*)0);
    VAR_13->typelib_resource = ((void*)0);
    VAR_13->typelib_global = ((void*)0);
    VAR_13->typelib_base = ((void*)0);

    VAR_13->dll = FUNC_1(VAR_8, 0, VAR_0 |
                    VAR_3 | VAR_4);

    if (VAR_13->dll)
    {
        static const WCHAR VAR_15[] = {'T','Y','P','E','L','I','B',0};
        VAR_13->typelib_resource = FUNC_0(VAR_13->dll, FUNC_4(VAR_9), VAR_15);
        if (VAR_13->typelib_resource)
        {
            VAR_13->typelib_global = FUNC_2(VAR_13->dll, VAR_13->typelib_resource);
            if (VAR_13->typelib_global)
            {
                VAR_13->typelib_base = FUNC_3(VAR_13->typelib_global);

                if (VAR_13->typelib_base)
                {
                    *VAR_11 = FUNC_5(VAR_13->dll, VAR_13->typelib_resource);
                    *VAR_10 = VAR_13->typelib_base;
                    *VAR_12 = &VAR_13->IUnknown_iface;
                    return VAR_5;
                }
            }
        }

        FUNC_7("No TYPELIB resource found\n");
        VAR_14 = VAR_1;
    }

    FUNC_6(&VAR_13->IUnknown_iface);
    return VAR_14;
}
