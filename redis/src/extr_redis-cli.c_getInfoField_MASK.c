
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static char *FUNC_5(char *VAR_0, char *VAR_1) {
    char *VAR_2 = FUNC_3(VAR_0,VAR_1);
    char *VAR_3, *VAR_4;
    char *VAR_5;

    if (!VAR_2) return ((void*)0);
    VAR_2 += FUNC_2(VAR_1)+1;
    VAR_3 = FUNC_1(VAR_2,'\r');
    VAR_4 = FUNC_1(VAR_2,',');
    if (VAR_4 && VAR_4 < VAR_3) VAR_3 = VAR_4;
    VAR_5 = FUNC_4(sizeof(char)*(VAR_3-VAR_2)+1);
    FUNC_0(VAR_5,VAR_2,(VAR_3-VAR_2));
    VAR_5[VAR_3-VAR_2] = '\0';
    return VAR_5;
}
