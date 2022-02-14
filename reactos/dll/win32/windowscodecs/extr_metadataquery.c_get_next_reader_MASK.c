
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int punkVal; int * puuid; scalar_t__ uiVal; } ;
struct TYPE_9__ {scalar_t__ vt; TYPE_1__ u; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef int IWICMetadataReader ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static HRESULT FUNC_4(IWICMetadataReader *VAR_6, UINT VAR_7,
                               GUID *VAR_8, IWICMetadataReader **VAR_9)
{
    HRESULT VAR_10;
    PROPVARIANT VAR_11, VAR_12, VAR_13;

    *VAR_9 = ((void*)0);

    FUNC_3(&VAR_11);
    FUNC_3(&VAR_12);
    FUNC_3(&VAR_13);

    if (VAR_7)
    {
        VAR_11.vt = VAR_3;
        VAR_11.u.uiVal = VAR_7;
    }

    VAR_12.vt = VAR_2;
    VAR_12.u.puuid = VAR_8;
    VAR_10 = FUNC_1(VAR_6, &VAR_11, &VAR_12, &VAR_13);
    if (VAR_10 != VAR_1) return VAR_10;

    if (VAR_13.vt == VAR_4)
        VAR_10 = FUNC_0(VAR_13.u.punkVal, &VAR_0, (void **)VAR_9);
    else
        VAR_10 = VAR_5;

    FUNC_2(&VAR_13);
    return VAR_10;
}
