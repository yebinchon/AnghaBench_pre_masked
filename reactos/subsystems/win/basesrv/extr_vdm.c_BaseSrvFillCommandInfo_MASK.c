
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ CmdLen; scalar_t__ AppLen; scalar_t__ PifLen; scalar_t__ CurDirectoryLen; scalar_t__ EnvLen; int DesktopLen; int TitleLen; int ReservedLen; int Reserved; int Title; int Desktop; int StartupInfo; int Env; int CurDirectory; int PifFile; int AppName; int CmdLine; int fComingFromBat; int VDMState; int CurrentDrive; int ExitCode; int dwCreationFlags; int CodePage; int StdErr; int StdOut; int StdIn; int iTask; } ;
struct TYPE_5__ {scalar_t__ CmdLen; scalar_t__ AppLen; scalar_t__ PifLen; scalar_t__ CurDirectoryLen; scalar_t__ EnvLen; int DesktopLen; int TitleLen; int ReservedLen; int * Reserved; int * Title; int * Desktop; int StartupInfo; int * Env; int * CurDirectory; int * PifFile; int * AppName; int * CmdLine; int ComingFromBat; int VDMState; int CurrentDrive; int ExitCode; int CreationFlags; int CodePage; int StdErr; int StdOut; int StdIn; int TaskId; } ;
typedef int STARTUPINFOA ;
typedef TYPE_1__* PVDM_COMMAND_INFO ;
typedef TYPE_2__* PBASE_GET_NEXT_VDM_COMMAND ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

NTSTATUS FUNC_1(PVDM_COMMAND_INFO VAR_2,
                                PBASE_GET_NEXT_VDM_COMMAND VAR_3)
{
    NTSTATUS VAR_4 = VAR_1;


    VAR_3->iTask = VAR_2->TaskId;
    VAR_3->StdIn = VAR_2->StdIn;
    VAR_3->StdOut = VAR_2->StdOut;
    VAR_3->StdErr = VAR_2->StdErr;
    VAR_3->CodePage = VAR_2->CodePage;
    VAR_3->dwCreationFlags = VAR_2->CreationFlags;
    VAR_3->ExitCode = VAR_2->ExitCode;
    VAR_3->CurrentDrive = VAR_2->CurrentDrive;
    VAR_3->VDMState = VAR_2->VDMState;
    VAR_3->fComingFromBat = VAR_2->ComingFromBat;

    if (VAR_3->CmdLen >= VAR_2->CmdLen)
    {

        FUNC_0(VAR_3->CmdLine, VAR_2->CmdLine, VAR_2->CmdLen);
    }
    else VAR_4 = VAR_0;
    VAR_3->CmdLen = VAR_2->CmdLen;

    if (VAR_3->AppLen >= VAR_2->AppLen)
    {

        FUNC_0(VAR_3->AppName, VAR_2->AppName, VAR_2->AppLen);
    }
    else VAR_4 = VAR_0;
    VAR_3->AppLen = VAR_2->AppLen;

    if (VAR_3->PifLen >= VAR_2->PifLen)
    {

        FUNC_0(VAR_3->PifFile, VAR_2->PifFile, VAR_2->PifLen);
    }
    else VAR_4 = VAR_0;
    VAR_3->PifLen = VAR_2->PifLen;

    if (VAR_3->CurDirectoryLen >= VAR_2->CurDirectoryLen)
    {

        FUNC_0(VAR_3->CurDirectory, VAR_2->CurDirectory, VAR_2->CurDirectoryLen);
    }
    else VAR_4 = VAR_0;
    VAR_3->CurDirectoryLen = VAR_2->CurDirectoryLen;

    if (VAR_3->EnvLen >= VAR_2->EnvLen)
    {

        FUNC_0(VAR_3->Env, VAR_2->Env, VAR_2->EnvLen);
    }
    else VAR_4 = VAR_0;
    VAR_3->EnvLen = VAR_2->EnvLen;


    FUNC_0(VAR_3->StartupInfo,
                  &VAR_2->StartupInfo,
                  sizeof(STARTUPINFOA));

    if (VAR_3->DesktopLen >= VAR_2->DesktopLen)
    {

        FUNC_0(VAR_3->Desktop, VAR_2->Desktop, VAR_2->DesktopLen);
    }
    else VAR_4 = VAR_0;
    VAR_3->DesktopLen = VAR_2->DesktopLen;

    if (VAR_3->TitleLen >= VAR_2->TitleLen)
    {

        FUNC_0(VAR_3->Title, VAR_2->Title, VAR_2->TitleLen);
    }
    else VAR_4 = VAR_0;
    VAR_3->TitleLen = VAR_2->TitleLen;

    if (VAR_3->ReservedLen >= VAR_2->ReservedLen)
    {

        FUNC_0(VAR_3->Reserved, VAR_2->Reserved, VAR_2->ReservedLen);
    }
    else VAR_4 = VAR_0;
    VAR_3->ReservedLen = VAR_2->ReservedLen;

    return VAR_4;
}
