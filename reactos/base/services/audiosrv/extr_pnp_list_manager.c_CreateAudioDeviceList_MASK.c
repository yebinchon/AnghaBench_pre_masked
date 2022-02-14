
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; scalar_t__ device_count; int max_size; } ;
typedef int PnP_AudioHeader ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int *,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 () ;
 TYPE_1__* VAR_6 ;
 int * VAR_7 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;

BOOL
FUNC_10(DWORD VAR_8)
{


    if (!FUNC_3())
    {

        return VAR_1;
    }




    FUNC_5();

    FUNC_8("Creating file mapping\n");

    VAR_7 = FUNC_1(VAR_3,
                                          ((void*)0),
                                          VAR_4,
                                          0,
                                          VAR_8,
                                          VAR_0);
    if (!VAR_7)
    {
        FUNC_8("Creation of audio device list failed (err %d)\n", FUNC_2());

        FUNC_7();
        FUNC_4();

        return VAR_1;
    }

    FUNC_8("Mapping view of file\n");

    VAR_6 = FUNC_6(VAR_7,
                                      VAR_2,
                                      0,
                                      0,
                                      VAR_8);
    if (!VAR_6)
    {
        FUNC_8("MapViewOfFile FAILED (err %d)\n", FUNC_2());

        FUNC_0(VAR_7);
        VAR_7 = ((void*)0);

        FUNC_7();
        FUNC_4();

        return VAR_1;
    }


    FUNC_9(VAR_6, 0, VAR_8);


    VAR_6->size = sizeof(PnP_AudioHeader);
    VAR_6->max_size = VAR_8;
    VAR_6->device_count = 0;

    FUNC_7();

    FUNC_8("Device list created\n");

    return VAR_5;
}
