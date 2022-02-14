
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int QuadPart; } ;
struct TYPE_9__ {TYPE_1__ LastWriteTime; } ;
struct TYPE_8__ {int QuadPart; } ;
typedef int NTSTATUS ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_3__ FILE_BASIC_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_3__*,int,int ) ;
 int FUNC_2 (int ,int *,TYPE_3__*,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static NTSTATUS
FUNC_4(
    HANDLE VAR_2,
    LARGE_INTEGER VAR_3
)
{
    NTSTATUS VAR_4 = VAR_1;
    IO_STATUS_BLOCK VAR_5;
    FILE_BASIC_INFORMATION VAR_6;

    VAR_4 = FUNC_1 (VAR_2,
                                      &VAR_5,
                                      &VAR_6,
                                      sizeof(FILE_BASIC_INFORMATION),
                                      VAR_0);
    if (!FUNC_0(VAR_4))
    {
        FUNC_3("Error 0x%08x obtaining FileBasicInformation\n", VAR_4);
    }
    else
    {
        VAR_6.LastWriteTime.QuadPart = VAR_3.QuadPart;
        VAR_4 = FUNC_2 (VAR_2,
                                        &VAR_5,
                                        &VAR_6,
                                        sizeof(FILE_BASIC_INFORMATION),
                                        VAR_0);
        if (!FUNC_0(VAR_4))
        {
            FUNC_3("Error 0x%0x setting LastWriteTime\n", VAR_4);
        }
    }

    return VAR_4;
}
