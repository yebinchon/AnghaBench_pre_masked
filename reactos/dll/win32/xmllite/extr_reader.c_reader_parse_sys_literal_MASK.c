
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
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_7(xmlreader *VAR_2, strval *VAR_3)
{
    WCHAR *VAR_4 = FUNC_4(VAR_2), VAR_5;
    UINT VAR_6;

    if (*VAR_4 != '"' && *VAR_4 != '\'') return VAR_1;

    VAR_5 = *VAR_4;
    FUNC_6(VAR_2, 1);

    VAR_4 = FUNC_4(VAR_2);
    VAR_6 = FUNC_3(VAR_2);
    while (FUNC_2(*VAR_4) && *VAR_4 != VAR_5)
    {
        FUNC_6(VAR_2, 1);
        VAR_4 = FUNC_4(VAR_2);
    }
    FUNC_5(VAR_6, FUNC_3(VAR_2)-VAR_6, VAR_3);
    if (*VAR_4 == VAR_5) FUNC_6(VAR_2, 1);

    FUNC_0("%s\n", FUNC_1(VAR_2, VAR_3));
    return VAR_0;
}
