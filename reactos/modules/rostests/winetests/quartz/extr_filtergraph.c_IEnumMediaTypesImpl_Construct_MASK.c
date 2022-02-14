
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {int refCount; int cMediaTypes; TYPE_2__ IEnumMediaTypes_iface; int * pMediaTypes; scalar_t__ uIndex; } ;
typedef TYPE_1__ IEnumMediaTypesImpl ;
typedef TYPE_2__ IEnumMediaTypes ;
typedef int HRESULT ;
typedef int AM_MEDIA_TYPE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_5(const AM_MEDIA_TYPE * VAR_3, ULONG VAR_4, IEnumMediaTypes ** VAR_5)
{
    ULONG VAR_6;
    IEnumMediaTypesImpl * VAR_7 = FUNC_0(sizeof(IEnumMediaTypesImpl));

    if (!VAR_7)
    {
        *VAR_5 = ((void*)0);
        return VAR_0;
    }
    VAR_7->IEnumMediaTypes_iface.lpVtbl = &VAR_1;
    VAR_7->refCount = 1;
    VAR_7->uIndex = 0;
    VAR_7->cMediaTypes = VAR_4;
    VAR_7->pMediaTypes = FUNC_0(sizeof(AM_MEDIA_TYPE) * VAR_4);
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        if (FUNC_3(FUNC_2(&VAR_7->pMediaTypes[VAR_6], &VAR_3[VAR_6])))
        {
           while (VAR_6--)
              FUNC_4(&VAR_7->pMediaTypes[VAR_6]);
           FUNC_1(VAR_7->pMediaTypes);
           return VAR_0;
        }
    *VAR_5 = &VAR_7->IEnumMediaTypes_iface;
    return VAR_2;
}
