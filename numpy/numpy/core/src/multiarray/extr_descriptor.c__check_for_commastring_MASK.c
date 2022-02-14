
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, Py_ssize_t VAR_1)
{
    Py_ssize_t VAR_2;
    int VAR_3;


    if ((VAR_0[0] >= '0'
                && VAR_0[0] <= '9')
            || ((VAR_1 > 1)
                && FUNC_0(VAR_0[0])
                && (VAR_0[1] >= '0'
                && VAR_0[1] <= '9'))) {
        return 1;
    }

    if (((VAR_1 > 1)
                && (VAR_0[0] == '('
                && VAR_0[1] == ')'))
            || ((VAR_1 > 3)
                && FUNC_0(VAR_0[0])
                && (VAR_0[1] == '('
                && VAR_0[2] == ')'))) {
        return 1;
    }




    VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        switch (VAR_0[VAR_2]) {
            case ',':
                if (VAR_3 == 0) {
                    return 1;
                }
                break;
            case '[':
                ++VAR_3;
                break;
            case ']':
                --VAR_3;
                break;
        }
    }
    return 0;
}
