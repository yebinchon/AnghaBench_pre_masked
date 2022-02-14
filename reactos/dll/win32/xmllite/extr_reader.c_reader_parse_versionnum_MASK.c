
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_7(xmlreader *VAR_3, strval *VAR_4)
{
    static const WCHAR VAR_5[] = {'1','.',0};
    WCHAR *VAR_6, *VAR_7;
    UINT VAR_8;

    if (FUNC_2(VAR_3, VAR_5)) return VAR_2;

    VAR_8 = FUNC_3(VAR_3);

    FUNC_6(VAR_3, 2);

    VAR_7 = VAR_6 = FUNC_4(VAR_3);
    while (*VAR_6 >= '0' && *VAR_6 <= '9')
    {
        FUNC_6(VAR_3, 1);
        VAR_6 = FUNC_4(VAR_3);
    }

    if (VAR_7 == VAR_6) return VAR_1;
    FUNC_5(VAR_8, FUNC_3(VAR_3)-VAR_8, VAR_4);
    FUNC_0("version=%s\n", FUNC_1(VAR_3, VAR_4));
    return VAR_0;
}
