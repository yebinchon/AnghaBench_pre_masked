
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szTitleBuf ;
typedef int WCHAR ;
typedef int VOID ;
struct TYPE_3__ {int FileName; } ;
typedef TYPE_1__ SHIMGVW_FILENODE ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int,char*,int *,char*,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,char) ;

__attribute__((used)) static VOID
FUNC_7(SHIMGVW_FILENODE *VAR_3, HWND VAR_4)
{
    WCHAR VAR_5[800];
    WCHAR VAR_6[512];
    WCHAR *VAR_7;

    if (VAR_3)
    {
        VAR_7 = FUNC_6(VAR_3->FileName, '\\');
        if (VAR_7)
        {
            VAR_7++;
        }

        FUNC_2(VAR_1, VAR_0, VAR_6, FUNC_0(VAR_6));
        FUNC_4(VAR_5, sizeof(VAR_5), L"%ls%ls%ls", VAR_6, L" - ", VAR_7);
        FUNC_3(VAR_4, VAR_5);

        if (VAR_2)
        {
            FUNC_1(VAR_2);
        }

        FUNC_5(VAR_3->FileName);
    }
}
