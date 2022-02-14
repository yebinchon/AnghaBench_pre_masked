
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int cbFormat; int majortype; int * pbFormat; int * pUnk; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int refCount; TYPE_2__ IEnumMediaTypes_iface; TYPE_3__ mtype; int past; } ;
typedef TYPE_1__ ME_Impl ;
typedef TYPE_2__ IEnumMediaTypes ;
typedef int BOOL ;
typedef TYPE_3__ AM_MEDIA_TYPE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static IEnumMediaTypes *FUNC_3(const AM_MEDIA_TYPE *VAR_2, BOOL VAR_3)
{
    ME_Impl *VAR_4 = FUNC_0(sizeof(ME_Impl));

    if (!VAR_4)
        return ((void*)0);
    FUNC_2(VAR_4, sizeof(*VAR_4));
    VAR_4->IEnumMediaTypes_iface.lpVtbl = &VAR_1;
    VAR_4->refCount = 1;
    VAR_4->past = VAR_3;
    if (VAR_2) {
        VAR_4->mtype = *VAR_2;
        VAR_4->mtype.pUnk = ((void*)0);
        if (VAR_2->cbFormat) {
            VAR_4->mtype.pbFormat = FUNC_0(VAR_2->cbFormat);
            FUNC_1(VAR_4->mtype.pbFormat, VAR_2->pbFormat, VAR_2->cbFormat);
        }
        else
            VAR_4->mtype.pbFormat = ((void*)0);
    }
    else
        VAR_4->mtype.majortype = VAR_0;

    return &VAR_4->IEnumMediaTypes_iface;
}
