
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_9__ {struct TYPE_9__* lpNext; } ;
typedef TYPE_1__* LPFILTERINFO ;
typedef scalar_t__ HRESULT ;
typedef int HDEVINFO ;
typedef TYPE_2__ GUID ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ,TYPE_2__*,TYPE_1__**) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

HRESULT
FUNC_6(
    LPFILTERINFO *VAR_5)
{
    HDEVINFO VAR_6;
    DWORD VAR_7;
    HRESULT VAR_8;
    ULONG VAR_9, VAR_10;
    GUID VAR_11 = {VAR_2};
    LPFILTERINFO VAR_12;


    VAR_7 = FUNC_5(&VAR_11, &VAR_6);

    if (VAR_7 != VAR_0)
    {
        FUNC_2("OpenDeviceList failed with %lx\n", VAR_7);
        return VAR_1;
    }

    if (!FUNC_4(VAR_6, &VAR_11, VAR_5))
    {
        FUNC_2("No devices found\n");
        FUNC_1(VAR_6);
        return VAR_3;
    }


    FUNC_0(*VAR_5);

    VAR_12 = *VAR_5;

    VAR_9 = 0;
    VAR_10 = 0;


    while(VAR_12)
    {

        VAR_8 = FUNC_3(VAR_12, &VAR_10, &VAR_9);

        if (VAR_8 != VAR_4)
        {
           FUNC_2("EnumerateAudioFilter failed with %lx\n", VAR_7);
           break;
        }


        VAR_12 = VAR_12->lpNext;
    }


    FUNC_1(VAR_6);


    return VAR_8;
}
