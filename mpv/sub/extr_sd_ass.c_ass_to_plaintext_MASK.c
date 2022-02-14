
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char const) ;

__attribute__((used)) static void FUNC_1(struct buf *VAR_0, const char *VAR_1)
{
    bool VAR_2 = 0;
    const char *VAR_3 = ((void*)0);
    bool VAR_4 = 0;
    while (*VAR_1) {
        if (VAR_2) {
            if (VAR_1[0] == '}') {
                VAR_1 += 1;
                VAR_2 = 0;
            } else if (VAR_1[0] == '\\' && VAR_1[1] == 'p') {
                VAR_1 += 2;


                VAR_4 = 0;
                while (VAR_1[0] >= '0' && VAR_1[0] <= '9') {
                    if (VAR_1[0] != '0')
                        VAR_4 = 1;
                    VAR_1 += 1;
                }
            } else {
                VAR_1 += 1;
            }
        } else {
            if (VAR_1[0] == '\\' && (VAR_1[1] == 'N' || VAR_1[1] == 'n')) {
                VAR_1 += 2;
                FUNC_0(VAR_0, '\n');
            } else if (VAR_1[0] == '\\' && VAR_1[1] == 'h') {
                VAR_1 += 2;
                FUNC_0(VAR_0, ' ');
            } else if (VAR_1[0] == '{') {
                VAR_3 = VAR_1;
                VAR_1 += 1;
                VAR_2 = 1;
            } else {
                if (!VAR_4)
                    FUNC_0(VAR_0, VAR_1[0]);
                VAR_1 += 1;
            }
        }
    }

    if (VAR_2) {
        while (*VAR_3)
            FUNC_0(VAR_0, *VAR_3++);
    }
}
