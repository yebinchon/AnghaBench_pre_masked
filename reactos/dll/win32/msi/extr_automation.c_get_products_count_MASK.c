
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int const*,int ,int,int *) ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_2(const WCHAR *VAR_5, int *VAR_6)
{
    int VAR_7 = 0;

    while (1)
    {
        WCHAR VAR_8[VAR_3];
        UINT VAR_9;


        if (VAR_5)
            VAR_9 = FUNC_1(VAR_5, 0, VAR_7, VAR_8);
        else
            VAR_9 = FUNC_0(VAR_7, VAR_8);

        if (VAR_9 == VAR_1) break;

        if (VAR_9 != VAR_2)
            return VAR_0;

        VAR_7++;
    }

    *VAR_6 = VAR_7;

    return VAR_4;
}
