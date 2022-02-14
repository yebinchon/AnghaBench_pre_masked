
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(WCHAR* VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = 0;
    int VAR_4 = FUNC_1(VAR_1);
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++, VAR_3++) {
        if (VAR_1[VAR_2] == '\\') {
            VAR_2++;
            switch (VAR_1[VAR_2]) {
            case 'n':
                VAR_1[VAR_3] = '\n';
                break;
            case '\\':
            case '"':
                VAR_1[VAR_3] = VAR_1[VAR_2];
                break;
            default:
                FUNC_0(VAR_0,"Warning! Unrecognized escape sequence: \\%hhd'\n",
                        VAR_1[VAR_2]);
                VAR_1[VAR_3] = VAR_1[VAR_2];
                break;
            }
        } else {
            VAR_1[VAR_3] = VAR_1[VAR_2];
        }
    }
    VAR_1[VAR_3] = '\0';
}
