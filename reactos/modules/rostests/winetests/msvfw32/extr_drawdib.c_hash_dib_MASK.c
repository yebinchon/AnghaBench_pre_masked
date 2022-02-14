
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_buf ;
typedef int HCRYPTHASH ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*,int*,int ) ;
 int FUNC_3 (int ,void const*,int,int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 char* FUNC_5 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static char *FUNC_7(const BITMAPINFO *VAR_3, const void *VAR_4)
{
    DWORD VAR_5 = FUNC_6(VAR_3);
    HCRYPTHASH VAR_6;
    char *VAR_7;
    BYTE VAR_8[20];
    DWORD VAR_9 = sizeof(VAR_8);
    int VAR_10;
    static const char *VAR_11 = "0123456789abcdef";

    if(!VAR_2) return ((void*)0);

    if(!FUNC_0(VAR_2, VAR_0, 0, 0, &VAR_6)) return ((void*)0);

    FUNC_3(VAR_6, VAR_4, VAR_5, 0);

    FUNC_2(VAR_6, VAR_1, ((void*)0), &VAR_9, 0);
    if(VAR_9 != sizeof(VAR_8)) return ((void*)0);

    FUNC_2(VAR_6, VAR_1, VAR_8, &VAR_9, 0);
    FUNC_1(VAR_6);

    VAR_7 = FUNC_5(FUNC_4(), 0, VAR_9 * 2 + 1);

    for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
        VAR_7[VAR_10 * 2] = VAR_11[VAR_8[VAR_10] >> 4];
        VAR_7[VAR_10 * 2 + 1] = VAR_11[VAR_8[VAR_10] & 0xf];
    }
    VAR_7[VAR_10 * 2] = '\0';

    return VAR_7;
}
