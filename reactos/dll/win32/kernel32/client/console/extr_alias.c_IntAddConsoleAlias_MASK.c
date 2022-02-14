
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
typedef int ULONG ;
struct TYPE_10__ {TYPE_2__* ProcessParameters; } ;
struct TYPE_8__ {int SourceLength; int ExeLength; int TargetLength; int * Target; int ExeName; int Source; scalar_t__ Unicode2; scalar_t__ Unicode; int ConsoleHandle; } ;
struct TYPE_6__ {TYPE_3__ ConsoleAliasRequest; } ;
struct TYPE_9__ {int Status; TYPE_1__ Data; } ;
struct TYPE_7__ {int ConsoleHandle; } ;
typedef int PVOID ;
typedef int * PCSR_CAPTURE_BUFFER ;
typedef int PCSR_API_MESSAGE ;
typedef TYPE_3__* PCONSOLE_ADDGETALIAS ;
typedef int * LPCVOID ;
typedef TYPE_4__ CONSOLE_API_MESSAGE ;
typedef int CHAR ;
typedef scalar_t__ BOOLEAN ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ,int,int *) ;
 int FUNC_4 (int ,int *,int ,int) ;
 int FUNC_5 (int *) ;
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
FUNC_12(LPCVOID VAR_6,
                   USHORT VAR_7,
                   LPCVOID VAR_8,
                   USHORT VAR_9,
                   LPCVOID VAR_10,
                   BOOLEAN VAR_11)
{
    CONSOLE_API_MESSAGE VAR_12;
    PCONSOLE_ADDGETALIAS VAR_13 = &VAR_12.Data.ConsoleAliasRequest;
    PCSR_CAPTURE_BUFFER VAR_14;
    ULONG VAR_15;

    USHORT VAR_16 = (USHORT)(VAR_10 ? (VAR_11 ? FUNC_11(VAR_10) : FUNC_10(VAR_10)) : 0);

    if (VAR_10 == ((void*)0) || VAR_16 == 0)
    {
        FUNC_9(VAR_2);
        return VAR_4;
    }

    VAR_13->ConsoleHandle = FUNC_8()->ProcessParameters->ConsoleHandle;


    VAR_13->SourceLength = VAR_7;
    VAR_13->ExeLength = VAR_16 * (VAR_11 ? sizeof(WCHAR) : sizeof(CHAR));
    VAR_13->Unicode =
    VAR_13->Unicode2 = VAR_11;

    VAR_15 = 2;

    if (VAR_8)
    {
        VAR_13->TargetLength = VAR_9;
        VAR_15++;
    }
    else
    {
        VAR_13->TargetLength = 0;
    }


    VAR_14 = FUNC_2(VAR_15,
                                             VAR_13->SourceLength +
                                             VAR_13->ExeLength +
                                             VAR_13->TargetLength);
    if (VAR_14 == ((void*)0))
    {
        FUNC_6("CsrAllocateCaptureBuffer failed!\n");
        FUNC_9(VAR_3);
        return VAR_4;
    }


    FUNC_3(VAR_14,
                            (PVOID)VAR_6,
                            VAR_13->SourceLength,
                            (PVOID*)&VAR_13->Source);

    FUNC_3(VAR_14,
                            (PVOID)VAR_10,
                            VAR_13->ExeLength,
                            (PVOID*)&VAR_13->ExeName);

    if (VAR_8)
    {
        FUNC_3(VAR_14,
                                (PVOID)VAR_8,
                                VAR_13->TargetLength,
                                (PVOID*)&VAR_13->Target);
    }
    else
    {
        VAR_13->Target = ((void*)0);
    }

    FUNC_4((PCSR_API_MESSAGE)&VAR_12,
                        VAR_14,
                        FUNC_1(VAR_0, VAR_1),
                        sizeof(*VAR_13));

    FUNC_5(VAR_14);

    if (!FUNC_7(VAR_12.Status))
    {
        FUNC_0(VAR_12.Status);
        return VAR_4;
    }

    return VAR_5;
}
