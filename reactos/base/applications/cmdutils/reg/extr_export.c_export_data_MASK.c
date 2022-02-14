
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HANDLE ;
typedef int DWORD ;
 int FUNC_0 (int **,void*) ;
 int FUNC_1 (int ,int **,int,size_t,void*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,void*,size_t) ;
 size_t FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(HANDLE VAR_0, WCHAR *VAR_1, DWORD VAR_2,
                        DWORD VAR_3, void *VAR_4, size_t VAR_5)
{
    WCHAR *VAR_6 = ((void*)0);
    size_t VAR_7 = FUNC_4(VAR_0, VAR_1, VAR_2);

    switch (VAR_3)
    {
    case 128:
        FUNC_3(&VAR_6, VAR_4, VAR_5);
        break;
    case 132:
        if (VAR_5)
        {
            FUNC_0(&VAR_6, VAR_4);
            break;
        }

    case 129:
    case 131:
    case 133:
    case 130:
    default:
        FUNC_1(VAR_0, &VAR_6, VAR_3, VAR_7, VAR_4, VAR_5);
        break;
    }

    if (VAR_5 || VAR_3 == 128)
    {
        FUNC_6(VAR_0, VAR_6);
        FUNC_5(VAR_6);
    }

    FUNC_2(VAR_0);
}
