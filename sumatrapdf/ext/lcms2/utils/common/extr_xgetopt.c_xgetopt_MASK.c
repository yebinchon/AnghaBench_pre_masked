
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,unsigned char) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

int FUNC_2(int VAR_8, char *VAR_9[], char *VAR_10)
{
    unsigned char VAR_11;
    char *VAR_12;

    if (VAR_2 == 0) {
        VAR_2 = '/';
    }

    if (VAR_8 > VAR_7) {
        if (VAR_4 == ((void*)0)) {
            if ((VAR_4 = VAR_9[VAR_7]) == ((void*)0) ||
                *(VAR_4++) != VAR_2) goto gopEOF;
            if (*VAR_4 == VAR_2) {
                VAR_7++; goto gopEOF;
            }
        }
        if (0 == (VAR_11 = *(VAR_4++))) {
            VAR_7++; goto gopEOF;
        }
        if (':' == VAR_11 || (VAR_12 = FUNC_1(VAR_10, VAR_11)) == ((void*)0))
            goto gopError;
        if (':' == *(++VAR_12)) {
            VAR_7++;
            if (0 == *VAR_4) {
                if (VAR_8 <= VAR_7) goto gopError;
                VAR_4 = VAR_9[VAR_7++];
            }
            VAR_5 = VAR_4;
            VAR_4 = ((void*)0);
        } else {
            if (0 == *VAR_4) {
                VAR_7++;
                VAR_4 = ((void*)0);
            }
            VAR_5 = ((void*)0);
        }
        return VAR_11;
    }
gopEOF:
    VAR_5 = VAR_4 = ((void*)0);
    return VAR_1;

gopError:
    VAR_5 = ((void*)0);
    VAR_3 = VAR_0;
    if (VAR_6)
        FUNC_0 ("get command line option");
    return ('?');
}
