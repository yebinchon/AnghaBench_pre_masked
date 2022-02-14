
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__,int *,int ,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char const*,char const*,int ) ;

__attribute__((used)) static HANDLE FUNC_4(HANDLE VAR_5, const WCHAR *VAR_6, DWORD VAR_7, BOOL *VAR_8)
{
    static const WCHAR VAR_9[]
        = {'%','s','i','n','d','e','x','.','d','a','t','_','%','l','u',0};
    WCHAR VAR_10[VAR_2];
    HANDLE VAR_11;

    FUNC_3(VAR_10, VAR_9, VAR_6, VAR_7);
    FUNC_2(VAR_10, '_');

    VAR_11 = FUNC_1(VAR_1, VAR_0, VAR_10);
    if(VAR_11) {
        if(VAR_8) *VAR_8 = VAR_0;
        return VAR_11;
    }

    if(VAR_8) *VAR_8 = VAR_4;
    return FUNC_0(VAR_5, ((void*)0), VAR_3, 0, 0, VAR_10);
}
