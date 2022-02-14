
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_7(xmlreader *VAR_3, strval *VAR_4)
{
    WCHAR *VAR_5, VAR_6;
    UINT VAR_7;

    VAR_5 = FUNC_3(VAR_3);


    VAR_6 = *VAR_5;
    if (VAR_6 != '\"' && VAR_6 != '\'') return VAR_2;
    FUNC_6(VAR_3, 1);

    VAR_5 = FUNC_3(VAR_3);
    VAR_7 = FUNC_2(VAR_3);
    while (*VAR_5)
    {
        if (*VAR_5 == '<') return VAR_1;

        if (*VAR_5 == VAR_6)
        {
            FUNC_4(VAR_7, FUNC_2(VAR_3)-VAR_7, VAR_4);

            FUNC_6(VAR_3, 1);
            return VAR_0;
        }

        if (*VAR_5 == '&')
        {
            HRESULT VAR_8 = FUNC_5(VAR_3);
            if (FUNC_0(VAR_8)) return VAR_8;
        }
        else
        {

            if (FUNC_1(*VAR_5)) *VAR_5 = ' ';
            FUNC_6(VAR_3, 1);
        }
        VAR_5 = FUNC_3(VAR_3);
    }

    return VAR_2;
}
