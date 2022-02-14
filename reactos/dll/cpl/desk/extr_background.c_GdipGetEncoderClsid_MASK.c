
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int Clsid; int MimeType; } ;
typedef int PCWSTR ;
typedef TYPE_1__ ImageCodecInfo ;
typedef int HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;

HRESULT
FUNC_6(PCWSTR VAR_4, CLSID *VAR_5)
{
    UINT VAR_6;
    UINT VAR_7;
    UINT VAR_8;
    ImageCodecInfo *VAR_9;

    if (FUNC_1(&VAR_6, &VAR_7) != VAR_2 ||
        VAR_7 == 0)
    {
        return VAR_0;
    }

    VAR_9 = FUNC_3(FUNC_2(), 0, VAR_7);
    if (!VAR_9)
    {
        return VAR_1;
    }

    if (FUNC_0(VAR_6, VAR_7, VAR_9) != VAR_2)
    {
        FUNC_4(FUNC_2(), 0, VAR_9);
        return VAR_0;
    }

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
    {
        if (!FUNC_5(VAR_9[VAR_8].MimeType, VAR_4))
        {
            *VAR_5 = VAR_9[VAR_8].Clsid;
            FUNC_4(FUNC_2(), 0, VAR_9);
            return VAR_3;
        }
    }

    FUNC_4(FUNC_2(), 0, VAR_9);
    return VAR_0;
}
