
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* lexical_function ) (int const) ;
typedef int WCHAR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const WCHAR *VAR_1, unsigned int VAR_2, lexical_function VAR_3)
{
    int VAR_4;
    if (FUNC_1(VAR_0))
    {
        for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
        {
            switch (VAR_3(VAR_1[VAR_4]))
            {
                case 140: FUNC_0("C"); break;
                case 132: FUNC_0("Ra"); break;
                case 130: FUNC_0("V"); break;
                case 133: FUNC_0("N"); break;
                case 139: FUNC_0("H"); break;
                case 128: FUNC_0("Zwnj"); break;
                case 129: FUNC_0("Zwj"); break;
                case 136: FUNC_0("Mp");break;
                case 138: FUNC_0("Ma");break;
                case 137: FUNC_0("Mb");break;
                case 135: FUNC_0("Mm");break;
                case 134: FUNC_0("Sm"); break;
                case 131: FUNC_0("Vd"); break;
                case 142: FUNC_0("A"); break;
                case 141: FUNC_0("t"); break;
                default:
                    FUNC_0("X"); break;
            }
        }
        FUNC_0("\n");
    }
}
