
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum content { ____Placeholder_content } content ;
typedef char WCHAR ;
typedef int * LPCOLESTR ;
typedef int DWORD ;
typedef int CLSID ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int *,char*,int*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static enum content FUNC_8(LPCOLESTR VAR_10, CLSID *VAR_11)
{
    static const WCHAR VAR_12[] = {'m','s','h','t','m','l',':',0};
    WCHAR VAR_13[VAR_6];
    DWORD VAR_14 = VAR_6;

    if (!VAR_10 || !VAR_10[0])
    {
        FUNC_5("name %s\n", FUNC_7(VAR_10));
        return VAR_1;
    }

    if (FUNC_1(VAR_10, VAR_11) == VAR_7 ||
        FUNC_0(VAR_10, VAR_11) == VAR_7)
        return VAR_2;

    if (FUNC_3 (VAR_10) ||
        FUNC_4(VAR_10, VAR_13, &VAR_14, VAR_9|VAR_8) == VAR_7)
    {
        *VAR_11 = VAR_0;
        return VAR_4;
    }

    if (!FUNC_6(VAR_10, VAR_12, 7))
    {
        FUNC_2("mshtml prefix not implemented\n");
        *VAR_11 = VAR_0;
        return VAR_3;
    }

    return VAR_5;
}
