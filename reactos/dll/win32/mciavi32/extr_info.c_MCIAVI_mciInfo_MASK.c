
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* lpFileName; int cs; } ;
typedef TYPE_1__ WINE_MCIAVI ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_6__ {int dwRetSize; int * lpstrReturn; } ;
typedef TYPE_2__* LPMCI_DGV_INFO_PARMSW ;
typedef char* LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,char*,int ) ;

DWORD FUNC_6(UINT VAR_7, DWORD VAR_8, LPMCI_DGV_INFO_PARMSW VAR_9)
{
    LPCWSTR VAR_10 = 0;
    WINE_MCIAVI* VAR_11 = FUNC_2(VAR_7);
    DWORD VAR_12 = 0;
    static const WCHAR VAR_13[] = {'W','i','n','e','\'','s',' ','A','V','I',' ','p','l','a','y','e','r',0};
    static const WCHAR VAR_14[] = {'1','.','1',0};

    if (VAR_9 == ((void*)0) || VAR_9->lpstrReturn == ((void*)0))
 return VAR_1;
    if (VAR_11 == ((void*)0)) return VAR_0;
    if (VAR_8 & VAR_6) return 0;

    FUNC_3("buf=%p, len=%u\n", VAR_9->lpstrReturn, VAR_9->dwRetSize);

    FUNC_0(&VAR_11->cs);

    if (VAR_8 & VAR_4)
 VAR_10 = VAR_13;
    else if (VAR_8 & VAR_5)
 VAR_10 = VAR_14;
    else if (VAR_8 & VAR_3)
 VAR_10 = VAR_11->lpFileName;
    else {
 FUNC_4("Don't know this info command (%u)\n", VAR_8);
 VAR_12 = VAR_2;
    }
    if (!VAR_12) {
 WCHAR VAR_15 = 0;

 FUNC_5(VAR_9->lpstrReturn, VAR_10 ? VAR_10 : &VAR_15, VAR_9->dwRetSize);
    }
    FUNC_1(&VAR_11->cs);
    return VAR_12;
}
