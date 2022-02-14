
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ch ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int IMultiLanguage2 ;
typedef scalar_t__ HRESULT ;
typedef int CHAR ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__,scalar_t__,int *,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,char*,scalar_t__*,int *,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,int,char*,int,char*,int,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_5(IMultiLanguage2 *VAR_8, UINT VAR_9, UINT VAR_10)
{
    CHAR VAR_11[VAR_2];
    BYTE VAR_12[VAR_2];
    HRESULT VAR_13;
    UINT VAR_14, VAR_15;

    static WCHAR VAR_16[] = {'a','b','c',0};


    if (VAR_9 != VAR_0)
    {
        BOOL VAR_17;
        char VAR_18[10];
        int VAR_19;
        VAR_19 = FUNC_2( VAR_9, VAR_7 | VAR_5 | VAR_6,
                                  VAR_16, 3, VAR_18, sizeof(VAR_18), ((void*)0), &VAR_17);

        if(VAR_19 == 0 || VAR_17)
        {
            FUNC_4("target codepage %i does not contain 'abc'\n",VAR_9);
            return VAR_1;
        }
    }

    VAR_14 = FUNC_3(VAR_16) + 1;
    VAR_15 = VAR_2;
    VAR_13 = FUNC_1(VAR_8, ((void*)0), VAR_9, VAR_16,
                                                  &VAR_14, VAR_11, &VAR_15);
    if (VAR_13 != VAR_4)
        return VAR_3;

    VAR_14 = -1;
    VAR_15 = VAR_2;
    VAR_13 = FUNC_0(VAR_8, ((void*)0), VAR_9, VAR_10, (BYTE *)VAR_11,
                                       &VAR_14, VAR_12, &VAR_15);
    if (VAR_13 != VAR_4)
        return VAR_3;

    return VAR_4;
}
