
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (char*) ;
 char FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;

__attribute__((used)) static char **
FUNC_5(void) {
    char **VAR_1;
    char *VAR_2, *VAR_3;
    int VAR_4, VAR_5, VAR_6;



    for (VAR_6 = 0; FUNC_3(VAR_5 = FUNC_2(VAR_0)); ) {
        VAR_6 = VAR_6 * 10 + VAR_5 - '0';
    }
    if (VAR_5 != ':' || VAR_6 < 4) {
        return 0;
    }



    VAR_2 = (char *) FUNC_4(VAR_6);
    if (FUNC_0(VAR_2, 1, VAR_6, VAR_0) != VAR_6 || FUNC_2(VAR_0) != ',') {
        FUNC_1(VAR_2);
        return 0;
    }



    for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_6; VAR_4++) {
        if (VAR_2[VAR_4] == 0 && (++VAR_5 & 1)) {
            VAR_2[VAR_4] = '=';
        }
    }



    VAR_5 = VAR_5 / 2 + 1;
    VAR_1 = (char **) FUNC_4(VAR_5 * sizeof(*VAR_1));
    VAR_3 = VAR_2;
    for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_6; VAR_4++) {
        if (VAR_2[VAR_4] == 0) {
            VAR_1[VAR_5++] = VAR_3;
            VAR_3 = VAR_2 + VAR_4 + 1;
        }
    }
    VAR_1[VAR_5] = 0;
    return VAR_1;
}
