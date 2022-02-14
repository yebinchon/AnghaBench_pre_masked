
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IUri ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,int,int ,int **) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int *,int ) ;
 int FUNC_6 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int *,int *,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int const*) ;

HRESULT FUNC_10(const WCHAR *VAR_5, IUri **VAR_6)
{
    WCHAR VAR_7[VAR_1];

    FUNC_6("%s\n", FUNC_9(VAR_5));

    if (!FUNC_4(VAR_5))
    {
        WCHAR VAR_8[VAR_2];
        DWORD VAR_9 = FUNC_0(VAR_7);

        if (!FUNC_5(VAR_5, VAR_8, FUNC_0(VAR_8)))
        {
            FUNC_8("can't find path\n");
            return VAR_0;
        }

        if (FUNC_3(FUNC_7(VAR_8, VAR_7, &VAR_9, 0)))
        {
            FUNC_2("can't create url from path\n");
            return VAR_0;
        }
        VAR_5 = VAR_7;
    }

    return FUNC_1(VAR_5, VAR_4 | VAR_3, 0, VAR_6);
}
