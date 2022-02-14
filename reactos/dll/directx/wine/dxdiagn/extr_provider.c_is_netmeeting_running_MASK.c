
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef size_t DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* FUNC_3 (size_t*) ;
 scalar_t__ FUNC_4 (size_t,char*,int ) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static BOOL FUNC_6(void)
{
    static const WCHAR VAR_3[] = {'c','o','n','f','.','e','x','e',0};

    DWORD VAR_4;
    DWORD *VAR_5 = FUNC_3(&VAR_4);

    if (VAR_5)
    {
        DWORD VAR_6;
        WCHAR VAR_7[VAR_1];

        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        {
            if (FUNC_4(VAR_5[VAR_6], VAR_7, FUNC_0(VAR_7)) &&
                !FUNC_5(VAR_3, VAR_7))
            {
                FUNC_2(FUNC_1(), 0, VAR_5);
                return VAR_2;
            }
        }
        FUNC_2(FUNC_1(), 0, VAR_5);
    }

    return VAR_0;
}
