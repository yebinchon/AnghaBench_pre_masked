
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const*,int,int const*,int) ;
 int FUNC_1 (int,int const*,int,int const*,int) ;
 int FUNC_2 (int,int const*,int,int const*,int) ;

int FUNC_3(int VAR_2, const WCHAR *VAR_3, int VAR_4,
                        const WCHAR *VAR_5, int VAR_6)
{
    int VAR_7;

    VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    if (!VAR_7)
    {
        if (!(VAR_2 & VAR_1))
            VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
        if (!VAR_7 && !(VAR_2 & VAR_0))
            VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    }
    return VAR_7;
}
