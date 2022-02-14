
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {int db; } ;
struct TYPE_11__ {int hdr; } ;
struct TYPE_10__ {int Name; } ;
typedef TYPE_1__ MSISIGNATURE ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSIPACKAGE ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ,char const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,char*,int*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int VAR_5 ;
 int * FUNC_7 (char*,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*) ;
 int * FUNC_12 (char*,char) ;

__attribute__((used)) static UINT FUNC_13(MSIPACKAGE *VAR_8, LPWSTR *VAR_9, MSISIGNATURE *VAR_10)
{
    static const WCHAR VAR_11[] = {
        'S','E','L','E','C','T',' ','*',' ',
        'F','R','O','M',' ',
        '`','C','o','m','p','L','o','c','a','t','o','r','`',' ',
        'W','H','E','R','E',' ','`','S','i','g','n','a','t','u','r','e','_','`',' ','=',' ',
        '\'','%','s','\'',0};
    static const WCHAR VAR_12[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','S','i','g','n','a','t','u','r','e','`',' ',
        'W','H','E','R','E',' ','`','S','i','g','n','a','t','u','r','e','`',' ','=',' ',
        '\'','%','s','\'',0};

    MSIRECORD *VAR_13, *VAR_14;
    LPCWSTR VAR_15, VAR_16;
    BOOL VAR_17 = VAR_5;
    BOOL VAR_18;
    UINT VAR_19;
    WCHAR VAR_20[VAR_4];
    DWORD VAR_21 = VAR_4;
    LPWSTR VAR_22;
    DWORD VAR_23;

    FUNC_6("%s\n", FUNC_8(VAR_10->Name));

    *VAR_9 = ((void*)0);

    VAR_13 = FUNC_1(VAR_8->db, VAR_11, VAR_10->Name);
    if (!VAR_13)
    {
        FUNC_6("failed to query CompLocator for %s\n", FUNC_8(VAR_10->Name));
        return VAR_0;
    }

    VAR_15 = FUNC_3(VAR_13, 1);
    VAR_16 = FUNC_3(VAR_13, 2);
    VAR_19 = FUNC_2(VAR_13, 3);

    VAR_14 = FUNC_1(VAR_8->db, VAR_12, VAR_15);
    if (!VAR_14)
        VAR_17 = VAR_1;

    *VAR_20 = '\0';
    FUNC_4(VAR_16, VAR_20, &VAR_21);
    if (!*VAR_20)
        goto done;

    VAR_23 = FUNC_0(VAR_20);
    if (VAR_23 == VAR_3)
        goto done;

    VAR_18 = (VAR_23 & VAR_2);

    if (VAR_19 != VAR_6 && VAR_17 && !VAR_18)
    {
        *VAR_9 = FUNC_7(VAR_20, VAR_10);
    }
    else if (!VAR_17 && (VAR_19 != VAR_6 || VAR_18))
    {
        if (VAR_19 == VAR_7)
        {
            VAR_22 = FUNC_12(VAR_20, '\\');
            *(VAR_22 + 1) = '\0';
        }
        else
            FUNC_5(VAR_20);

        *VAR_9 = FUNC_11(VAR_20);
    }
    else if (VAR_17)
    {
        FUNC_5(VAR_20);
        FUNC_9(VAR_20, FUNC_3(VAR_14, 2));

        VAR_23 = FUNC_0(VAR_20);
        if (VAR_23 != VAR_3 &&
            !(VAR_23 & VAR_2))
            *VAR_9 = FUNC_11(VAR_20);
    }

done:
    if (VAR_14) FUNC_10(&VAR_14->hdr);
    FUNC_10(&VAR_13->hdr);
    return VAR_0;
}
