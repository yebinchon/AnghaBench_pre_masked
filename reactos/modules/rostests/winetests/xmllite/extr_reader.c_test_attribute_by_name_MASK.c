
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IXmlReader ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const char *VAR_5 = "<a><elem xmlns=\"myns\" a=\"value a\" b=\"value b\" xmlns:ns=\"ns uri\" "
        "ns:c=\"value c\" c=\"value c2\"/></a>";
    static const WCHAR VAR_6[] = {'h','t','t','p',':','/','/','w','w','w','.','w','3','.','o','r','g','/',
        '2','0','0','0','/','x','m','l','n','s','/',0};
    static const WCHAR VAR_7[] = {'n','s',' ','u','r','i',0};
    static const WCHAR VAR_8[] = {'x','m','l','n','s',0};
    static const WCHAR VAR_9[] = {'m','y','n','s',0};
    static const WCHAR VAR_10[] = {'n','s',0};
    static const WCHAR VAR_11[] = {0};
    static const WCHAR VAR_12[] = {'a',0};
    static const WCHAR VAR_13[] = {'b',0};
    static const WCHAR VAR_14[] = {'c',0};
    IXmlReader *VAR_15;
    HRESULT VAR_16;

    VAR_16 = FUNC_0(&VAR_1, (void **)&VAR_15, ((void*)0));
    FUNC_4(VAR_16 == VAR_3, "Failed to create reader, hr %#x.\n", VAR_16);

    FUNC_7(VAR_15, VAR_5);

    VAR_16 = FUNC_1(VAR_15, ((void*)0), ((void*)0));
    FUNC_4(VAR_16 == VAR_0 || FUNC_3(VAR_16 == VAR_2) , "Unexpected hr %#x.\n", VAR_16);

    VAR_16 = FUNC_1(VAR_15, VAR_11, ((void*)0));
    FUNC_4(VAR_16 == VAR_2, "Unexpected hr %#x.\n", VAR_16);

    FUNC_5(VAR_15, VAR_4);

    VAR_16 = FUNC_1(VAR_15, VAR_11, ((void*)0));
    FUNC_4(VAR_16 == VAR_2, "Unexpected hr %#x.\n", VAR_16);

    FUNC_5(VAR_15, VAR_4);

    VAR_16 = FUNC_1(VAR_15, ((void*)0), ((void*)0));
    FUNC_4(VAR_16 == VAR_0, "Unexpected hr %#x.\n", VAR_16);

    VAR_16 = FUNC_1(VAR_15, ((void*)0), VAR_6);
    FUNC_4(VAR_16 == VAR_0, "Unexpected hr %#x.\n", VAR_16);

    VAR_16 = FUNC_1(VAR_15, VAR_11, VAR_6);
    FUNC_4(VAR_16 == VAR_2, "Unexpected hr %#x.\n", VAR_16);

    VAR_16 = FUNC_1(VAR_15, VAR_8, ((void*)0));
    FUNC_4(VAR_16 == VAR_2, "Unexpected hr %#x.\n", VAR_16);

    VAR_16 = FUNC_1(VAR_15, VAR_8, VAR_6);
    FUNC_4(VAR_16 == VAR_3, "Unexpected hr %#x.\n", VAR_16);
    FUNC_6(VAR_15, "myns");

    VAR_16 = FUNC_1(VAR_15, VAR_12, ((void*)0));
    FUNC_4(VAR_16 == VAR_3, "Unexpected hr %#x.\n", VAR_16);
    FUNC_6(VAR_15, "value a");

    VAR_16 = FUNC_1(VAR_15, VAR_13, ((void*)0));
    FUNC_4(VAR_16 == VAR_3, "Unexpected hr %#x.\n", VAR_16);
    FUNC_6(VAR_15, "value b");

    VAR_16 = FUNC_1(VAR_15, VAR_12, VAR_9);
    FUNC_4(VAR_16 == VAR_2, "Unexpected hr %#x.\n", VAR_16);

    VAR_16 = FUNC_1(VAR_15, VAR_10, ((void*)0));
    FUNC_4(VAR_16 == VAR_2, "Unexpected hr %#x.\n", VAR_16);

    VAR_16 = FUNC_1(VAR_15, VAR_10, VAR_6);
    FUNC_4(VAR_16 == VAR_3, "Unexpected hr %#x.\n", VAR_16);
    FUNC_6(VAR_15, "ns uri");

    VAR_16 = FUNC_1(VAR_15, VAR_13, VAR_11);
    FUNC_4(VAR_16 == VAR_3, "Unexpected hr %#x.\n", VAR_16);
    FUNC_6(VAR_15, "value b");

    VAR_16 = FUNC_1(VAR_15, VAR_14, ((void*)0));
    FUNC_4(VAR_16 == VAR_3, "Unexpected hr %#x.\n", VAR_16);
    FUNC_6(VAR_15, "value c2");

    VAR_16 = FUNC_1(VAR_15, VAR_14, VAR_7);
    FUNC_4(VAR_16 == VAR_3, "Unexpected hr %#x.\n", VAR_16);
    FUNC_6(VAR_15, "value c");

    FUNC_2(VAR_15);
}
