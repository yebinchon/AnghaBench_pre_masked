
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nk_image {int dummy; } ;
typedef int nk_uint ;
struct TYPE_7__ {TYPE_1__* lpVtbl; } ;
struct TYPE_6__ {int (* Release ) (TYPE_2__*) ;} ;
typedef TYPE_2__ IStream ;
typedef scalar_t__ GpStatus ;
typedef int GpImage ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (TYPE_2__*,int **) ;
 TYPE_2__* FUNC_1 (int const*,int ) ;
 struct nk_image FUNC_2 (int *) ;
 struct nk_image FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

struct nk_image
FUNC_5(const void *VAR_0, nk_uint VAR_1)
{
    GpImage* VAR_2;
    GpStatus VAR_3;
    IStream *VAR_4 = FUNC_1((const BYTE*)VAR_0, VAR_1);
    if (!VAR_4)
        return FUNC_3(0);

    VAR_3 = FUNC_0(VAR_4, &VAR_2);
    VAR_4->lpVtbl->Release(VAR_4);

    if (VAR_3)
        return FUNC_3(0);

    return FUNC_2(VAR_2);
}
