
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char,int,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_1, PyObject **VAR_2)
{
    PyArray_Descr *VAR_3;

    int VAR_4 = 0;
    char VAR_5 = '=';
    int VAR_6 = 0;

    int VAR_7 = VAR_0;
    int VAR_8 = 0;

    for (; *VAR_1 != '\0'; ++VAR_1) {
        VAR_6 = 0;
        switch (*VAR_1) {
        case '@':
        case '^':

            VAR_5 = '=';
            VAR_4 = 0;
            break;
        case '<':
            VAR_5 = '<';
            VAR_4 = 1;
            break;
        case '>':
        case '!':
            VAR_5 = '>';
            VAR_4 = 1;
            break;
        case '=':
            VAR_5 = '=';
            VAR_4 = 1;
            break;
        case 'Z':
            VAR_6 = 1;
            ++VAR_1;
        default:
            if (VAR_8) {

                return 0;
            }
            VAR_7 = FUNC_3(*VAR_1, !VAR_4,
                                               VAR_6);
            if (VAR_7 < 0) {

                return 0;
            }
            VAR_8 = 1;
            break;
        }
    }

    if (!VAR_8) {
        return 0;
    }

    VAR_3 = FUNC_0(VAR_7);
    if (VAR_5 == '=') {
        *VAR_2 = (PyObject*)VAR_3;
    }
    else {
        *VAR_2 = (PyObject*)FUNC_1(VAR_3, VAR_5);
        FUNC_2(VAR_3);
    }

    return 1;
}
