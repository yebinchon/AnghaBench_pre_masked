
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pagesetup_data ;
typedef int WORD ;
typedef int WCHAR ;
typedef int LONG ;
typedef int HWND ;


 int FUNC_0 (int *) ;


 int FUNC_1 (int ,int,int *,int ) ;
 int* FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ,int const*,int) ;
 int FUNC_8 (int *,int **,int) ;

__attribute__((used)) static void FUNC_9(HWND VAR_0, const pagesetup_data *VAR_1, WORD VAR_2, WORD VAR_3)
{
    switch (VAR_2)
    {
    case 129:
      {
        WCHAR VAR_4[10];
        LONG VAR_5 = 0;
        LONG *VAR_6 = FUNC_2(FUNC_6(VAR_1), VAR_3);

        if (FUNC_1(VAR_0, VAR_3, VAR_4, FUNC_0(VAR_4)) != 0)
        {
            WCHAR *VAR_7;
            WCHAR VAR_8 = FUNC_3();

            VAR_5 = FUNC_8(VAR_4, &VAR_7, 10);
            if(VAR_7 != VAR_4 || *VAR_7 == VAR_8)
            {
                int VAR_9 = FUNC_4(VAR_1) ? 100 : 1000;
                VAR_5 *= VAR_9;
                if(*VAR_7 == VAR_8)
                {
                    while(VAR_9 > 1)
                    {
                        VAR_7++;
                        VAR_9 /= 10;
                        if(FUNC_5(*VAR_7))
                            VAR_5 += (*VAR_7 - '0') * VAR_9;
                        else
                            break;
                    }
                }
            }
        }
        *VAR_6 = VAR_5;
        return;
      }

    case 128:
        FUNC_7(VAR_0, VAR_1, VAR_3);
        return;
    }
}
