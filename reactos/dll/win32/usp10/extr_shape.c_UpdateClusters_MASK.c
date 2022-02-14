
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3, WORD* VAR_4 )
{
    if (VAR_1 == 0)
        return;
    else
    {
        int VAR_5 = VAR_4[0] < VAR_4[VAR_3-1] ? 1 : -1;
        int VAR_6;
        int VAR_7 = VAR_0 - VAR_2;
        int VAR_8 = -1;
        int VAR_9 = -1;
        int VAR_10 = 0;

        if (VAR_1 > 0)
        {
            if (VAR_2 > 0)
                VAR_7 = VAR_0 - VAR_1;
            else
                VAR_7 = VAR_0 + (VAR_1 + 1);
        }

        VAR_8 = FUNC_1(VAR_4, VAR_3, VAR_7);
        if (VAR_8 == -1)
        {
            FUNC_0("Unable to find target glyph\n");
            return;
        }

        if (VAR_1 < 0)
        {

            for (VAR_6 = VAR_8; VAR_6 < VAR_3 && VAR_6 >= 0; VAR_6 += VAR_5)
            {
                if (VAR_4[VAR_6] == VAR_7)
                    continue;
                if(VAR_4[VAR_6] == VAR_9)
                    VAR_4[VAR_6] = VAR_7;
                else
                {
                    VAR_10--;
                    if (VAR_10 >= VAR_1)
                    {
                        VAR_9 = VAR_4[VAR_6];
                        VAR_4[VAR_6] = VAR_7;
                    }
                    else
                        break;
                }
            }


            for (VAR_6 = VAR_8; VAR_6 < VAR_3 && VAR_6 >= 0; VAR_6 += VAR_5)
            {
                if (VAR_4[VAR_6] != VAR_7)
                    VAR_4[VAR_6] += VAR_1;
            }
        }
        else
        {
            for (VAR_6 = VAR_8; VAR_6 < VAR_3 && VAR_6 >= 0; VAR_6 += VAR_5)
                VAR_4[VAR_6] += VAR_1;
        }
    }
}
