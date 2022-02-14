
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_19__ {int db; } ;
struct TYPE_18__ {int hdr; } ;
struct TYPE_17__ {int Name; } ;
typedef TYPE_1__ MSISIGNATURE ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSIPACKAGE ;
typedef char* LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (TYPE_3__*,scalar_t__,TYPE_1__*,char**) ;
 int FUNC_1 (TYPE_3__*,char*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,char*,int,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int,char*,int*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*) ;

__attribute__((used)) static UINT FUNC_18(MSIPACKAGE *VAR_4, LPWSTR *VAR_5, MSISIGNATURE *VAR_6)
{
    static const WCHAR VAR_7[] = {
        's','e','l','e','c','t',' ','*',' ',
        'f','r','o','m',' ',
        'D','r','L','o','c','a','t','o','r',' ',
        'w','h','e','r','e',' ',
        'S','i','g','n','a','t','u','r','e','_',' ','=',' ', '\'','%','s','\'',0};
    LPWSTR VAR_8 = ((void*)0);
    LPCWSTR VAR_9;
    WCHAR VAR_10[VAR_3];
    WCHAR VAR_11[VAR_3];
    MSIRECORD *VAR_12;
    int VAR_13;
    DWORD VAR_14, VAR_15;
    UINT VAR_16;

    FUNC_12("%s\n", FUNC_13(VAR_6->Name));

    *VAR_5 = ((void*)0);

    VAR_12 = FUNC_5( VAR_4->db, VAR_7, VAR_6->Name );
    if (!VAR_12)
    {
        FUNC_12("failed to query DrLocator for %s\n", FUNC_13(VAR_6->Name));
        return VAR_0;
    }


    VAR_9 = FUNC_7(VAR_12, 2);
    if (VAR_9)
    {
        MSISIGNATURE VAR_17;

        FUNC_0(VAR_4, VAR_9, &VAR_17, &VAR_8);
        FUNC_2(&VAR_17);
        if (!VAR_8)
        {
            FUNC_15(&VAR_12->hdr);
            return VAR_0;
        }
    }

    VAR_14 = VAR_3;
    FUNC_8(VAR_12, 3, VAR_10, &VAR_14);

    if (FUNC_9(VAR_12,4))
        VAR_13 = 0;
    else
        VAR_13 = FUNC_6(VAR_12,4);

    if (VAR_14)
        FUNC_1(VAR_4, VAR_10, VAR_11, VAR_3);
    else
        FUNC_17(VAR_11, VAR_10);

    if (VAR_8)
    {
        VAR_15 = FUNC_4(VAR_8);
        if (VAR_15 != VAR_2 &&
            !(VAR_15 & VAR_1))
        {
            FUNC_11(VAR_8);
            FUNC_10(VAR_8);
        }

        FUNC_17(VAR_10, VAR_8);
        FUNC_16(VAR_10, VAR_11);
    }
    else if (VAR_14)
        FUNC_17(VAR_10, VAR_11);

    FUNC_10(VAR_10);

    VAR_16 = FUNC_3(VAR_4, VAR_6, VAR_10, VAR_13, VAR_5);

    FUNC_14(VAR_8);
    FUNC_15(&VAR_12->hdr);

    FUNC_12("returning %d\n", VAR_16);
    return VAR_16;
}
