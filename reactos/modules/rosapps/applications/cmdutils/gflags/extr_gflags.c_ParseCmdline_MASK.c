
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* LPWSTR ;
typedef int INT ;
typedef void* BOOL ;


 void* VAR_0 ;
 void* FUNC_0 (int,int,int**) ;
 void* FUNC_1 (int,int,int**) ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static BOOL FUNC_3(int VAR_5, LPWSTR VAR_6[])
{
    INT VAR_7;

    if (VAR_5 < 2)
    {
        FUNC_2(L"Not enough args!\n");
        return VAR_0;
    }

    for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++)
    {
        if (VAR_6[VAR_7][0] == L'/')
        {
            if (VAR_6[VAR_7][1] == L'p' && VAR_6[VAR_7][2] == VAR_2)
            {
                VAR_4 = VAR_1;
                return FUNC_1(VAR_7 + 1, VAR_5, VAR_6);
            }
            if (VAR_6[VAR_7][1] == L'i' && VAR_6[VAR_7][2] == VAR_2)
            {
                VAR_3 = VAR_1;
                return FUNC_0(VAR_7 + 1, VAR_5, VAR_6);
            }
        }
        else
        {
            FUNC_2(L"Invalid option: %s\n", VAR_6[VAR_7]);
            return VAR_0;
        }
    }

    if (!VAR_4 && !VAR_3)
    {
        FUNC_2(L"Only page heap / image file flags are supported\n");
        return VAR_0;
    }

    return VAR_1;
}
