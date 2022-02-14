
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int FilterID; int DisplayID; } ;
struct TYPE_7__ {int lStructSize; char* lpstrDefExt; int Flags; void* nMaxFileTitle; int lpstrFileTitle; void* nMaxFile; int lpstrFile; int * lpstrFilter; int hInstance; int hwndOwner; } ;
typedef TYPE_1__ OPENFILENAME ;
typedef int HWND ;
typedef TYPE_2__ FILTERPAIR ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_3(HWND VAR_14, OPENFILENAME* VAR_15)
{
    FILTERPAIR VAR_16[4];
    static WCHAR VAR_17[1024];

    FUNC_2(VAR_15, 0, sizeof(OPENFILENAME));
    VAR_15->lStructSize = sizeof(OPENFILENAME);
    VAR_15->hwndOwner = VAR_14;
    VAR_15->hInstance = VAR_13;


    VAR_16[0].DisplayID = VAR_8;
    VAR_16[0].FilterID = VAR_9;
    VAR_16[1].DisplayID = VAR_4;
    VAR_16[1].FilterID = VAR_5;
    VAR_16[2].DisplayID = VAR_6;
    VAR_16[2].FilterID = VAR_7;
    VAR_16[3].DisplayID = VAR_2;
    VAR_16[3].FilterID = VAR_3;
    FUNC_0(VAR_17, VAR_16, FUNC_1(VAR_16));

    VAR_15->lpstrFilter = VAR_17;
    VAR_15->lpstrFile = VAR_0;
    VAR_15->nMaxFile = VAR_12;
    VAR_15->lpstrFileTitle = VAR_1;
    VAR_15->nMaxFileTitle = VAR_12;
    VAR_15->Flags = VAR_10;
    VAR_15->lpstrDefExt = L"reg";
    return VAR_11;
}
