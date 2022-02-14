
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
struct TYPE_8__ {int ExeLength; scalar_t__ HistoryLength; int History; int ExeName; scalar_t__ Unicode2; scalar_t__ Unicode; int ConsoleHandle; } ;
struct TYPE_6__ {TYPE_3__ GetCommandHistoryRequest; } ;
struct TYPE_9__ {int Status; TYPE_1__ Data; } ;
struct TYPE_7__ {int ConsoleHandle; } ;
typedef int PVOID ;
typedef int PCSR_CAPTURE_BUFFER ;
typedef int PCSR_API_MESSAGE ;
typedef TYPE_3__* PCONSOLE_GETCOMMANDHISTORY ;
typedef int LPVOID ;
typedef int * LPCVOID ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ CONSOLE_API_MESSAGE ;
typedef int CHAR ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 TYPE_5__* FUNC_9 () ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static DWORD
FUNC_14(LPVOID VAR_4, DWORD VAR_5, LPCVOID VAR_6, BOOLEAN VAR_7)
{
    CONSOLE_API_MESSAGE VAR_8;
    PCONSOLE_GETCOMMANDHISTORY VAR_9 = &VAR_8.Data.GetCommandHistoryRequest;
    PCSR_CAPTURE_BUFFER VAR_10;

    USHORT VAR_11 = (USHORT)(VAR_6 ? (VAR_7 ? FUNC_13(VAR_6) : FUNC_12(VAR_6)) : 0);

    if (VAR_6 == ((void*)0) || VAR_11 == 0)
    {
        FUNC_11(VAR_2);
        return 0;
    }

    VAR_9->ConsoleHandle = FUNC_9()->ProcessParameters->ConsoleHandle;
    VAR_9->HistoryLength = VAR_5;
    VAR_9->ExeLength = VAR_11 * (VAR_7 ? sizeof(WCHAR) : sizeof(CHAR));
    VAR_9->Unicode =
    VAR_9->Unicode2 = VAR_7;



    VAR_10 = FUNC_2(2, VAR_9->ExeLength +
                                                VAR_9->HistoryLength);
    if (!VAR_10)
    {
        FUNC_7("CsrAllocateCaptureBuffer failed!\n");
        FUNC_11(VAR_3);
        return 0;
    }

    FUNC_4(VAR_10,
                            (PVOID)VAR_6,
                            VAR_9->ExeLength,
                            (PVOID)&VAR_9->ExeName);

    FUNC_3(VAR_10, VAR_9->HistoryLength,
                              (PVOID*)&VAR_9->History);

    FUNC_5((PCSR_API_MESSAGE)&VAR_8,
                        VAR_10,
                        FUNC_1(VAR_0, VAR_1),
                        sizeof(*VAR_9));
    if (!FUNC_8(VAR_8.Status))
    {
        FUNC_6(VAR_10);
        FUNC_0(VAR_8.Status);
        return 0;
    }

    FUNC_10(VAR_4,
                  VAR_9->History,
                  VAR_9->HistoryLength);

    FUNC_6(VAR_10);

    return VAR_9->HistoryLength;
}
