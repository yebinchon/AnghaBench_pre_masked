
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buildpath_test {char* path; char* name; char* result; } ;
typedef int HRESULT ;
typedef scalar_t__* BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__*,scalar_t__**) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (char*) ;
 struct buildpath_test* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void FUNC_6(void)
{
    struct buildpath_test *VAR_4 = VAR_2;
    BSTR VAR_5, VAR_6;
    HRESULT VAR_7;
    int VAR_8 = 0;

    VAR_7 = FUNC_0(VAR_3, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);

    VAR_5 = (BSTR)0xdeadbeef;
    VAR_7 = FUNC_0(VAR_3, ((void*)0), ((void*)0), &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    FUNC_4(*VAR_5 == 0, "got %p\n", VAR_5);
    FUNC_1(VAR_5);

    VAR_5 = (BSTR)0xdeadbeef;
    VAR_6 = FUNC_2("path");
    VAR_7 = FUNC_0(VAR_3, VAR_6, ((void*)0), &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    FUNC_4(!FUNC_3(VAR_5, VAR_6), "got %s\n", FUNC_5(VAR_5));
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);

    VAR_5 = (BSTR)0xdeadbeef;
    VAR_6 = FUNC_2("path");
    VAR_7 = FUNC_0(VAR_3, ((void*)0), VAR_6, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    FUNC_4(!FUNC_3(VAR_5, VAR_6), "got %s\n", FUNC_5(VAR_5));
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);

    while (VAR_4->path)
    {
        BSTR VAR_9, VAR_10;

        VAR_5 = ((void*)0);
        VAR_6 = FUNC_2(VAR_4->path);
        VAR_9 = FUNC_2(VAR_4->name);
        VAR_10 = FUNC_2(VAR_4->result);
        VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_9, &VAR_5);
        FUNC_4(VAR_7 == VAR_1, "%d: got 0x%08x\n", VAR_8, VAR_7);
        if (VAR_7 == VAR_1)
        {
            FUNC_4(!FUNC_3(VAR_5, VAR_10), "%d: got wrong path %s, expected %s\n", VAR_8, FUNC_5(VAR_5),
                FUNC_5(VAR_10));
            FUNC_1(VAR_5);
        }
        FUNC_1(VAR_6);
        FUNC_1(VAR_9);
        FUNC_1(VAR_10);

        VAR_8++;
        VAR_4++;
    }
}
