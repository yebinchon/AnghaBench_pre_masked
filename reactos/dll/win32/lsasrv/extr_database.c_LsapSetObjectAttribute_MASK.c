
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_3__ {int KeyHandle; } ;
typedef TYPE_1__* PLSA_DB_OBJECT ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int LPWSTR ;
typedef int LPVOID ;
typedef int HANDLE ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *,int ,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;

NTSTATUS
FUNC_7(PLSA_DB_OBJECT VAR_4,
                       LPWSTR VAR_5,
                       LPVOID VAR_6,
                       ULONG VAR_7)
{
    OBJECT_ATTRIBUTES VAR_8;
    UNICODE_STRING VAR_9;
    HANDLE VAR_10;
    NTSTATUS VAR_11;

    FUNC_5(&VAR_9,
                         VAR_5);

    FUNC_1(&VAR_8,
                               &VAR_9,
                               VAR_1,
                               VAR_4->KeyHandle,
                               ((void*)0));

    VAR_11 = FUNC_4(&VAR_10,
                         VAR_0,
                         &VAR_8,
                         0,
                         ((void*)0),
                         VAR_3,
                         ((void*)0));
    if (!FUNC_2(VAR_11))
    {
        FUNC_0("NtCreateKey failed for '%S' with status 0x%lx\n",
            VAR_5, VAR_11);
        return VAR_11;
    }

    VAR_11 = FUNC_6(VAR_10,
                               VAR_2,
                               VAR_6,
                               VAR_7);

    FUNC_3(VAR_10);

    if (!FUNC_2(VAR_11))
    {
        FUNC_0("RtlpNtSetValueKey failed for '%S' with status 0x%lx\n",
            VAR_5, VAR_11);
    }

    return VAR_11;
}
