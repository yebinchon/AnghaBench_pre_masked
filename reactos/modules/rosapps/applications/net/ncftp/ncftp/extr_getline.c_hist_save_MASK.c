
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_0)


{
    char *VAR_1 = 0;
    size_t VAR_2 = FUNC_3(VAR_0);
    char *VAR_3 = FUNC_5(VAR_0, "\n\r");

    if (VAR_3) {
        if ((VAR_1 = (char *) FUNC_1(VAR_2)) != 0) {
            FUNC_4(VAR_1, VAR_0, VAR_2-1);
     VAR_1[VAR_2-1] = 0;
 }
    } else {
        if ((VAR_1 = (char *) FUNC_1(VAR_2+1)) != 0) {
            FUNC_2(VAR_1, VAR_0);
        }
    }
    if (VAR_1 == 0)
 FUNC_0("\n*** Error: hist_save() failed on malloc\n");
    return VAR_1;
}
