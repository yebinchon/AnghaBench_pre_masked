
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

BOOL FUNC_2(WCHAR *VAR_2, size_t *VAR_3)
{
    WCHAR *VAR_4, *VAR_5, VAR_6, *VAR_7 = VAR_2 + *VAR_3;
    int VAR_8;

    VAR_4 = VAR_5 = VAR_2;
    while(VAR_5 < VAR_7) {
        if(*VAR_5 != '\\') {
            *VAR_4++ = *VAR_5++;
            continue;
        }

        if(++VAR_5 == VAR_7)
            return VAR_0;

        switch(*VAR_5) {
        case '\'':
        case '\"':
        case '\\':
            VAR_6 = *VAR_5;
            break;
        case 'b':
            VAR_6 = '\b';
            break;
        case 't':
            VAR_6 = '\t';
            break;
        case 'n':
            VAR_6 = '\n';
            break;
        case 'f':
            VAR_6 = '\f';
            break;
        case 'r':
            VAR_6 = '\r';
            break;
        case 'x':
            if(VAR_5 + 2 >= VAR_7)
                return VAR_0;
            VAR_8 = FUNC_0(*++VAR_5);
            if(VAR_8 == -1)
                return VAR_0;
            VAR_6 = VAR_8 << 4;

            VAR_8 = FUNC_0(*++VAR_5);
            if(VAR_8 == -1)
                return VAR_0;
            VAR_6 += VAR_8;
            break;
        case 'u':
            if(VAR_5 + 4 >= VAR_7)
                return VAR_0;
            VAR_8 = FUNC_0(*++VAR_5);
            if(VAR_8 == -1)
                return VAR_0;
            VAR_6 = VAR_8 << 12;

            VAR_8 = FUNC_0(*++VAR_5);
            if(VAR_8 == -1)
                return VAR_0;
            VAR_6 += VAR_8 << 8;

            VAR_8 = FUNC_0(*++VAR_5);
            if(VAR_8 == -1)
                return VAR_0;
            VAR_6 += VAR_8 << 4;

            VAR_8 = FUNC_0(*++VAR_5);
            if(VAR_8 == -1)
                return VAR_0;
            VAR_6 += VAR_8;
            break;
        default:
            if(FUNC_1(*VAR_5)) {
                VAR_6 = *VAR_5++ - '0';
                if(VAR_5 < VAR_7 && FUNC_1(*VAR_5)) {
                    VAR_6 = VAR_6*8 + (*VAR_5++ - '0');
                    if(VAR_5 < VAR_7 && FUNC_1(*VAR_5))
                        VAR_6 = VAR_6*8 + (*VAR_5++ - '0');
                }
                VAR_5--;
            }
            else
                VAR_6 = *VAR_5;
        }

        *VAR_4++ = VAR_6;
        VAR_5++;
    }

    *VAR_3 = VAR_4 - VAR_2;
    return VAR_1;
}
