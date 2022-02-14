
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 char** VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static char *
FUNC_1(void)

{
    char *VAR_5 = 0;
    int VAR_6 = (VAR_4 - 1 + VAR_0) % VAR_0;

    if (VAR_1[VAR_4] != 0 && VAR_6 != VAR_3) {
        VAR_4 = VAR_6;
        VAR_5 = VAR_1[VAR_4];
    }
    if (VAR_5 == 0) {
 VAR_5 = VAR_2;
 FUNC_0();
    }
    return VAR_5;
}
