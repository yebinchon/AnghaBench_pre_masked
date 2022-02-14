
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strbuf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char const,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int,char const) ;

__attribute__((used)) static strbuf *
FUNC_3(const char *VAR_1, FILE *VAR_2, const int VAR_3,
    strbuf *VAR_4, FILE *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_9 = VAR_8 = 0;

    while ((VAR_6 = FUNC_1(VAR_2)) != VAR_0) {
        if (VAR_9 > 0 && VAR_6 != VAR_1[VAR_9]) {
            for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
                if (VAR_3 == 0) {
                    VAR_4 = FUNC_2(VAR_4, VAR_8++, VAR_1[VAR_7]);
                }
                else if (VAR_5 != 0) {
                    FUNC_0(VAR_1[VAR_7], VAR_5);
                }
            }
            VAR_9 = 0;
        }



        if (VAR_6 == VAR_1[VAR_9]) {
            if (VAR_1[++VAR_9] == 0) {
                break;
            }
            continue;
        }



        if (VAR_3 == 0) {
            VAR_4 = FUNC_2(VAR_4, VAR_8++, VAR_6);
        }
        else if (VAR_5 != 0) {
            FUNC_0(VAR_6, VAR_5);
        }
    }
    if (VAR_3 == 0) {
        return FUNC_2(VAR_4, VAR_8, 0);
    }
    return 0;
}
