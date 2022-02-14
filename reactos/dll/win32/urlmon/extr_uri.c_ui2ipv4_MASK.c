
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int UCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,char const*,int,int,int,int) ;

__attribute__((used)) static DWORD FUNC_1(WCHAR *VAR_0, UINT VAR_1) {
    static const WCHAR VAR_2[] =
        {'%','u','.','%','u','.','%','u','.','%','u',0};
    DWORD VAR_3 = 0;
    UCHAR VAR_4[4];

    VAR_4[0] = (VAR_1 >> 24) & 0xff;
    VAR_4[1] = (VAR_1 >> 16) & 0xff;
    VAR_4[2] = (VAR_1 >> 8) & 0xff;
    VAR_4[3] = VAR_1 & 0xff;

    if(!VAR_0) {
        WCHAR VAR_5[16];
        VAR_3 = FUNC_0(VAR_5, VAR_2, VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3]);
    } else
        VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3]);

    return VAR_3;
}
