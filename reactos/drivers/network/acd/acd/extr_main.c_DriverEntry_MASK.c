
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int PUNICODE_STRING ;
typedef int PDRIVER_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_2 ;

NTSTATUS
FUNC_4(PDRIVER_OBJECT VAR_3,
            PUNICODE_STRING VAR_4)
{
    UNICODE_STRING VAR_5;
    PDEVICE_OBJECT VAR_6;
    NTSTATUS VAR_7;

    FUNC_3(&VAR_5, L"RasAcd");

    VAR_7 = FUNC_1(VAR_3,
                            0,
                            &VAR_5,
                            VAR_1,
                            0,
                            VAR_0,
                            &VAR_6);

    if (!FUNC_2(VAR_7))
    {
        FUNC_0("IoCreateDevice() failed (Status %lx)\n", VAR_7);
        return VAR_7;
    }

    return VAR_2;
}
