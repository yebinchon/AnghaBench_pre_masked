
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,char const*,int,int*,int) ;
 scalar_t__ FUNC_4 (char const*,char*,int,int *,int *) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static BOOL FUNC_6(const char *VAR_1, const char *VAR_2, BOOL VAR_3, BOOL VAR_4)
{
    WCHAR *VAR_5 = FUNC_1(FUNC_0(), 0, (FUNC_5(VAR_2)+2) * sizeof(WCHAR));
    BOOL VAR_6;
    int VAR_7 = (VAR_3 ? 0 : 1);

    FUNC_3(VAR_0, 0, VAR_2, -1, &VAR_5[1], (FUNC_5(VAR_2)+1));
    VAR_5[0] = 0xfeff;
    if (VAR_4)
    {
        size_t VAR_8;
        for (VAR_8 = 0; VAR_8 < FUNC_5(VAR_2)+1; VAR_8++)
            VAR_5[VAR_8] = (VAR_5[VAR_8] << 8) | ((VAR_5[VAR_8] >> 8) & 0xff);
    }
    VAR_6 = FUNC_4(VAR_1, (char *)&VAR_5[VAR_7], (FUNC_5(VAR_2)+1-VAR_7) * sizeof(WCHAR), ((void*)0), ((void*)0));
    FUNC_2(FUNC_0(), 0, VAR_5);
    return VAR_6;
}
