
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int refs; scalar_t__ file; TYPE_2__ IUnknown_iface; int * typelib_base; int * mapping; } ;
typedef TYPE_1__ TLB_Mapping ;
typedef int * LPVOID ;
typedef int LPCWSTR ;
typedef TYPE_2__ IUnknown ;
typedef int HRESULT ;
typedef int DWORD ;


 int * FUNC_0 (scalar_t__,int *,int,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static HRESULT FUNC_6(LPCWSTR VAR_11, LPVOID *VAR_12, DWORD *VAR_13, IUnknown **VAR_14)
{
    TLB_Mapping *VAR_15;

    VAR_15 = FUNC_5(sizeof(TLB_Mapping));
    if (!VAR_15)
        return VAR_0;

    VAR_15->IUnknown_iface.lpVtbl = &VAR_9;
    VAR_15->refs = 1;
    VAR_15->file = VAR_4;
    VAR_15->mapping = ((void*)0);
    VAR_15->typelib_base = ((void*)0);

    VAR_15->file = FUNC_1(VAR_11, VAR_3, VAR_2, ((void*)0), VAR_5, 0, 0);
    if (VAR_4 != VAR_15->file)
    {
        VAR_15->mapping = FUNC_0(VAR_15->file, ((void*)0), VAR_6 | VAR_7, 0, 0, ((void*)0));
        if (VAR_15->mapping)
        {
            VAR_15->typelib_base = FUNC_4(VAR_15->mapping, VAR_1, 0, 0, 0);
            if(VAR_15->typelib_base)
            {

                *VAR_13 = FUNC_2(VAR_15->file, ((void*)0));
                *VAR_12 = VAR_15->typelib_base;
                *VAR_14 = &VAR_15->IUnknown_iface;
                return VAR_8;
            }
        }
    }

    FUNC_3(&VAR_15->IUnknown_iface);
    return VAR_10;
}
