
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int parFmt ;
typedef int charFmt ;
typedef char WCHAR ;
struct TYPE_6__ {int cbSize; scalar_t__ dwEffects; int dwMask; } ;
struct TYPE_5__ {int cbSize; int dxStartIndent; int dwMask; } ;
typedef int PCCERT_CONTEXT ;
typedef TYPE_1__ PARAFORMAT2 ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;
typedef TYPE_2__ CHARFORMATW ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int,TYPE_1__*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_6(HWND VAR_8, PCCERT_CONTEXT VAR_9,
 DWORD VAR_10, int VAR_11)
{
    WCHAR VAR_12 = '\n';
    HWND VAR_13 = FUNC_0(VAR_8, VAR_4);
    CHARFORMATW VAR_14;
    PARAFORMAT2 VAR_15;

    FUNC_5(&VAR_14, 0, sizeof(VAR_14));
    VAR_14.cbSize = sizeof(VAR_14);
    VAR_14.dwMask = VAR_2;
    VAR_14.dwEffects = VAR_1;
    FUNC_1(VAR_13, VAR_3, VAR_7, (LPARAM)&VAR_14);
    VAR_15.cbSize = sizeof(VAR_15);
    VAR_15.dwMask = VAR_6;
    VAR_15.dxStartIndent = VAR_5 * 3;
    FUNC_3(VAR_13, VAR_11, &VAR_15);
    VAR_14.dwEffects = 0;
    FUNC_1(VAR_13, VAR_3, VAR_7, (LPARAM)&VAR_14);
    FUNC_2(VAR_13, VAR_9, VAR_0,
     VAR_10);
    FUNC_4(VAR_13, &VAR_12, 1);
    FUNC_4(VAR_13, &VAR_12, 1);
    FUNC_4(VAR_13, &VAR_12, 1);

}
