
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;



 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const short* VAR_1, int VAR_2)
{
    if (FUNC_1(VAR_0))
    {
        int VAR_3;
        FUNC_0("[");
        for (VAR_3 = 0; VAR_3 < VAR_2 && VAR_3 < 200; VAR_3++)
        {
            switch (VAR_1[VAR_3])
            {
                case 128: FUNC_0("x"); break;
                case 130: FUNC_0("!"); break;
                case 129: FUNC_0("+"); break;
                default: FUNC_0("*");
            }
        }
        if (VAR_3 == 200)
            FUNC_0("...");
        FUNC_0("]\n");
    }
}
