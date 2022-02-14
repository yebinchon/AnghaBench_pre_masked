
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
struct TYPE_8__ {int ExeLength; int HistoryLength; int ExeName; scalar_t__ Unicode2; scalar_t__ Unicode; int ConsoleHandle; } ;
struct TYPE_6__ {TYPE_3__ GetCommandHistoryLengthRequest; } ;
struct TYPE_9__ {int Status; TYPE_1__ Data; } ;
struct TYPE_7__ {int ConsoleHandle; } ;
typedef int PVOID ;
typedef int PCSR_CAPTURE_BUFFER ;
typedef int PCSR_API_MESSAGE ;
typedef TYPE_3__* PCONSOLE_GETCOMMANDHISTORYLENGTH ;
typedef int * LPCVOID ;
typedef int DWORD ;
typedef TYPE_4__ CONSOLE_API_MESSAGE ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


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
 int FUNC_7 (int ) ;
 TYPE_5__* FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static DWORD
FUNC_12(LPCVOID VAR_4, BOOL VAR_5)
{
    CONSOLE_API_MESSAGE VAR_6;
    PCONSOLE_GETCOMMANDHISTORYLENGTH VAR_7 = &VAR_6.Data.GetCommandHistoryLengthRequest;
    PCSR_CAPTURE_BUFFER VAR_8;

    USHORT VAR_9 = (USHORT)(VAR_4 ? (VAR_5 ? FUNC_11(VAR_4) : FUNC_10(VAR_4)) : 0);

    if (VAR_4 == ((void*)0) || VAR_9 == 0)
    {
        FUNC_9(VAR_2);
        return 0;
    }

    VAR_7->ConsoleHandle = FUNC_8()->ProcessParameters->ConsoleHandle;
    VAR_7->ExeLength = VAR_9 * (VAR_5 ? sizeof(WCHAR) : sizeof(CHAR));
    VAR_7->Unicode =
    VAR_7->Unicode2 = VAR_5;


    VAR_8 = FUNC_2(1, VAR_7->ExeLength);
    if (!VAR_8)
    {
        FUNC_6("CsrAllocateCaptureBuffer failed!\n");
        FUNC_9(VAR_3);
        return 0;
    }

    FUNC_3(VAR_8,
                            (PVOID)VAR_4,
                            VAR_7->ExeLength,
                            (PVOID)&VAR_7->ExeName);

    FUNC_4((PCSR_API_MESSAGE)&VAR_6,
                        VAR_8,
                        FUNC_1(VAR_0, VAR_1),
                        sizeof(*VAR_7));

    FUNC_5(VAR_8);

    if (!FUNC_7(VAR_6.Status))
    {
        FUNC_0(VAR_6.Status);
        return 0;
    }

    return VAR_7->HistoryLength;
}
