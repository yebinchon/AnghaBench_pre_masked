
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef size_t UINT ;
typedef int IWbemServices ;
typedef int IEnumWbemClassObject ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 size_t FUNC_0 (char const**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int ,int *,int **) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int *,char const*,int **) ;
 int FUNC_6 (int,char*,size_t,...) ;
 char const* VAR_3 ;

__attribute__((used)) static void FUNC_7( IWbemServices *VAR_4 )
{
    static const WCHAR VAR_5[] = {0};
    static const WCHAR VAR_6[] = {'S','Q','L',0};
    static const WCHAR VAR_7[] =
        {'S','E','L','E','C','T',' ','H','O','T','F','I','X','I','D',' ','F','R','O','M',' ',
         'W','i','n','3','2','_','Q','u','i','c','k','F','i','x','E','n','g','i','n','e','e','r','i','n','g',0};
    static const WCHAR VAR_8[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_','B','I','O','S',0};
    static const WCHAR VAR_9[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'L','o','g','i','c','a','l','D','i','s','k',' ','W','H','E','R','E',' ',
         '\"','N','T','F','S','\"',' ','=',' ','F','i','l','e','S','y','s','t','e','m',0};
    static const WCHAR VAR_10[] =
        {'S','E','L','E','C','T',' ','a',' ','F','R','O','M',' ','b',0};
    static const WCHAR VAR_11[] =
        {'S','E','L','E','C','T',' ','a',' ','F','R','O','M',' ','W','i','n','3','2','_','B','i','o','s',0};
    static const WCHAR VAR_12[] =
        {'S','E','L','E','C','T',' ','D','e','s','c','r','i','p','t','i','o','n',' ','F','R','O','M',' ',
         'W','i','n','3','2','_','B','i','o','s',0};
    static const WCHAR VAR_13[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'P','r','o','c','e','s','s',' ','W','H','E','R','E',' ','C','a','p','t','i','o','n',' ',
         'L','I','K','E',' ','\'','%','%','R','E','G','E','D','I','T','%','\'',0};
    static const WCHAR VAR_14[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'D','i','s','k','D','r','i','v','e',' ','W','H','E','R','E',' ','D','e','v','i','c','e','I','D','=',
         '\"','\\','\\','\\','\\','.','\\','\\','P','H','Y','S','I','C','A','L','D','R','I','V','E','0','\"',0};
    static const WCHAR VAR_15[] =
        {'S','E','L','E','C','T','\n','a','\r','F','R','O','M','\t','b',0};
    static const WCHAR VAR_16[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'P','r','o','c','e','s','s',' ','W','H','E','R','E',' ','C','a','p','t','i','o','n',' ',
         'L','I','K','E',' ','"','%','f','i','r','e','f','o','x','.','e','x','e','"',0};
    static const WCHAR VAR_17[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
         'W','i','n','3','2','_','V','i','d','e','o','C','o','n','t','r','o','l','l','e','r',' ','w','h','e','r','e',' ',
         'a','v','a','i','l','a','b','i','l','i','t','y',' ','=',' ','\'','3','\'',0};
    static const WCHAR VAR_18[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_','B','I','O','S',
         ' ','W','H','E','R','E',' ','N','A','M','E',' ','<','>',' ','N','U','L','L', 0};
    static const WCHAR VAR_19[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_','B','I','O','S',
         ' ','W','H','E','R','E',' ','N','U','L','L',' ','=',' ','N','A','M','E', 0};
    static const WCHAR *VAR_20[] = { VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
                                   VAR_17, VAR_18, VAR_19 };
    HRESULT VAR_21;
    IEnumWbemClassObject *VAR_22;
    BSTR VAR_23 = FUNC_3( VAR_3 );
    BSTR VAR_24 = FUNC_3( VAR_6 );
    BSTR VAR_25 = FUNC_3( VAR_7 );
    UINT VAR_26;

    VAR_21 = FUNC_2( VAR_4, ((void*)0), ((void*)0), 0, ((void*)0), &VAR_22 );
    FUNC_6( VAR_21 == VAR_1, "query failed %08x\n", VAR_21 );

    VAR_21 = FUNC_2( VAR_4, ((void*)0), VAR_25, 0, ((void*)0), &VAR_22 );
    FUNC_6( VAR_21 == VAR_1, "query failed %08x\n", VAR_21 );

    VAR_21 = FUNC_2( VAR_4, VAR_23, ((void*)0), 0, ((void*)0), &VAR_22 );
    FUNC_6( VAR_21 == VAR_1, "query failed %08x\n", VAR_21 );

    VAR_21 = FUNC_2( VAR_4, VAR_24, VAR_25, 0, ((void*)0), &VAR_22 );
    FUNC_6( VAR_21 == VAR_2, "query failed %08x\n", VAR_21 );

    VAR_21 = FUNC_2( VAR_4, VAR_24, ((void*)0), 0, ((void*)0), &VAR_22 );
    FUNC_6( VAR_21 == VAR_1, "query failed %08x\n", VAR_21 );

    FUNC_4( VAR_25 );
    VAR_25 = FUNC_3( VAR_5 );
    VAR_21 = FUNC_2( VAR_4, VAR_23, VAR_25, 0, ((void*)0), &VAR_22 );
    FUNC_6( VAR_21 == VAR_1, "query failed %08x\n", VAR_21 );

    for (VAR_26 = 0; VAR_26 < FUNC_0( VAR_20 ); VAR_26++)
    {
        VAR_21 = FUNC_5( VAR_4, VAR_20[VAR_26], &VAR_22 );
        FUNC_6( VAR_21 == VAR_0, "query %u failed: %08x\n", VAR_26, VAR_21 );
        if (VAR_22) FUNC_1( VAR_22 );
    }

    FUNC_4( VAR_23 );
    FUNC_4( VAR_24 );
    FUNC_4( VAR_25 );
}
