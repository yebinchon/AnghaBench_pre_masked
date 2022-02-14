
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;


 int FUNC_0 (int ) ;

 int VAR_0 ;





 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (void*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_4(void)
{
    OPTION_CHOICE VAR_7;

    while ((VAR_7 = FUNC_2()) != VAR_0) {
        switch (VAR_7) {
        case 133:
            VAR_1 = FUNC_1();
            break;
        case 130:
            VAR_3 = FUNC_1();
            break;
        case 131:
            VAR_2 = 0;
            break;
        case 128:
            VAR_6 = 1;
            break;
        case 129:
           break;
        default:
        case 132:
            return 0;
        }
    }
    if (FUNC_3(VAR_1, "digest") == 0)
        FUNC_0(VAR_5);
    else
        FUNC_0(VAR_4);
    return 1;
}
