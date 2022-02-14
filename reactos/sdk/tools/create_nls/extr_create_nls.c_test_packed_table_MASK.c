
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t DWORD ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int*) ;

__attribute__((used)) static void FUNC_3(WCHAR *VAR_0)
{
    WCHAR VAR_1[] = L"This is an English text. \x0CF\x0EE-\x0F0\x0F3\x0F1\x0F1\x0EA\x0E8 \x0FF \x0EF\x0E8\x0F1\x0E0\x0F2\x0FC \x0F3\x0EC\x0E5\x0FE \x0ED\x0E5\x0EC\x0ED\x0EE\x0E6\x0EA\x0EE. 1234567890";


    DWORD VAR_2, VAR_3;

    VAR_3 = FUNC_2(VAR_1);

    for(VAR_2 = 0; VAR_2 < VAR_3 + 1; VAR_2++) {
        VAR_1[VAR_2] += VAR_0[VAR_0[VAR_0[FUNC_0(VAR_1[VAR_2])] + (FUNC_1(VAR_1[VAR_2]) >> 4)] + (FUNC_1(VAR_1[VAR_2]) & 0x0F)];
    }
}
