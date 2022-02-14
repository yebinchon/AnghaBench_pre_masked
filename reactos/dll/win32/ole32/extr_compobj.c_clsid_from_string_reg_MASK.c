
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf2 ;
typedef char WCHAR ;
typedef int LPCOLESTR ;
typedef int LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,char*,int*) ;
 int VAR_5 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int) ;
 scalar_t__ FUNC_12 (int ,char*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_13(LPCOLESTR VAR_6, CLSID *VAR_7)
{
    static const WCHAR VAR_8[] = { '\\','C','L','S','I','D',0 };
    WCHAR VAR_9[VAR_0];
    LONG VAR_10 = sizeof(VAR_9);
    HKEY VAR_11;
    WCHAR *VAR_12;

    FUNC_11(VAR_7, 0, sizeof(*VAR_7));
    VAR_12 = FUNC_1( FUNC_0(),0,(FUNC_10(VAR_6)+8) * sizeof(WCHAR) );
    if (!VAR_12) return VAR_2;
    FUNC_9( VAR_12, VAR_6 );
    FUNC_8( VAR_12, VAR_8 );
    if (FUNC_12(VAR_3, VAR_12, VAR_4, &VAR_11))
    {
        FUNC_2(FUNC_0(),0,VAR_12);
        FUNC_5("couldn't open key for ProgID %s\n", FUNC_6(VAR_6));
        return VAR_1;
    }
    FUNC_2(FUNC_0(),0,VAR_12);

    if (FUNC_4(VAR_11,((void*)0),VAR_9,&VAR_10))
    {
        FUNC_3(VAR_11);
        FUNC_5("couldn't query clsid value for ProgID %s\n", FUNC_6(VAR_6));
        return VAR_1;
    }
    FUNC_3(VAR_11);
    return FUNC_7(VAR_9, VAR_7) ? VAR_5 : VAR_1;
}
