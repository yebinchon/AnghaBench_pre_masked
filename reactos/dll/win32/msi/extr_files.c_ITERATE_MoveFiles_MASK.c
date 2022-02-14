
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_21__ {scalar_t__ Action; } ;
struct TYPE_20__ {int db; } ;
struct TYPE_19__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_3__ MSICOMPONENT ;
typedef char* LPWSTR ;
typedef TYPE_2__* LPVOID ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 char* FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int,char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,char*,int) ;
 char* FUNC_16 (int) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (int ,char*) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_21 (TYPE_2__*,char*) ;
 int FUNC_22 (char*,char*,int) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (char*,char) ;
 char* FUNC_26 (char*) ;
 char* FUNC_27 (char*,char) ;
 char* VAR_4 ;

__attribute__((used)) static UINT FUNC_28( MSIRECORD *VAR_5, LPVOID VAR_6 )
{
    MSIPACKAGE *VAR_7 = VAR_6;
    MSIRECORD *VAR_8;
    MSICOMPONENT *VAR_9;
    LPCWSTR VAR_10, VAR_11;
    LPWSTR VAR_12, VAR_13 = ((void*)0), VAR_14 = ((void*)0), VAR_15 = ((void*)0), VAR_16 = ((void*)0);
    int VAR_17;
    DWORD VAR_18;
    BOOL VAR_19;

    VAR_11 = FUNC_5(VAR_5, 2);
    VAR_9 = FUNC_21(VAR_7, VAR_11);
    if (!VAR_9)
        return VAR_0;

    VAR_9->Action = FUNC_20( VAR_7, VAR_9 );
    if (VAR_9->Action != VAR_2)
    {
        FUNC_9("component not scheduled for installation %s\n", FUNC_11(VAR_11));
        return VAR_0;
    }

    VAR_10 = FUNC_5(VAR_5, 3);
    VAR_17 = FUNC_4(VAR_5, 7);

    VAR_12 = FUNC_18(VAR_7->db, FUNC_5(VAR_5, 5));
    if (!VAR_12)
        goto done;

    VAR_14 = FUNC_18(VAR_7->db, FUNC_5(VAR_5, 6));
    if (!VAR_14)
        goto done;

    if (!VAR_10)
    {
        if (FUNC_0(VAR_12) == VAR_3)
            goto done;

        VAR_15 = FUNC_26(VAR_12);
        if (!VAR_15)
            goto done;
    }
    else
    {
        VAR_18 = FUNC_14(VAR_12) + FUNC_14(VAR_10) + 2;
        VAR_15 = FUNC_16(VAR_18 * sizeof(WCHAR));
        if (!VAR_15)
            goto done;

        FUNC_13(VAR_15, VAR_12);
        if (VAR_15[FUNC_14(VAR_15) - 1] != '\\')
            FUNC_12(VAR_15, VAR_4);
        FUNC_12(VAR_15, VAR_10);
    }

    VAR_19 = FUNC_25(VAR_15, '*') || FUNC_25(VAR_15, '?');

    if (FUNC_6(VAR_5, 4))
    {
        if (!VAR_19)
        {
            WCHAR *VAR_20;
            if (VAR_10)
                VAR_13 = FUNC_26(VAR_10);
            else if ((VAR_20 = FUNC_27(VAR_12, '\\')))
                VAR_13 = FUNC_26(VAR_20 + 1);
            else
                VAR_13 = FUNC_26(VAR_12);
            if (!VAR_13)
                goto done;
        }
    }
    else
    {
        VAR_13 = FUNC_26(FUNC_5(VAR_5, 4));
        if (VAR_13) FUNC_23(VAR_13);
    }

    VAR_18 = 0;
    if (VAR_13)
        VAR_18 = FUNC_14(VAR_13);

    VAR_18 += FUNC_14(VAR_14) + 2;
    VAR_16 = FUNC_16(VAR_18 * sizeof(WCHAR));
    if (!VAR_16)
        goto done;

    FUNC_13(VAR_16, VAR_14);
    if (VAR_16[FUNC_14(VAR_16) - 1] != '\\')
        FUNC_12(VAR_16, VAR_4);

    if (VAR_13)
        FUNC_12(VAR_16, VAR_13);

    if (FUNC_0(VAR_14) == VAR_3)
    {
        if (!FUNC_17(VAR_14))
        {
            FUNC_10("failed to create directory %u\n", FUNC_1());
            goto done;
        }
    }

    if (!VAR_19)
        FUNC_22(VAR_15, VAR_16, VAR_17);
    else
        FUNC_15(VAR_15, VAR_16, VAR_17);

done:
    VAR_8 = FUNC_2( 9 );
    FUNC_8( VAR_8, 1, FUNC_5(VAR_5, 1) );
    FUNC_7( VAR_8, 6, 1 );
    FUNC_8( VAR_8, 9, VAR_14 );
    FUNC_3(VAR_7, VAR_1, VAR_8);
    FUNC_24( &VAR_8->hdr );

    FUNC_19(VAR_12);
    FUNC_19(VAR_14);
    FUNC_19(VAR_13);
    FUNC_19(VAR_15);
    FUNC_19(VAR_16);

    return VAR_0;
}
