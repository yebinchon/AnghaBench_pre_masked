
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int parFmt ;
typedef int charFmt ;
typedef char WCHAR ;
struct TYPE_11__ {int cbSize; void* dwEffects; int dwMask; } ;
struct TYPE_10__ {int cbSize; int dxStartIndent; int dwMask; } ;
struct TYPE_9__ {TYPE_1__* pCertInfo; } ;
struct TYPE_8__ {int NotAfter; int NotBefore; } ;
typedef TYPE_2__* PCCERT_CONTEXT ;
typedef TYPE_3__ PARAFORMAT2 ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_4__ CHARFORMATW ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void FUNC_7(HWND VAR_9, PCCERT_CONTEXT VAR_10)
{
    WCHAR VAR_11 = '\n';
    HWND VAR_12 = FUNC_0(VAR_9, VAR_3);
    CHARFORMATW VAR_13;
    PARAFORMAT2 VAR_14;

    FUNC_6(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.cbSize = sizeof(VAR_13);
    VAR_13.dwMask = VAR_1;
    VAR_13.dwEffects = VAR_0;
    FUNC_1(VAR_12, VAR_2, VAR_8, (LPARAM)&VAR_13);
    VAR_14.cbSize = sizeof(VAR_14);
    VAR_14.dwMask = VAR_7;
    VAR_14.dxStartIndent = VAR_6 * 3;
    FUNC_4(VAR_12, VAR_4,
     &VAR_14);
    VAR_13.dwEffects = 0;
    FUNC_1(VAR_12, VAR_2, VAR_8, (LPARAM)&VAR_13);
    FUNC_2(VAR_12, &VAR_10->pCertInfo->NotBefore);
    VAR_13.dwEffects = VAR_0;
    FUNC_1(VAR_12, VAR_2, VAR_8, (LPARAM)&VAR_13);
    FUNC_3(VAR_12, VAR_5);
    VAR_13.dwEffects = 0;
    FUNC_1(VAR_12, VAR_2, VAR_8, (LPARAM)&VAR_13);
    FUNC_2(VAR_12, &VAR_10->pCertInfo->NotAfter);
    FUNC_5(VAR_12, &VAR_11, 1);
}
