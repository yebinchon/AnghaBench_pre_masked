
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int toc ;
struct TYPE_7__ {int handle; } ;
typedef TYPE_1__ WINE_MCICDAUDIO ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_8__ {int dwCallback; int dwRetSize; int * lpstrReturn; } ;
typedef TYPE_2__* LPMCI_INFO_PARMSW ;
typedef char const* LPCWSTR ;
typedef int DWORD ;
typedef int CDROM_TOC ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
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
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,int ,int *,int ,int *,int,int*,int *) ;
 int FUNC_8 (int *,char const*,int ) ;
 int FUNC_9 (char*,char const*,int) ;

__attribute__((used)) static DWORD FUNC_10(UINT VAR_12, DWORD VAR_13, LPMCI_INFO_PARMSW VAR_14)
{
    LPCWSTR VAR_15 = ((void*)0);
    WINE_MCICDAUDIO* VAR_16 = FUNC_2(VAR_12);
    DWORD VAR_17 = 0;
    WCHAR VAR_18[16];

    FUNC_4("(%04X, %08X, %p);\n", VAR_12, VAR_13, VAR_14);

    if (VAR_14 == ((void*)0) || VAR_14->lpstrReturn == ((void*)0))
 return VAR_4;
    if (VAR_16 == ((void*)0)) return VAR_1;

    FUNC_4("buf=%p, len=%u\n", *VAR_14->lpstrReturn, VAR_14->dwRetSize);

    if (VAR_13 & VAR_8) {
        static const WCHAR VAR_19[] = {'W','i','n','e','\'','s',' ','a','u','d','i','o',' ','C','D',0};
        VAR_15 = VAR_19;
    } else if (VAR_13 & VAR_7) {
 VAR_17 = VAR_3;
    } else if (VAR_13 & VAR_6) {
 DWORD VAR_20 = 0;
        CDROM_TOC VAR_21;
        DWORD VAR_22;
 static const WCHAR VAR_23[] = {'%','l','u',0};

        if (!FUNC_7(VAR_16->handle, VAR_0, ((void*)0), 0,
                             &VAR_21, sizeof(VAR_21), &VAR_22, ((void*)0))) {
     return FUNC_1(VAR_16);
 }

 VAR_20 = FUNC_0(&VAR_21);
 FUNC_9(VAR_18, VAR_23, VAR_20);
 VAR_15 = VAR_18;
    } else {
 FUNC_5("Don't know this info command (%u)\n", VAR_13);
 VAR_17 = VAR_2;
    }
    if (!VAR_17) {
 FUNC_4("=> %s\n", FUNC_6(VAR_15));
 if (VAR_14->dwRetSize) {


     FUNC_8(VAR_14->lpstrReturn, VAR_15, VAR_14->dwRetSize);
 } else VAR_17 = VAR_5;
    }
    if (VAR_11==VAR_17 && (VAR_13 & VAR_9))
 FUNC_3(VAR_14->dwCallback, VAR_16, VAR_10);
    return VAR_17;
}
