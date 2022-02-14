
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,char*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(char *VAR_3, const char *VAR_4, int *VAR_5) {
    ssize_t VAR_6 = FUNC_3(*VAR_5, VAR_3, 50);

    if(FUNC_4(VAR_6 <= 0)) {

        FUNC_1("Cannot read file '%s'", VAR_4);
        FUNC_0(*VAR_5);
        *VAR_5 = -1;
        return 0;
    }
    else {



        VAR_3[VAR_6 - 1] = '\0';

        if(FUNC_4(VAR_2 != VAR_0)) {
            FUNC_0(*VAR_5);
            *VAR_5 = -1;
        }
        else if(FUNC_2(*VAR_5, 0, VAR_1) == -1) {
            FUNC_1("Cannot seek in file '%s'", VAR_4);
            FUNC_0(*VAR_5);
            *VAR_5 = -1;
        }
    }

    return 1;
}
