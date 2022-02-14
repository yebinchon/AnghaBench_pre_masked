
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int length ;
typedef int cf ;
typedef int ULONG ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int CLIPFORMAT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static HRESULT FUNC_5(IStream *VAR_3, CLIPFORMAT *VAR_4)
{
    DWORD VAR_5;
    HRESULT VAR_6;
    ULONG VAR_7;

    *VAR_4 = 0;

    VAR_6 = FUNC_3(VAR_3, &VAR_5, sizeof(VAR_5), &VAR_7);
    if (VAR_6 != VAR_2 || VAR_7 != sizeof(VAR_5))
        return VAR_0;
    if (!VAR_5) {

        return VAR_2;
    }
    if (VAR_5 == -1)
    {
        DWORD VAR_8;
        VAR_6 = FUNC_3(VAR_3, &VAR_8, sizeof(VAR_8), &VAR_7);
        if (VAR_6 != VAR_2 || VAR_7 != sizeof(VAR_8))
            return VAR_0;
        *VAR_4 = VAR_8;
    }
    else
    {
        char *VAR_9 = FUNC_1(FUNC_0(), 0, VAR_5);
        if (!VAR_9)
            return VAR_1;
        VAR_6 = FUNC_3(VAR_3, VAR_9, VAR_5, &VAR_7);
        if (VAR_6 != VAR_2 || VAR_7 != VAR_5 || VAR_9[VAR_5 - 1] != '\0')
        {
            FUNC_2(FUNC_0(), 0, VAR_9);
            return VAR_0;
        }
        *VAR_4 = FUNC_4(VAR_9);
        FUNC_2(FUNC_0(), 0, VAR_9);
    }
    return VAR_2;
}
