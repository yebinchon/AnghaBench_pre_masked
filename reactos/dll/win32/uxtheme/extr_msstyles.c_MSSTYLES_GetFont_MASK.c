
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int attr ;
typedef char WCHAR ;
struct TYPE_3__ {char* lfFaceName; int lfHeight; void* lfStrikeOut; void* lfUnderline; void* lfItalic; int lfWeight; int lfCharSet; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ LOGFONTW ;
typedef int HRESULT ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int *,int*) ;
 scalar_t__ FUNC_3 (int ,int ,int *,char*,int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 void* VAR_7 ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static HRESULT FUNC_8 (LPCWSTR VAR_8, LPCWSTR VAR_9,
                                 LPCWSTR *VAR_10, LOGFONTW* VAR_11)
{
    static const WCHAR VAR_12[] = {'b','o','l','d','\0'};
    static const WCHAR VAR_13[] = {'i','t','a','l','i','c','\0'};
    static const WCHAR VAR_14[] = {'u','n','d','e','r','l','i','n','e','\0'};
    static const WCHAR VAR_15[] = {'s','t','r','i','k','e','o','u','t','\0'};
    int VAR_16;
    WCHAR VAR_17[32];

    if(!FUNC_3(VAR_8, VAR_9, &VAR_8, VAR_11->lfFaceName, VAR_4)) {
        FUNC_6("Property is there, but failed to get face name\n");
        *VAR_10 = VAR_8;
        return VAR_1;
    }
    if(!FUNC_2(VAR_8, VAR_9, &VAR_8, &VAR_16)) {
        FUNC_6("Property is there, but failed to get point size\n");
        *VAR_10 = VAR_8;
        return VAR_1;
    }
    if(VAR_16 > 0)
    {
        HDC VAR_18 = FUNC_0(0);
        VAR_16 = -FUNC_4(VAR_16, FUNC_1(VAR_18, VAR_5), 72);
        FUNC_5(0, VAR_18);
    }

    VAR_11->lfHeight = VAR_16;
    VAR_11->lfWeight = VAR_3;
    VAR_11->lfCharSet = VAR_0;
    while(FUNC_3(VAR_8, VAR_9, &VAR_8, VAR_17, sizeof(VAR_17)/sizeof(VAR_17[0]))) {
        if(!FUNC_7(VAR_12, VAR_17)) VAR_11->lfWeight = VAR_2;
        else if(!FUNC_7(VAR_13, VAR_17)) VAR_11->lfItalic = VAR_7;
        else if(!FUNC_7(VAR_14, VAR_17)) VAR_11->lfUnderline = VAR_7;
        else if(!FUNC_7(VAR_15, VAR_17)) VAR_11->lfStrikeOut = VAR_7;
    }
    *VAR_10 = VAR_8;
    return VAR_6;
}
