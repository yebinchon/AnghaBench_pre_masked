
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char*) ;
 char* FUNC_2 (int *) ;
 int VAR_0 ;


 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 char const* VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_7 (int ) ;
 int VAR_6 ;

int FUNC_8(void)
{
    const char *VAR_7;
    OPTION_CHOICE VAR_8;

    if (!FUNC_4(VAR_1 = FUNC_2(((void*)0))))
        return 0;

    while ((VAR_8 = FUNC_6()) != VAR_0) {
        switch (VAR_8) {
        case 129:
            VAR_2 = 1;
            break;
        case 128:
            break;
        default:
            return 0;
        }
    }

    VAR_7 = FUNC_7(0);
    if (!FUNC_4(VAR_7)
        || !FUNC_4(VAR_3 = FUNC_1(VAR_7, "r"))) {
        FUNC_3("Unable to open the file argument");
        return 0;
    }





    FUNC_5(VAR_7);

    FUNC_0(VAR_6);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    return 1;
}
