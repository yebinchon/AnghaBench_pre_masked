
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_10__ {TYPE_2__* ProcessParameters; } ;
struct TYPE_8__ {int ExeLength; int ExeName; scalar_t__ Unicode2; scalar_t__ Unicode; int NumCommands; int ConsoleHandle; } ;
struct TYPE_6__ {TYPE_3__ SetHistoryNumberCommandsRequest; } ;
struct TYPE_9__ {int Status; TYPE_1__ Data; } ;
struct TYPE_7__ {int ConsoleHandle; } ;
typedef int PVOID ;
typedef int PCSR_CAPTURE_BUFFER ;
typedef int PCSR_API_MESSAGE ;
typedef TYPE_3__* PCONSOLE_SETHISTORYNUMBERCOMMANDS ;
typedef int * LPCVOID ;
typedef int DWORD ;
typedef TYPE_4__ CONSOLE_API_MESSAGE ;
typedef int CHAR ;
typedef scalar_t__ BOOLEAN ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 TYPE_5__* FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static BOOL
FUNC_12(DWORD VAR_6,
                              LPCVOID VAR_7,
                              BOOLEAN VAR_8)
{
    CONSOLE_API_MESSAGE VAR_9;
    PCONSOLE_SETHISTORYNUMBERCOMMANDS VAR_10 = &VAR_9.Data.SetHistoryNumberCommandsRequest;
    PCSR_CAPTURE_BUFFER VAR_11;

    USHORT VAR_12 = (USHORT)(VAR_7 ? (VAR_8 ? FUNC_11(VAR_7) : FUNC_10(VAR_7)) : 0);

    if (VAR_7 == ((void*)0) || VAR_12 == 0)
    {
        FUNC_9(VAR_2);
        return VAR_4;
    }

    VAR_10->ConsoleHandle = FUNC_8()->ProcessParameters->ConsoleHandle;
    VAR_10->NumCommands = VAR_6;
    VAR_10->ExeLength = VAR_12 * (VAR_8 ? sizeof(WCHAR) : sizeof(CHAR));
    VAR_10->Unicode =
    VAR_10->Unicode2 = VAR_8;


    VAR_11 = FUNC_2(1, VAR_10->ExeLength);
    if (!VAR_11)
    {
        FUNC_6("CsrAllocateCaptureBuffer failed!\n");
        FUNC_9(VAR_3);
        return VAR_4;
    }

    FUNC_3(VAR_11,
                            (PVOID)VAR_7,
                            VAR_10->ExeLength,
                            (PVOID)&VAR_10->ExeName);

    FUNC_4((PCSR_API_MESSAGE)&VAR_9,
                        VAR_11,
                        FUNC_1(VAR_0, VAR_1),
                        sizeof(*VAR_10));

    FUNC_5(VAR_11);

    if (!FUNC_7(VAR_9.Status))
    {
        FUNC_0(VAR_9.Status);
        return VAR_4;
    }

    return VAR_5;
}
