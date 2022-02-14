
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;

char *
FUNC_1(const char *VAR_0) {
    char *VAR_1, *VAR_2;
    int VAR_3, VAR_4;

    if (VAR_0 == 0) {
        return 0;
    }
    for (VAR_3 = VAR_4 = 0; VAR_0[VAR_3] != 0; VAR_3++) {
        switch(VAR_0[VAR_3]) {

        case '<':
        case '>':
            VAR_4 += 4;
            break;
        case '&':
        case '\'':
        case '\r':
        case '\n':
            VAR_4 += 5;
            break;
        case '"':
            VAR_4 += 6;
            break;
        default:
            VAR_4++;
            break;
        }
    }
    VAR_1 = VAR_2 = FUNC_0(VAR_4 + 1);

    for (VAR_3 = 0; VAR_0[VAR_3] != 0; VAR_3++) {
        switch(VAR_0[VAR_3]) {

        case '<':
            *VAR_2++ = '&';
            *VAR_2++ = 'l';
            *VAR_2++ = 't';
            *VAR_2++ = ';';
            break;
        case '>':
            *VAR_2++ = '&';
            *VAR_2++ = 'g';
            *VAR_2++ = 't';
            *VAR_2++ = ';';
            break;
        case '&':
            *VAR_2++ = '&';
            *VAR_2++ = 'a';
            *VAR_2++ = 'm';
            *VAR_2++ = 'p';
            *VAR_2++ = ';';
            break;
        case '\'':
            *VAR_2++ = '&';
            *VAR_2++ = '#';
            *VAR_2++ = '3';
            *VAR_2++ = '9';
            *VAR_2++ = ';';
            break;
        case '\r':
            *VAR_2++ = '&';
            *VAR_2++ = '#';
            *VAR_2++ = '1';
            *VAR_2++ = '3';
            *VAR_2++ = ';';
            break;
        case '\n':
            *VAR_2++ = '&';
            *VAR_2++ = '#';
            *VAR_2++ = '1';
            *VAR_2++ = '0';
            *VAR_2++ = ';';
            break;
        case '"':
            *VAR_2++ = '&';
            *VAR_2++ = 'q';
            *VAR_2++ = 'u';
            *VAR_2++ = 'o';
            *VAR_2++ = 't';
            *VAR_2++ = ';';
            break;
        default:
            *VAR_2++ = VAR_0[VAR_3];
            break;
        }
    }
    *VAR_2 = 0;
    return VAR_1;
}
