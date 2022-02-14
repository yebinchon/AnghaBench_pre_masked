
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {char const* member_0; char const* member_1; } ;
typedef int IShellItem ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ COMDLG_FILTERSPEC ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (char*,int *,int *,void**) ;
 int FUNC_5 (char const*,int *,char const*,TYPE_1__ const*,int,char const*) ;
 int FUNC_6 (char const*,char const*,TYPE_1__ const*,int,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IShellItem *VAR_3;
    HRESULT VAR_4;
    WCHAR VAR_5[VAR_1];

    static const WCHAR VAR_6[] = {'w','i','n','e','t','e','s','t',0};
    static const WCHAR VAR_7[] = {'w','i','n','e','t','e','s','t','.',0};
    static const WCHAR VAR_8[] = {'w','i','n','e','t','e','s','t','.','.','w','t','e',0};
    static const WCHAR VAR_9[] = {'w','i','n','e','t','e','s','t','.','w','t','e',0};
    static const WCHAR VAR_10[] = {'w','i','n','e','t','e','s','t','.','w','t','1',0};
    static const WCHAR VAR_11[] = {'w','i','n','e','t','e','s','t','.','w','t','2',0};
    static const WCHAR VAR_12[] =
        {'w','i','n','e','t','e','s','t','.','w','t','1','.','w','t','e',0};
    static const WCHAR VAR_13[] = {'w','t','e',0};
    static const WCHAR VAR_14[] = {'d','e','s','c','r','i','p','t','i','o','n','1',0};
    static const WCHAR VAR_15[] = {'d','e','s','c','r','i','p','t','i','o','n','2',0};
    static const WCHAR VAR_16[] = {'d','e','f','a','u','l','t',' ','d','e','s','c',0};
    static const WCHAR VAR_17[] = {'*','.','w','t','1',0};
    static const WCHAR VAR_18[] = {'*','.','w','t','2',0};
    static const WCHAR VAR_19[] = {'*','.','w','t','e',0};
    static const WCHAR VAR_20[] = {'*','.','w','t','2',';','*','.','w','t','1',0};

    static const COMDLG_FILTERSPEC VAR_21[] = {
        { VAR_14, VAR_17 }, { VAR_15, VAR_18 }, { VAR_16, VAR_19 }
    };
    static const COMDLG_FILTERSPEC VAR_22[] = {
        { VAR_14, VAR_20 }
    };


    FUNC_6(VAR_6, ((void*)0), ((void*)0), 0, VAR_6);

    FUNC_6(VAR_6, VAR_13, ((void*)0), 0, VAR_9);

    FUNC_6(VAR_7, VAR_13, ((void*)0), 0, VAR_8);

    FUNC_6(VAR_9, VAR_13, ((void*)0), 0, VAR_9);

    FUNC_6(VAR_10, VAR_13, ((void*)0), 0, VAR_12);

    FUNC_6(VAR_6, VAR_13, VAR_21, 2, VAR_10);

    FUNC_6(VAR_6, VAR_13, VAR_21, 3, VAR_10);

    FUNC_6(VAR_6, VAR_13, VAR_22, 1, VAR_11);

    FUNC_1(VAR_1, VAR_5);
    FUNC_3(!!&FUNC_4, "SHCreateItemFromParsingName is missing.\n");
    VAR_4 = FUNC_4(VAR_5, ((void*)0), &VAR_0, (void**)&VAR_3);
    FUNC_3(VAR_4 == VAR_2, "Got 0x%08x\n", VAR_4);

    FUNC_7(VAR_6);
    FUNC_7(VAR_9);
    FUNC_7(VAR_11);


    FUNC_5(VAR_6, VAR_3, VAR_13, ((void*)0), 0, VAR_6);

    FUNC_5(VAR_6, VAR_3, VAR_13, VAR_21, 2, VAR_6);

    FUNC_0(VAR_6);

    FUNC_5(VAR_6, VAR_3, VAR_13, ((void*)0), 0, VAR_9);
    if(0)
    {

    FUNC_5(VAR_6, VAR_3, ((void*)0), VAR_21, 2, ((void*)0));
    }

    FUNC_2(VAR_3);
    FUNC_0(VAR_9);
    FUNC_0(VAR_11);
}
