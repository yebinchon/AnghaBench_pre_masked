
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t DWORD ;


 int FUNC_0 (int**,size_t*,size_t) ;

__attribute__((used)) static void FUNC_1(WCHAR **VAR_0, DWORD *VAR_1, DWORD *VAR_2, WCHAR *VAR_3, DWORD VAR_4)
{
    DWORD VAR_5, VAR_6;
    DWORD VAR_7 = 0;

    FUNC_0(VAR_0, VAR_1, *VAR_2 + VAR_4 + 10);


    VAR_6 = *VAR_2;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        WCHAR VAR_8 = VAR_3[VAR_5];
        switch (VAR_8) {
        case '\n':
            VAR_7++;
            FUNC_0(VAR_0, VAR_1, *VAR_2 + VAR_4 + VAR_7);
            (*VAR_0)[VAR_6++] = '\\';
            (*VAR_0)[VAR_6++] = 'n';
            break;

        case '\\':
        case '"':
            VAR_7++;
            FUNC_0(VAR_0, VAR_1, *VAR_2 + VAR_4 + VAR_7);
            (*VAR_0)[VAR_6++] = '\\';


        default:
            (*VAR_0)[VAR_6++] = VAR_8;
            break;
        }
    }
    (*VAR_0)[VAR_6] = '\0';
    *VAR_2 = VAR_6;
}
