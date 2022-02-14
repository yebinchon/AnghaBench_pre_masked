
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    HDC VAR_2 = FUNC_0(((void*)0));
    int VAR_3, VAR_4;

    VAR_3 = FUNC_1(VAR_2, VAR_0);
    FUNC_4(VAR_3 != 0, "Expected to get valid BITSPIXEL capability value\n");

    VAR_4 = FUNC_1(VAR_2, VAR_1);
    FUNC_4(VAR_4 != 0 ||
       FUNC_3(VAR_4 == 0),
       "Expected to get valid COLORRES capability value\n");

    if (VAR_4)
    {
        switch (VAR_3)
        {
        case 8:
            FUNC_4(VAR_4 == 18,
               "Expected COLORRES to be 18, got %d\n", VAR_4);
            break;
        case 16:
            FUNC_4(VAR_4 == 16,
               "Expected COLORRES to be 16, got %d\n", VAR_4);
            break;
        case 24:
        case 32:
            FUNC_4(VAR_4 == 24,
               "Expected COLORRES to be 24, got %d\n", VAR_3);
            break;
        default:
            FUNC_4(0, "Got unknown BITSPIXEL %d with COLORRES %d\n", VAR_3, VAR_4);
            break;
        }
    }

    FUNC_2(((void*)0), VAR_2);
}
