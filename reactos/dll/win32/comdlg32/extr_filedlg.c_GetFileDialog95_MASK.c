
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void WCHAR ;
typedef int UINT ;
struct TYPE_7__ {int dwDlgProp; } ;
struct TYPE_10__ {void* filename; void* initdir; int * places; scalar_t__ customfilter; scalar_t__ filter; scalar_t__ title; scalar_t__ defext; scalar_t__ unicode; TYPE_2__* ofnInfos; TYPE_1__ DlgInfos; } ;
struct TYPE_9__ {int nMaxFileTitle; int lpstrFileTitle; int lpstrFile; } ;
struct TYPE_8__ {int Flags; int nMaxFileTitle; scalar_t__ lpstrFileTitle; scalar_t__ lpstrFile; } ;
typedef TYPE_2__* LPOPENFILENAMEW ;
typedef TYPE_3__* LPOPENFILENAMEA ;
typedef TYPE_4__ FileOpenDlgInfos ;
typedef scalar_t__ BOOL ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,void*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

 char* FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;

 int FUNC_6 (void*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (scalar_t__,void*,int ) ;

__attribute__((used)) static BOOL FUNC_11(FileOpenDlgInfos *VAR_4, UINT VAR_5)
{
    WCHAR *VAR_6 = ((void*)0);
    unsigned int VAR_7;
    BOOL VAR_8;


    if (VAR_4->ofnInfos->Flags & VAR_3)
    {
        VAR_6 = FUNC_7(VAR_2 * sizeof(WCHAR));
        FUNC_1(VAR_2, VAR_6);
    }

    switch (VAR_5)
    {
    case 129:
        VAR_8 = FUNC_2(VAR_4);
        break;
    case 128:
        VAR_4->DlgInfos.dwDlgProp |= VAR_1;
        VAR_8 = FUNC_2(VAR_4);
        break;
    default:
        VAR_8 = VAR_0;
    }


    if (VAR_8 && VAR_4->ofnInfos->lpstrFile && VAR_4->ofnInfos->lpstrFileTitle)
    {
        if (VAR_4->unicode)
        {
            LPOPENFILENAMEW VAR_9 = VAR_4->ofnInfos;
            WCHAR *VAR_10 = FUNC_5(VAR_9->lpstrFile);
            FUNC_10(VAR_9->lpstrFileTitle, VAR_10, VAR_9->nMaxFileTitle);
        }
        else
        {
            LPOPENFILENAMEA VAR_11 = (LPOPENFILENAMEA)VAR_4->ofnInfos;
            char *VAR_12 = FUNC_4(VAR_11->lpstrFile);
            FUNC_9(VAR_11->lpstrFileTitle, VAR_12, VAR_11->nMaxFileTitle);
        }
    }

    if (VAR_6)
    {
        FUNC_6(VAR_6);
        FUNC_8(VAR_6);
    }

    if (!VAR_4->unicode)
    {
        FUNC_8((void *)VAR_4->defext);
        FUNC_8((void *)VAR_4->title);
        FUNC_8((void *)VAR_4->filter);
        FUNC_8((void *)VAR_4->customfilter);
    }

    FUNC_8(VAR_4->filename);
    FUNC_8(VAR_4->initdir);

    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->places); VAR_7++)
        FUNC_3(VAR_4->places[VAR_7]);

    return VAR_8;
}
