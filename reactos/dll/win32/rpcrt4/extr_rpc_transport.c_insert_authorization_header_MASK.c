
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONG ;
typedef int RPC_STATUS ;
typedef int HINTERNET ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*,int,int) ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static RPC_STATUS FUNC_8(HINTERNET VAR_4, ULONG VAR_5, char *VAR_6, int VAR_7)
{
    static const WCHAR VAR_8[] = {'A','u','t','h','o','r','i','z','a','t','i','o','n',':',' '};
    static const WCHAR VAR_9[] = {'B','a','s','i','c',' '};
    static const WCHAR VAR_10[] = {'N','e','g','o','t','i','a','t','e',' '};
    static const WCHAR VAR_11[] = {'N','T','L','M',' '};
    int VAR_12, VAR_13 = FUNC_0(VAR_8), VAR_14 = ((VAR_7 + 2) * 4) / 3;
    const WCHAR *VAR_15;
    WCHAR *VAR_16, *VAR_17;
    RPC_STATUS VAR_18 = VAR_3;

    switch (VAR_5)
    {
    case 130:
        VAR_15 = VAR_9;
        VAR_12 = FUNC_0(VAR_9);
        break;
    case 129:
        VAR_15 = VAR_10;
        VAR_12 = FUNC_0(VAR_10);
        break;
    case 128:
        VAR_15 = VAR_11;
        VAR_12 = FUNC_0(VAR_11);
        break;
    default:
        FUNC_1("unknown scheme %u\n", VAR_5);
        return VAR_3;
    }
    if ((VAR_16 = FUNC_3(FUNC_2(), 0, (VAR_13 + VAR_12 + VAR_14 + 2) * sizeof(WCHAR))))
    {
        FUNC_7(VAR_16, VAR_8, VAR_13 * sizeof(WCHAR));
        VAR_17 = VAR_16 + VAR_13;
        FUNC_7(VAR_17, VAR_15, VAR_12 * sizeof(WCHAR));
        VAR_17 += VAR_12;
        VAR_14 = FUNC_6(VAR_6, VAR_7, VAR_17);
        VAR_17[VAR_14++] = '\r';
        VAR_17[VAR_14++] = '\n';
        VAR_17[VAR_14] = 0;
        if (FUNC_5(VAR_4, VAR_16, -1, VAR_0|VAR_1))
            VAR_18 = VAR_2;
        FUNC_4(FUNC_2(), 0, VAR_16);
    }
    return VAR_18;
}
