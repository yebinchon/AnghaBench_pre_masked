
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_35__ {int path; int storage; int hdr; } ;
struct TYPE_34__ {int* langids; TYPE_10__* db; scalar_t__ num_langids; int log_file; int hdr; int Context; int ProductCode; int delete_on_close; void* localfile; } ;
struct TYPE_33__ {int hdr; } ;
struct TYPE_32__ {int hdr; } ;
struct TYPE_31__ {int strings; } ;
typedef TYPE_1__ MSISUMMARYINFO ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSIPACKAGE ;
typedef int MSIHANDLE ;
typedef TYPE_4__ MSIDATABASE ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int IWineMsiRemoteDatabase ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_3__* FUNC_7 (TYPE_4__*,char*) ;
 TYPE_2__* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*,int ,TYPE_4__**) ;
 int FUNC_10 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int,int) ;
 int FUNC_13 (TYPE_2__*,int,char*) ;
 scalar_t__ FUNC_14 (int ,int *,int ,int ,scalar_t__,char*,int *,int *,int *,int *) ;
 int VAR_21 ;
 int FUNC_15 (char*,int ,...) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_16 (char*,int ) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 scalar_t__ VAR_24 ;
 int FUNC_21 (TYPE_3__*) ;
 scalar_t__ FUNC_22 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_23 (char*,char const*) ;
 scalar_t__ FUNC_24 (char*,char*) ;
 char* FUNC_25 (TYPE_10__*,int ) ;
 int FUNC_26 (char*) ;
 scalar_t__ FUNC_27 (TYPE_4__*,int ,TYPE_1__**) ;
 char* FUNC_28 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (int ,int ,TYPE_1__**) ;
 int FUNC_32 (TYPE_3__*) ;
 scalar_t__ FUNC_33 (TYPE_10__*,char*) ;
 int FUNC_34 (TYPE_10__*,int ,int ,int) ;
 TYPE_4__* FUNC_35 (int ,int ) ;
 int FUNC_36 (int *) ;
 scalar_t__ FUNC_37 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_38 (TYPE_3__*) ;
 void* FUNC_39 (char*) ;
 char* FUNC_40 (char*,char) ;
 int VAR_25 ;
 scalar_t__ FUNC_41 (TYPE_3__*) ;

UINT FUNC_42(LPCWSTR VAR_26, MSIPACKAGE **VAR_27)
{
    static const WCHAR VAR_28[] = {'.','m','s','i',0};
    MSIDATABASE *VAR_29;
    MSIPACKAGE *VAR_30;
    MSIHANDLE VAR_31;
    MSIRECORD *VAR_32, *VAR_33;
    LPWSTR VAR_34, VAR_35 = ((void*)0);
    UINT VAR_36;
    WCHAR VAR_37[VAR_15], VAR_38[VAR_15];
    LPCWSTR VAR_39 = VAR_26;
    DWORD VAR_40 = 0;
    MSISUMMARYINFO *VAR_41;
    BOOL VAR_42 = VAR_5;
    LPWSTR VAR_43;
    WCHAR *VAR_44;

    FUNC_15("%s %p\n", FUNC_19(VAR_26), VAR_27);

    FUNC_10(((void*)0), VAR_12, 0);

    VAR_37[0] = 0;
    if( VAR_26[0] == '#' )
    {
        VAR_31 = FUNC_18(&VAR_26[1]);
        VAR_29 = FUNC_35( VAR_31, VAR_19 );
        if( !VAR_29 )
        {
            IWineMsiRemoteDatabase *VAR_45;

            VAR_45 = (IWineMsiRemoteDatabase *)FUNC_29( VAR_31 );
            if ( !VAR_45 )
                return VAR_2;

            FUNC_6( VAR_45 );
            FUNC_17("MsiOpenPackage not allowed during a custom action!\n");

            return VAR_0;
        }
    }
    else
    {
        if ( FUNC_16( VAR_26, VAR_23 ) )
        {
            VAR_36 = FUNC_24( VAR_26, VAR_38 );
            if (VAR_36 != VAR_4)
                return VAR_36;

            VAR_39 = VAR_38;

            VAR_35 = FUNC_39( VAR_26 );
            if (!VAR_35)
                return VAR_3;

            VAR_34 = FUNC_40( VAR_35, '/' );
            if (VAR_34) *(VAR_34 + 1) = '\0';
        }
        VAR_36 = FUNC_20( VAR_39, VAR_37 );
        if (VAR_36 != VAR_4 || FUNC_4( VAR_37 ) == VAR_14)
        {
            VAR_36 = FUNC_23( VAR_37, VAR_28 );
            if (VAR_36 != VAR_4)
            {
                FUNC_26 ( VAR_35 );
                return VAR_36;
            }

            if (!FUNC_0( VAR_39, VAR_37, VAR_5 ))
            {
                VAR_36 = FUNC_5();
                FUNC_17("unable to copy package %s to %s (%u)\n", FUNC_19(VAR_39), FUNC_19(VAR_37), VAR_36);
                FUNC_2( VAR_37 );
                FUNC_26 ( VAR_35 );
                return VAR_36;
            }
            VAR_42 = VAR_22;
        }
        FUNC_15("opening package %s\n", FUNC_19( VAR_37 ));
        VAR_36 = FUNC_9( VAR_37, VAR_17, &VAR_29 );
        if (VAR_36 != VAR_4)
        {
            FUNC_26 ( VAR_35 );
            return VAR_36;
        }
    }
    VAR_30 = FUNC_7( VAR_29, VAR_35 );
    FUNC_26( VAR_35 );
    FUNC_36( &VAR_29->hdr );
    if (!VAR_30) return VAR_1;
    VAR_30->localfile = FUNC_39( VAR_37 );
    VAR_30->delete_on_close = VAR_42;

    VAR_36 = FUNC_31( VAR_29->storage, 0, &VAR_41 );
    if (VAR_36 != VAR_4)
    {
        VAR_36 = FUNC_27( VAR_29, 0, &VAR_41 );
        if (VAR_36 != VAR_4)
        {
            FUNC_17("failed to load summary info\n");
            FUNC_36( &VAR_30->hdr );
            return VAR_1;
        }
    }
    VAR_36 = FUNC_37( VAR_41, VAR_30 );
    FUNC_36( &VAR_41->hdr );
    if (VAR_36 != VAR_4)
    {
        FUNC_17("failed to parse summary info %u\n", VAR_36);
        FUNC_36( &VAR_30->hdr );
        return VAR_36;
    }
    VAR_36 = FUNC_41( VAR_30 );
    if (VAR_36 != VAR_4)
    {
        FUNC_36( &VAR_30->hdr );
        return VAR_36;
    }
    FUNC_34( VAR_30->db, VAR_25, VAR_29->path, -1 );
    FUNC_38( VAR_30 );
    FUNC_32( VAR_30 );

    while (1)
    {
        WCHAR VAR_46[VAR_9];
        VAR_36 = FUNC_14( VAR_30->ProductCode, ((void*)0), VAR_30->Context,
                               VAR_20, VAR_40, VAR_46, ((void*)0), ((void*)0), ((void*)0), ((void*)0) );
        if (VAR_36 != VAR_4)
            break;

        FUNC_15("found registered patch %s\n", FUNC_19(VAR_46));

        VAR_36 = FUNC_22( VAR_30, VAR_46 );
        if (VAR_36 != VAR_4)
        {
            FUNC_3("registered patch failed to apply %u\n", VAR_36);
            FUNC_36( &VAR_30->hdr );
            return VAR_36;
        }
        VAR_40++;
    }
    if (VAR_40) FUNC_21( VAR_30 );

    VAR_36 = FUNC_33( VAR_30->db, VAR_26 );
    if (VAR_36 != VAR_4)
    {
        FUNC_36( &VAR_30->hdr );
        return VAR_36;
    }
    if (VAR_24)
        VAR_30->log_file = FUNC_1( VAR_24, VAR_8, VAR_7, ((void*)0),
                                         VAR_21, VAR_6, ((void*)0) );


    VAR_32 = FUNC_8(3);
    if (!VAR_32)
 return VAR_3;
    FUNC_13(VAR_32, 0, ((void*)0));
    FUNC_12(VAR_32, 1, 0);
    FUNC_12(VAR_32, 2, VAR_30->num_langids ? VAR_30->langids[0] : 0);
    FUNC_12(VAR_32, 3, FUNC_30(VAR_30->db->strings));
    FUNC_11(VAR_30, VAR_10, VAR_32);

    VAR_33 = FUNC_8(0);
    if (!VAR_33)
    {
 FUNC_36(&VAR_32->hdr);
 return VAR_3;
    }
    VAR_44 = FUNC_28(VAR_30->db, VAR_18);
    FUNC_13(VAR_33, 0, VAR_44);
    FUNC_26(VAR_44);
    FUNC_10(VAR_30, VAR_11|VAR_16, VAR_33);

    FUNC_10(VAR_30, VAR_10, VAR_32);

    VAR_43 = FUNC_25(VAR_30->db, VAR_13);
    FUNC_12(VAR_32, 1, 1);
    FUNC_13(VAR_32, 2, VAR_43);
    FUNC_13(VAR_32, 3, ((void*)0));
    FUNC_10(VAR_30, VAR_10, VAR_32);

    FUNC_26(VAR_43);
    FUNC_36(&VAR_33->hdr);
    FUNC_36(&VAR_32->hdr);

    *VAR_27 = VAR_30;
    return VAR_4;
}
