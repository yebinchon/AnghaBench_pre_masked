
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int HRESULT ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,int,char*,int*) ;
 int VAR_6 ;
 char** VAR_7 ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int,char*,int,...) ;
 char** VAR_8 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    static const WCHAR VAR_9[] = { 'x','m',0 };
    static const WCHAR VAR_10[] = { 'x','m','p',0 };
    static WCHAR VAR_11[] = { 'h','t','t','p',':','/','/','n','s','.','a','d','o','b','e','.','c','o','m','/','x','a','p','/','1','.','0','/',0 };
    static WCHAR VAR_12[] = { 'H','T','T','P',':','/','/','n','s','.','a','d','o','b','e','.','c','o','m','/','x','a','p','/','1','.','0','/',0 };
    HRESULT VAR_13;
    UINT VAR_14, VAR_15, VAR_16;
    WCHAR VAR_17[16];

    VAR_13 = FUNC_3(&VAR_2, ((void*)0), 0, ((void*)0), ((void*)0));
    FUNC_5(VAR_13 == VAR_1, "got %#x\n", VAR_13);

    VAR_13 = FUNC_3(&VAR_2, VAR_11, 0, ((void*)0), ((void*)0));
    FUNC_5(VAR_13 == VAR_1, "got %#x\n", VAR_13);

    VAR_13 = FUNC_3(&VAR_2, VAR_11, 0, ((void*)0), &VAR_14);
    FUNC_5(VAR_13 == VAR_6, "got %#x\n", VAR_13);

    VAR_13 = FUNC_3(((void*)0), VAR_11, 0, ((void*)0), &VAR_14);
    FUNC_5(VAR_13 == VAR_1, "got %#x\n", VAR_13);

    VAR_13 = FUNC_3(&VAR_3, VAR_11, 0, ((void*)0), ((void*)0));
    FUNC_5(VAR_13 == VAR_1, "got %#x\n", VAR_13);

    VAR_14 = 0xdeadbeef;
    VAR_13 = FUNC_3(&VAR_3, VAR_11, 0, ((void*)0), &VAR_14);
    FUNC_5(VAR_13 == VAR_5, "got %#x\n", VAR_13);
    FUNC_5(VAR_14 == 4, "got %u\n", VAR_14);

    VAR_14 = 0xdeadbeef;
    VAR_13 = FUNC_3(&VAR_3, VAR_11, 4, ((void*)0), &VAR_14);
    FUNC_5(VAR_13 == VAR_5, "got %#x\n", VAR_13);
    FUNC_5(VAR_14 == 4, "got %u\n", VAR_14);

    VAR_14 = 0xdeadbeef;
    VAR_13 = FUNC_3(&VAR_3, VAR_12, 0, ((void*)0), &VAR_14);
    FUNC_5(VAR_13 == VAR_6, "got %#x\n", VAR_13);
    FUNC_5(VAR_14 == 0xdeadbeef, "got %u\n", VAR_14);

    VAR_17[0] = 0;
    VAR_14 = 0xdeadbeef;
    VAR_13 = FUNC_3(&VAR_3, VAR_11, 4, VAR_17, &VAR_14);
    FUNC_5(VAR_13 == VAR_5, "got %#x\n", VAR_13);
    FUNC_5(VAR_14 == 4, "got %u\n", VAR_14);
    FUNC_5(!FUNC_4(VAR_17, VAR_10), "got %s\n", FUNC_8(VAR_17));

    VAR_14 = 0xdeadbeef;
    VAR_13 = FUNC_3(&VAR_3, VAR_11, 0, VAR_17, &VAR_14);
    FUNC_5(VAR_13 == VAR_1, "got %#x\n", VAR_13);
    FUNC_5(VAR_14 == 0xdeadbeef, "got %u\n", VAR_14);

    VAR_17[0] = 0;
    VAR_14 = 0xdeadbeef;
    VAR_13 = FUNC_3(&VAR_3, VAR_11, 3, VAR_17, &VAR_14);
    FUNC_5(VAR_13 == FUNC_1(VAR_0), "got %#x\n", VAR_13);
    FUNC_5(VAR_14 == 0xdeadbeef, "got %u\n", VAR_14);
    FUNC_5(!FUNC_4(VAR_17, VAR_9), "got %s\n", FUNC_8(VAR_17));

    VAR_13 = FUNC_3(&VAR_3, VAR_11, 4, VAR_17, ((void*)0));
    FUNC_5(VAR_13 == VAR_1, "got %#x\n", VAR_13);


    VAR_13 = FUNC_3(&VAR_3, VAR_8[0], 0, ((void*)0), &VAR_14);
    if (VAR_13 == VAR_6)
    {
        FUNC_6("Modern schemas are not supported\n");
        return;
    }

    for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_7); VAR_15++)
    {
        for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_8); VAR_16++)
        {
            VAR_13 = FUNC_3(VAR_7[VAR_15], VAR_8[VAR_16], 0, ((void*)0), &VAR_14);
            if (FUNC_2(VAR_7[VAR_15], &VAR_3) ||
                FUNC_2(VAR_7[VAR_15], &VAR_4))
            {
                FUNC_5(VAR_13 == VAR_5, "%u: %u: format %s does not support schema %s\n",
                   VAR_15, VAR_16, FUNC_7(VAR_7[VAR_15]), FUNC_8(VAR_8[VAR_16]));
            }
            else
            {
                FUNC_5(VAR_13 == VAR_6, "%u: %u: format %s supports schema %s\n",
                   VAR_15, VAR_16, FUNC_7(VAR_7[VAR_15]), FUNC_8(VAR_8[VAR_16]));
            }
        }
    }
}
