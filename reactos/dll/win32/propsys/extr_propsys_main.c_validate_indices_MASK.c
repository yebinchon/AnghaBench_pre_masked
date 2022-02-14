
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static BOOL FUNC_0(LPCWSTR VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;

    for (VAR_6 = VAR_4; VAR_6 <= VAR_5; VAR_6++)
    {
        if (!VAR_3[VAR_6])
            return VAR_0;

        if (VAR_6 == 0)
        {
            if (VAR_3[VAR_6] != '{')
                return VAR_0;
        }
        else if (VAR_6 == 9 || VAR_6 == 14 || VAR_6 == 19 || VAR_6 == 24)
        {
            if (VAR_3[VAR_6] != '-')
                return VAR_0;
        }
        else if (VAR_6 == 37)
        {
            if (VAR_3[VAR_6] != '}')
                return VAR_0;
        }
        else
        {
            if (VAR_3[VAR_6] > 'f' || (!VAR_2[VAR_3[VAR_6]] && VAR_3[VAR_6] != '0'))
                return VAR_0;
        }
    }

    return VAR_1;
}
