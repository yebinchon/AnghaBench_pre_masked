
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int broken_lcid; int lcid; int hr; int rfc1766; } ;
typedef int LCID ;
typedef int IMultiLanguage2 ;
typedef int HRESULT ;
typedef size_t DWORD ;
typedef int BSTR ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int*,char*) ;
 int FUNC_2 (int *,int,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int,char*,size_t,...) ;
 int FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_7(IMultiLanguage2 *VAR_7)
{
    WCHAR VAR_8[VAR_3 + 1];
    LCID VAR_9;
    HRESULT VAR_10;
    DWORD VAR_11;

    static WCHAR VAR_12[] = { 'e','n',0 };
    static WCHAR VAR_13[] = { 'e','n','-','t','h','e','m',0 };
    static WCHAR VAR_14[] = { 'e','n','g','l','i','s','h',0 };


    for(VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++) {
        VAR_9 = -1;
        FUNC_3(VAR_0, 0, VAR_6[VAR_11].rfc1766, -1, VAR_8, VAR_3);
        VAR_10 = FUNC_1(VAR_7, &VAR_9, VAR_8);


        FUNC_5((VAR_10 == VAR_6[VAR_11].hr) ||
            FUNC_4(VAR_6[VAR_11].broken_lcid && (VAR_10 == VAR_4)),
            "#%02d: HRESULT 0x%x (expected 0x%x)\n", VAR_11, VAR_10, VAR_6[VAR_11].hr);

        FUNC_5((VAR_9 == VAR_6[VAR_11].lcid) ||
            FUNC_4(VAR_9 == VAR_6[VAR_11].broken_lcid),
            "#%02d: got LCID 0x%x (expected 0x%x)\n", VAR_11, VAR_9, VAR_6[VAR_11].lcid);
    }


    VAR_10 = FUNC_1(VAR_7, ((void*)0), VAR_12);
    FUNC_5(VAR_10 == VAR_2, "GetLcidFromRfc1766 returned: %08x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_7, &VAR_9, ((void*)0));
    FUNC_5(VAR_10 == VAR_2, "GetLcidFromRfc1766 returned: %08x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_7, &VAR_9, VAR_13);
    FUNC_5((VAR_10 == VAR_1 || VAR_10 == VAR_4), "GetLcidFromRfc1766 returned: %08x\n", VAR_10);
    if (VAR_10 == VAR_4)
    {
        BSTR VAR_15;
        static WCHAR VAR_16[] = {'e','n',0};

        VAR_10 = FUNC_2(VAR_7, VAR_9, &VAR_15);
        FUNC_5(VAR_10 == VAR_5, "Expected S_OK, got %08x\n", VAR_10);
        FUNC_6("Expected \"%s\",  got \"%s\"n", VAR_16, VAR_15);
    }

    VAR_10 = FUNC_1(VAR_7, &VAR_9, VAR_14);
    FUNC_5((VAR_10 == VAR_1 || VAR_10 == VAR_4), "GetLcidFromRfc1766 returned: %08x\n", VAR_10);
    if (VAR_10 == VAR_4)
    {
        BSTR VAR_17;
        static WCHAR VAR_18[] = {'e','n',0};

        VAR_10 = FUNC_2(VAR_7, VAR_9, &VAR_17);
        FUNC_5(VAR_10 == VAR_5, "Expected S_OK, got %08x\n", VAR_10);
        FUNC_6("Expected \"%s\",  got \"%s\"n", VAR_18, VAR_17);
    }

}
