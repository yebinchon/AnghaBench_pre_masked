
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int db; } ;
struct TYPE_14__ {int hdr; } ;
struct TYPE_13__ {char const* Name; } ;
typedef TYPE_1__ MSISIGNATURE ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSIPACKAGE ;
typedef char* LPWSTR ;
typedef int LPCWSTR ;
typedef char* LPBYTE ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__,char*,scalar_t__,char**) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,char*,int ,char**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (char*,int,scalar_t__,scalar_t__) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 TYPE_2__* FUNC_4 (int ,char const*,char const*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 char* FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*,int **) ;
 scalar_t__ FUNC_9 (int *,char*,int *,scalar_t__*,char*,scalar_t__*) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (char*,int) ;
 char* FUNC_12 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_13 (char const*) ;
 int FUNC_14 (TYPE_3__*,char const*,char**) ;
 char* FUNC_15 (scalar_t__) ;
 int FUNC_16 (char*) ;







 int FUNC_17 (int *) ;
 char* FUNC_18 (char*,char) ;

__attribute__((used)) static UINT FUNC_19(MSIPACKAGE *VAR_7, LPWSTR *VAR_8, MSISIGNATURE *VAR_9)
{
    static const WCHAR VAR_10[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        'R','e','g','L','o','c','a','t','o','r',' ','W','H','E','R','E',' ',
        'S','i','g','n','a','t','u','r','e','_',' ','=',' ', '\'','%','s','\'',0};
    const WCHAR *VAR_11, *VAR_12;
    WCHAR *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15;
    int VAR_16, VAR_17;
    HKEY VAR_18, VAR_19 = ((void*)0);
    DWORD VAR_20 = 0, VAR_21;
    LPBYTE VAR_22 = ((void*)0);
    MSIRECORD *VAR_23;
    UINT VAR_24;

    FUNC_10("%s\n", FUNC_13(VAR_9->Name));

    *VAR_8 = ((void*)0);

    VAR_23 = FUNC_4( VAR_7->db, VAR_10, VAR_9->Name );
    if (!VAR_23)
    {
        FUNC_10("failed to query RegLocator for %s\n", FUNC_13(VAR_9->Name));
        return VAR_0;
    }

    VAR_16 = FUNC_5(VAR_23, 2);
    VAR_11 = FUNC_6(VAR_23, 3);
    VAR_12 = FUNC_6(VAR_23, 4);
    VAR_17 = FUNC_5(VAR_23, 5);

    FUNC_14(VAR_7, VAR_11, &VAR_13);

    switch (VAR_16)
    {
    case 131:
        VAR_18 = VAR_1;
        break;
    case 130:
        VAR_18 = VAR_2;
        break;
    case 129:
        VAR_18 = VAR_3;
        break;
    case 128:
        VAR_18 = VAR_4;
        break;
    default:
        FUNC_11("Unknown root key %d\n", VAR_16);
        goto end;
    }

    VAR_24 = FUNC_8(VAR_18, VAR_13, &VAR_19);
    if (VAR_24)
    {
        FUNC_10("RegOpenKeyW returned %d\n", VAR_24);
        goto end;
    }

    FUNC_16(VAR_13);
    FUNC_14(VAR_7, VAR_12, &VAR_13);

    VAR_24 = FUNC_9(VAR_19, VAR_13, ((void*)0), ((void*)0), ((void*)0), &VAR_20);
    if (VAR_24)
    {
        FUNC_10("RegQueryValueExW returned %d\n", VAR_24);
        goto end;
    }



    VAR_22 = FUNC_15( VAR_20 );
    VAR_24 = FUNC_9(VAR_19, VAR_13, ((void*)0), &VAR_21, VAR_22, &VAR_20);
    if (VAR_24)
    {
        FUNC_10("RegQueryValueExW returned %d\n", VAR_24);
        goto end;
    }


    if (VAR_20 == 0)
        goto end;


    if (VAR_21 == VAR_5)
    {
        VAR_20 = FUNC_2((LPCWSTR)VAR_22, ((void*)0), 0);
        if (VAR_20)
        {
            LPWSTR VAR_25 = FUNC_15(VAR_20 * sizeof(WCHAR));
            FUNC_2((LPCWSTR)VAR_22, VAR_25, VAR_20);
            FUNC_16(VAR_22);
            VAR_22 = (LPBYTE)VAR_25;
        }
    }

    if ((VAR_21 == VAR_6 || VAR_21 == VAR_5) &&
        (VAR_14 = FUNC_18((LPWSTR)VAR_22, '"')) && (VAR_15 = FUNC_18(++VAR_14, '"')))
        *VAR_15 = '\0';
    else
        VAR_14 = (LPWSTR)VAR_22;

    switch (VAR_17 & 0x0f)
    {
    case 134:
        FUNC_1(VAR_7, VAR_9, VAR_14, 0, VAR_8);
        break;
    case 133:
        *VAR_8 = FUNC_12(VAR_14, VAR_9);
        break;
    case 132:
        FUNC_0(VAR_21, VAR_22, VAR_20, VAR_8);
        break;
    default:
        FUNC_3("unimplemented for type %d (key path %s, value %s)\n",
              VAR_17, FUNC_13(VAR_11), FUNC_13(VAR_12));
    }
end:
    FUNC_16( VAR_22 );
    FUNC_7( VAR_19 );
    FUNC_16( VAR_13 );

    FUNC_17(&VAR_23->hdr);
    return VAR_0;
}
