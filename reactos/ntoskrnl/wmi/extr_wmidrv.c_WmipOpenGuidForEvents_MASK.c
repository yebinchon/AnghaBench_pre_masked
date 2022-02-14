
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WMI_OPEN_GUID_FOR_EVENTS ;
typedef int WMIP_RESULT2 ;
typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_8__ {int Handle; } ;
struct TYPE_7__ {int DesiredAccess; int ObjectAttributes; } ;
typedef TYPE_1__* PWMI_OPEN_GUID_FOR_EVENTS ;
typedef TYPE_2__* PWMIP_RESULT2 ;
typedef TYPE_1__* PVOID ;
typedef int* PULONG ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int KPROCESSOR_MODE ;
typedef int HANDLE ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,int *,int *,int ) ;
 int FUNC_5 (int *,int ,int ,int *,TYPE_1__**) ;

__attribute__((used)) static
NTSTATUS
FUNC_6(
    PVOID VAR_2,
    ULONG VAR_3,
    PULONG VAR_4)
{
    PWMI_OPEN_GUID_FOR_EVENTS VAR_5 = VAR_2;
    PWMIP_RESULT2 VAR_6 = (PWMIP_RESULT2)VAR_2;
    OBJECT_ATTRIBUTES VAR_7;
    UNICODE_STRING VAR_8;
    WCHAR VAR_9[45 + 1];
    KPROCESSOR_MODE VAR_10;
    HANDLE VAR_11;
    PVOID VAR_12;
    NTSTATUS VAR_13;

    if ((VAR_3 != sizeof(WMI_OPEN_GUID_FOR_EVENTS)) ||
        (*VAR_4 != sizeof(WMIP_RESULT2)))
    {
        return VAR_1;
    }


    VAR_10 = FUNC_1();
    VAR_13 = FUNC_4(VAR_5->ObjectAttributes,
                                             &VAR_7,
                                             &VAR_8,
                                             VAR_9,
                                             VAR_10);
    if (!FUNC_2(VAR_13))
    {
        FUNC_0("ProbeAndCaptureGuidObjectAttributes failed: 0x%lx\n", VAR_13);
        return VAR_13;
    }


    VAR_13 = FUNC_5(&VAR_7,
                                      VAR_5->DesiredAccess,
                                      VAR_10,
                                      &VAR_11,
                                      &VAR_12);
    if (!FUNC_2(VAR_13))
    {
        FUNC_0("WmipOpenGuidObjectByName failed: 0x%lx\n", VAR_13);
        return VAR_13;
    }

    VAR_6->Handle = VAR_11;

    FUNC_3(VAR_12);

    return VAR_0;
}
