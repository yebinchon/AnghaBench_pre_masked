
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef int HANDLE ;
typedef int ENCODING ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,int ) ;

BOOL FUNC_1(HANDLE VAR_3, LPCWSTR VAR_4, DWORD VAR_5, ENCODING VAR_6, int VAR_7)
{
    WCHAR VAR_8;
    LPCWSTR VAR_9 = L"\n";
    DWORD VAR_10, VAR_11;


    if (VAR_6 != VAR_0)
    {
        VAR_8 = 0xFEFF;
        if (!FUNC_0(VAR_3, &VAR_8, 1, VAR_6))
            return VAR_1;
    }

    VAR_10 = 0;



    do
    {

        VAR_11 = VAR_10;
        while(VAR_11 < VAR_5)
        {
            if (VAR_4[VAR_11] == '\r' && VAR_4[VAR_11 + 1] == '\n')
                break;
            VAR_11++;
        }

        if (VAR_11 != VAR_5)
        {
            switch (VAR_7)
            {
            case 128:

                if (!FUNC_0(VAR_3, &VAR_4[VAR_10], VAR_11 - VAR_10, VAR_6))
                    return VAR_1;

                if (!FUNC_0(VAR_3, VAR_9, 1, VAR_6))
                    return VAR_1;
                break;
            case 130:

                if (!FUNC_0(VAR_3, &VAR_4[VAR_10], VAR_11 - VAR_10 + 1, VAR_6))
                    return VAR_1;
                break;
            case 129:

                if (!FUNC_0(VAR_3, &VAR_4[VAR_10], VAR_11 - VAR_10 + 2, VAR_6))
                    return VAR_1;
                break;
            default:
                return VAR_1;
            }
        }
        else
        {

            if (!FUNC_0(VAR_3, &VAR_4[VAR_10], VAR_11 - VAR_10, VAR_6))
                return VAR_1;
        }


        VAR_10 = VAR_11 + 2;
    }
    while (VAR_10 < VAR_5);

    return VAR_2;
}
