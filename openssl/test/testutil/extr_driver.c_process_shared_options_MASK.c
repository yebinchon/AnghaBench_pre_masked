
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE_DEFAULT ;


 int VAR_0 ;







 int FUNC_0 (char*,char*,char*) ;
 int VAR_1 ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(void)
{
    OPTION_CHOICE_DEFAULT VAR_4;
    int VAR_5;
    int VAR_6 = -1;
    char *VAR_7 = "";
    char *VAR_8 = "";
    char *VAR_9 = ((void*)0);

    FUNC_2();
    while ((VAR_4 = FUNC_6()) != VAR_0) {
        switch (VAR_4) {

        default:
            break;
        case 134:
            return VAR_6;
        case 133:
            FUNC_4(FUNC_8());
            return 0;
        case 130:
            VAR_2 = 1;
            break;
        case 128:
            VAR_7 = FUNC_3();
            VAR_9 = FUNC_1();
            break;
        case 131:
            VAR_8 = FUNC_3();
            if (!FUNC_5(FUNC_1(), &VAR_3))
                goto end;
            break;
        case 132:
            if (!FUNC_5(FUNC_1(), &VAR_5))
                goto end;
            VAR_1 = 4 * VAR_5;
            break;
        case 129:
            if (!FUNC_5(FUNC_1(), &VAR_5))
                goto end;
            FUNC_7(VAR_5);
            break;
        }
    }
    if (!FUNC_0(VAR_9, VAR_7, VAR_8))
        goto end;
    VAR_6 = 1;
end:
    return VAR_6;
}
