
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strbuf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int,int) ;

__attribute__((used)) static strbuf *
FUNC_3(strbuf *VAR_1, FILE *VAR_2) {
    int VAR_3, VAR_4 = 0;

    while ((VAR_3 = FUNC_1(VAR_2)) != VAR_0) {
        VAR_1 = FUNC_2(VAR_1, VAR_4++, VAR_3);
        if (VAR_3 == '\n') {
            break;
        }
    }
    if (VAR_4 == 0) {
        if (VAR_1 != 0) {
            FUNC_0(VAR_1);
        }
        return 0;
    }
    return FUNC_2(VAR_1, VAR_4, 0);
}
