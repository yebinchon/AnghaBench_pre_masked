
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int WCHAR ;
typedef scalar_t__ CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int const*,int,scalar_t__*,int,int *,int *) ;
 int FUNC_1 (scalar_t__*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static BOOL FUNC_3(const WCHAR *VAR_2, const char *VAR_3)
{
    int VAR_4, VAR_5;
    CHAR VAR_6[512];

    VAR_4 = FUNC_0(VAR_0, 0, VAR_2, -1, VAR_6, sizeof(VAR_6), ((void*)0), ((void*)0))-1;
    VAR_5 = FUNC_2(VAR_3);
    if(VAR_4 < VAR_5)
        return VAR_1;

    VAR_6[VAR_5] = 0;
    return !FUNC_1(VAR_6, VAR_3);
}
