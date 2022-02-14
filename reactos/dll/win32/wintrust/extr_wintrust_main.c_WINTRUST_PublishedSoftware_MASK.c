
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wintrust_data ;
typedef int fileInfo ;
struct TYPE_8__ {int member_0; int hFile; int pcwszFilePath; int member_1; } ;
typedef TYPE_2__ WINTRUST_FILE_INFO ;
struct TYPE_7__ {TYPE_2__* pFile; } ;
struct TYPE_9__ {int member_0; int dwUIChoice; int dwUnionChoice; TYPE_1__ u; TYPE_4__* pSIPClientData; int member_1; } ;
typedef TYPE_3__ WINTRUST_DATA ;
struct TYPE_10__ {int hFile; int lpPath; } ;
typedef TYPE_4__* LPWIN_TRUST_SUBJECT_FILE ;
typedef int LONG ;
typedef int HWND ;
typedef int GUID ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static LONG FUNC_3(HWND VAR_2, GUID *VAR_3,
 WINTRUST_DATA *VAR_4)
{
    WINTRUST_DATA VAR_5 = { sizeof(VAR_5), 0 };



    LPWIN_TRUST_SUBJECT_FILE VAR_6 = VAR_4->pSIPClientData;
    WINTRUST_FILE_INFO VAR_7 = { sizeof(VAR_7), 0 };

    FUNC_0("subjectFile->hFile: %p\n", VAR_6->hFile);
    FUNC_0("subjectFile->lpPath: %s\n", FUNC_2(VAR_6->lpPath));
    VAR_7.pcwszFilePath = VAR_6->lpPath;
    VAR_7.hFile = VAR_6->hFile;
    VAR_5.u.pFile = &VAR_7;
    VAR_5.dwUnionChoice = VAR_0;
    VAR_5.dwUIChoice = VAR_1;

    return FUNC_1(VAR_2, VAR_3, &VAR_5);
}
