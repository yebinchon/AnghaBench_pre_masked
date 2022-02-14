
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char WCHAR ;
typedef int UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,unsigned char*,int*) ;
 int VAR_5 ;
 int FUNC_2 (unsigned char*,unsigned char const*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const WCHAR VAR_6[] = { 'u','n','k',0 };
    static const WCHAR VAR_7[] = { 'u','n','k','n','o','w','n',0 };
    HRESULT VAR_8;
    UINT VAR_9;
    WCHAR VAR_10[16];

    VAR_10[0] = 0;
    VAR_9 = 0xdeadbeef;
    VAR_8 = FUNC_1(&VAR_2, 8, VAR_10, &VAR_9);
    FUNC_3(VAR_8 == VAR_4, "got %#x\n", VAR_8);
    FUNC_3(VAR_9 == 8, "got %u\n", VAR_9);
    FUNC_3(!FUNC_2(VAR_10, VAR_7), "got %s\n", FUNC_4(VAR_10));

    VAR_10[0] = 0;
    VAR_8 = FUNC_1(&VAR_2, 8, VAR_10, ((void*)0));
    FUNC_3(VAR_8 == VAR_4, "got %#x\n", VAR_8);
    FUNC_3(!FUNC_2(VAR_10, VAR_7), "got %s\n", FUNC_4(VAR_10));

    VAR_9 = 0xdeadbeef;
    VAR_8 = FUNC_1(&VAR_2, 8, ((void*)0), &VAR_9);
    FUNC_3(VAR_8 == VAR_4, "got %#x\n", VAR_8);
    FUNC_3(VAR_9 == 8, "got %u\n", VAR_9);

    VAR_9 = 0xdeadbeef;
    VAR_8 = FUNC_1(&VAR_2, 0, ((void*)0), &VAR_9);
    FUNC_3(VAR_8 == VAR_4, "got %#x\n", VAR_8);
    FUNC_3(VAR_9 == 8, "got %u\n", VAR_9);

    VAR_8 = FUNC_1(&VAR_2, 0, ((void*)0), ((void*)0));
    FUNC_3(VAR_8 == VAR_4, "got %#x\n", VAR_8);

    VAR_8 = FUNC_1(&VAR_2, 8, ((void*)0), ((void*)0));
    FUNC_3(VAR_8 == VAR_4, "got %#x\n", VAR_8);

    VAR_8 = FUNC_1(&VAR_3, 0, ((void*)0), ((void*)0));
    FUNC_3(VAR_8 == VAR_5, "got %#x\n", VAR_8);

    VAR_10[0] = 0;
    VAR_9 = 0xdeadbeef;
    VAR_8 = FUNC_1(&VAR_2, 4, VAR_10, &VAR_9);
    FUNC_3(VAR_8 == FUNC_0(VAR_0), "got %#x\n", VAR_8);
    FUNC_3(VAR_9 == 0xdeadbeef, "got %u\n", VAR_9);
    FUNC_3(!FUNC_2(VAR_10, VAR_6), "got %s\n", FUNC_4(VAR_10));

    VAR_10[0] = 0;
    VAR_9 = 0xdeadbeef;
    VAR_8 = FUNC_1(&VAR_2, 0, VAR_10, &VAR_9);
    FUNC_3(VAR_8 == VAR_1, "got %#x\n", VAR_8);
    FUNC_3(VAR_9 == 0xdeadbeef, "got %u\n", VAR_9);
    FUNC_3(!VAR_10[0], "got %s\n", FUNC_4(VAR_10));

    VAR_8 = FUNC_1(((void*)0), 8, VAR_10, ((void*)0));
    FUNC_3(VAR_8 == VAR_1, "got %#x\n", VAR_8);
}
