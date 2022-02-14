
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

BOOL FUNC_1(int VAR_5, WCHAR *VAR_6[])
{
    int VAR_7;






    for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++)
    {
        switch (VAR_6[VAR_7][0])
        {
        case L'-':
        case L'/':

            if (VAR_6[VAR_7][1] == L'v')
            {
                VAR_4 = VAR_3;
                break;
            }

            else if (VAR_6[VAR_7][1] == L'?')
            {

                return VAR_0;
            }

        default:

            FUNC_0(VAR_2, VAR_1);
            return VAR_0;
        }
    }

    return VAR_3;
}
