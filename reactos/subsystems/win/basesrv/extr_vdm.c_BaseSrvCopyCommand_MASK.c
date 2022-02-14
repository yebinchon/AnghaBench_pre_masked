
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VDM_COMMAND_INFO ;
struct TYPE_9__ {int CmdLen; int AppLen; int PifLen; int CurDirectoryLen; int EnvLen; int DesktopLen; int TitleLen; int ReservedLen; int Reserved; int Title; int Desktop; int StartupInfo; int Env; int CurDirectory; int PifFile; int AppName; int CmdLine; int StdErr; int StdOut; int StdIn; int CodePage; int iTask; } ;
struct TYPE_8__ {int EnvLen; int DesktopLen; int TitleLen; int ReservedLen; int CmdLen; int AppLen; int PifLen; int CurDirectoryLen; int VDMState; int * Reserved; int * Title; int * Desktop; int StartupInfo; int * Env; int * CurDirectory; int * PifFile; int * AppName; int * CmdLine; int StdErr; int StdOut; int StdIn; int CodePage; int ExitCode; int TaskId; } ;
struct TYPE_7__ {TYPE_2__* CommandInfo; int State; int ExitCode; } ;
typedef int STARTUPINFOA ;
typedef TYPE_1__* PVDM_DOS_RECORD ;
typedef TYPE_2__* PVDM_COMMAND_INFO ;
typedef TYPE_3__* PBASE_CHECK_VDM ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_3 ;

BOOLEAN FUNC_3(PBASE_CHECK_VDM VAR_4, PVDM_DOS_RECORD VAR_5)
{
    BOOLEAN VAR_6 = VAR_1;
    PVDM_COMMAND_INFO VAR_7 = ((void*)0);


    VAR_7 = (PVDM_COMMAND_INFO)FUNC_1(VAR_0,
                                                     VAR_2,
                                                     sizeof(VDM_COMMAND_INFO));
    if (VAR_7 == ((void*)0)) return VAR_1;


    VAR_7->TaskId = VAR_4->iTask;
    VAR_7->ExitCode = VAR_5->ExitCode;
    VAR_7->CodePage = VAR_4->CodePage;
    VAR_7->StdIn = VAR_4->StdIn;
    VAR_7->StdOut = VAR_4->StdOut;
    VAR_7->StdErr = VAR_4->StdErr;


    VAR_7->CmdLine = FUNC_1(VAR_0,
                                           VAR_2,
                                           VAR_4->CmdLen);
    if (VAR_7->CmdLine == ((void*)0)) goto Cleanup;


    FUNC_2(VAR_7->CmdLine, VAR_4->CmdLine, VAR_4->CmdLen);


    VAR_7->AppName = FUNC_1(VAR_0,
                                           VAR_2,
                                           VAR_4->AppLen);
    if (VAR_7->AppName == ((void*)0)) goto Cleanup;


    FUNC_2(VAR_7->AppName, VAR_4->AppName, VAR_4->AppLen);


    if (VAR_4->PifLen != 0)
    {
        VAR_7->PifFile = FUNC_1(VAR_0,
                                               VAR_2,
                                               VAR_4->PifLen);
        if (VAR_7->PifFile == ((void*)0)) goto Cleanup;


        FUNC_2(VAR_7->PifFile, VAR_4->PifFile, VAR_4->PifLen);
    }
    else VAR_7->PifFile = ((void*)0);


    if (VAR_4->CurDirectoryLen != 0)
    {
        VAR_7->CurDirectory = FUNC_1(VAR_0,
                                                    VAR_2,
                                                    VAR_4->CurDirectoryLen);
        if (VAR_7->CurDirectory == ((void*)0)) goto Cleanup;


        FUNC_2(VAR_7->CurDirectory,
                      VAR_4->CurDirectory,
                      VAR_4->CurDirectoryLen);
    }
    else VAR_7->CurDirectory = ((void*)0);


    VAR_7->Env = FUNC_1(VAR_0,
                                       VAR_2,
                                       VAR_4->EnvLen);
    if (VAR_7->Env == ((void*)0)) goto Cleanup;


    FUNC_2(VAR_7->Env, VAR_4->Env, VAR_4->EnvLen);

    VAR_7->EnvLen = VAR_4->EnvLen;
    FUNC_2(&VAR_7->StartupInfo,
                  VAR_4->StartupInfo,
                  sizeof(STARTUPINFOA));


    if (VAR_4->DesktopLen != 0)
    {
        VAR_7->Desktop = FUNC_1(VAR_0,
                                               VAR_2,
                                               VAR_4->DesktopLen);
        if (VAR_7->Desktop == ((void*)0)) goto Cleanup;


        FUNC_2(VAR_7->Desktop, VAR_4->Desktop, VAR_4->DesktopLen);
    }
    else VAR_7->Desktop = ((void*)0);

    VAR_7->DesktopLen = VAR_4->DesktopLen;


    if (VAR_4->TitleLen != 0)
    {
        VAR_7->Title = FUNC_1(VAR_0,
                                             VAR_2,
                                             VAR_4->TitleLen);
        if (VAR_7->Title == ((void*)0)) goto Cleanup;


        FUNC_2(VAR_7->Title, VAR_4->Title, VAR_4->TitleLen);
    }
    else VAR_7->Title = ((void*)0);

    VAR_7->TitleLen = VAR_4->TitleLen;


    if (VAR_4->ReservedLen != 0)
    {
        VAR_7->Reserved = FUNC_1(VAR_0,
                                                VAR_2,
                                                VAR_4->ReservedLen);
        if (VAR_7->Reserved == ((void*)0)) goto Cleanup;


        FUNC_2(VAR_7->Reserved,
                      VAR_4->Reserved,
                      VAR_4->ReservedLen);
    }
    else VAR_7->Reserved = ((void*)0);

    VAR_7->ReservedLen = VAR_4->ReservedLen;

    VAR_7->CmdLen = VAR_4->CmdLen;
    VAR_7->AppLen = VAR_4->AppLen;
    VAR_7->PifLen = VAR_4->PifLen;
    VAR_7->CurDirectoryLen = VAR_4->CurDirectoryLen;
    VAR_7->VDMState = VAR_5->State;




    VAR_5->CommandInfo = VAR_7;


    VAR_6 = VAR_3;

Cleanup:

    if (!VAR_6) FUNC_0(VAR_7);

    return VAR_6;
}
