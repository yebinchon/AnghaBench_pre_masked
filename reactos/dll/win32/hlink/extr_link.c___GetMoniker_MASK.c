
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Moniker; int SiteData; scalar_t__ Site; } ;
typedef int IMoniker ;
typedef TYPE_1__ HlinkImpl ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int **) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_6(HlinkImpl* VAR_8, IMoniker** VAR_9,
        DWORD VAR_10)
{
    HRESULT VAR_11;

    if (VAR_10 == VAR_2)
        VAR_10 = VAR_3;

    if (VAR_8->Moniker)
    {
        DWORD VAR_12 = VAR_4;

        VAR_11 = FUNC_4(VAR_8->Moniker, &VAR_12);
        if (VAR_11 == VAR_7 && VAR_12 != VAR_4)
        {
            *VAR_9 = VAR_8->Moniker;
            FUNC_2(*VAR_9);
            return VAR_7;
        }
    }

    if (VAR_10 == VAR_1 && VAR_8->Site)
    {
        IMoniker *VAR_13;

        VAR_11 = FUNC_1(VAR_8->Site, VAR_8->SiteData,
                VAR_5, VAR_6, &VAR_13);
        if (FUNC_0(VAR_11))
            return VAR_11;

        if (VAR_8->Moniker)
        {
            VAR_11 = FUNC_3(VAR_13, VAR_8->Moniker, VAR_0,
                    VAR_9);
            FUNC_5(VAR_13);
            return VAR_11;
        }

        *VAR_9 = VAR_13;
        return VAR_7;
    }

    *VAR_9 = VAR_8->Moniker;
    if (*VAR_9)
        FUNC_2(*VAR_9);

    return VAR_7;
}
