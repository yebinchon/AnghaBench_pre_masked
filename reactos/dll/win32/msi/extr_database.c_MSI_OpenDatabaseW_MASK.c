
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_7__ {int hdr; int strings; int bytes_per_strref; int transforms; int tables; void* deletefile; scalar_t__ mode; int * storage; int media_transform_disk_id; int media_transform_offset; void* path; } ;
struct TYPE_6__ {int clsid; } ;
typedef TYPE_1__ STATSTG ;
typedef TYPE_2__ MSIDATABASE ;
typedef scalar_t__ LPCWSTR ;
typedef int IStorage ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*,int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int,int ,int **) ;
 int FUNC_12 (scalar_t__,int *,int,int *,int ,int **) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_27 ;
 int FUNC_15 (char*,int ,int ) ;
 TYPE_2__* FUNC_16 (int ,int,int ) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,scalar_t__) ;
 int FUNC_23 (int *,scalar_t__) ;
 int VAR_28 ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (scalar_t__,char) ;
 void* FUNC_28 (scalar_t__) ;
 scalar_t__ VAR_29 ;

UINT FUNC_29(LPCWSTR VAR_30, LPCWSTR VAR_31, MSIDATABASE **VAR_32)
{
    IStorage *VAR_33 = ((void*)0);
    HRESULT VAR_34;
    MSIDATABASE *VAR_35 = ((void*)0);
    UINT VAR_36 = VAR_3;
    LPCWSTR VAR_37, VAR_38;
    STATSTG VAR_39;
    BOOL VAR_40 = VAR_7, VAR_41 = VAR_7;
    WCHAR VAR_42[VAR_8];

    FUNC_13("%s %s\n",FUNC_19(VAR_30),FUNC_19(VAR_31) );

    if( !VAR_32 )
        return VAR_4;

    if (VAR_31 - VAR_12 <= VAR_10)
    {
        FUNC_13("Database is a patch\n");
        VAR_31 -= VAR_12;
        VAR_41 = VAR_27;
    }

    VAR_38 = VAR_30;
    VAR_37 = VAR_31;
    if( !FUNC_5(VAR_31) )
    {
        if (!FUNC_0( VAR_30, VAR_31, VAR_7 ))
            return VAR_5;

        VAR_30 = VAR_31;
        VAR_31 = VAR_14;
        VAR_40 = VAR_27;
    }

    if( VAR_31 == VAR_13 )
    {
        VAR_34 = FUNC_12( VAR_30, ((void*)0),
              VAR_21|VAR_22|VAR_24, ((void*)0), 0, &VAR_33);
    }
    else if( VAR_31 == VAR_9 )
    {
        VAR_34 = FUNC_11( VAR_30,
              VAR_20|VAR_26|VAR_23|VAR_25, 0, &VAR_33 );

        if( FUNC_10(VAR_34) )
            VAR_34 = FUNC_17( VAR_33, VAR_41 ? &VAR_1 : &VAR_0 );
        VAR_40 = VAR_27;
    }
    else if( VAR_31 == VAR_10 )
    {
        VAR_34 = FUNC_11( VAR_30,
              VAR_20|VAR_21|VAR_23|VAR_25, 0, &VAR_33 );

        if( FUNC_10(VAR_34) )
            VAR_34 = FUNC_17( VAR_33, VAR_41 ? &VAR_1 : &VAR_0 );
        VAR_40 = VAR_27;
    }
    else if( VAR_31 == VAR_14 )
    {
        VAR_34 = FUNC_12( VAR_30, ((void*)0),
              VAR_26|VAR_23|VAR_24, ((void*)0), 0, &VAR_33);
    }
    else if( VAR_31 == VAR_11 )
    {
        VAR_34 = FUNC_12( VAR_30, ((void*)0),
              VAR_21|VAR_23|VAR_25, ((void*)0), 0, &VAR_33);
    }
    else
    {
        FUNC_1("unknown flag %p\n",VAR_31);
        return VAR_4;
    }

    if( FUNC_2( VAR_34 ) || !VAR_33 )
    {
        FUNC_15("open failed r = %08x for %s\n", VAR_34, FUNC_19(VAR_30));
        return VAR_3;
    }

    VAR_34 = FUNC_8( VAR_33, &VAR_39, VAR_19 );
    if( FUNC_2( VAR_34 ) )
    {
        FUNC_3("Failed to stat storage\n");
        goto end;
    }

    if ( !FUNC_9( &VAR_39.clsid, &VAR_0 ) &&
         !FUNC_9( &VAR_39.clsid, &VAR_1 ) &&
         !FUNC_9( &VAR_39.clsid, &VAR_2 ) )
    {
        FUNC_1("storage GUID is not a MSI database GUID %s\n",
             FUNC_18(&VAR_39.clsid) );
        goto end;
    }

    if ( VAR_41 && !FUNC_9( &VAR_39.clsid, &VAR_1 ) )
    {
        FUNC_1("storage GUID is not the MSI patch GUID %s\n",
             FUNC_18(&VAR_39.clsid) );
        VAR_36 = VAR_5;
        goto end;
    }

    VAR_35 = FUNC_16( VAR_15, sizeof (MSIDATABASE),
                              VAR_16 );
    if( !VAR_35 )
    {
        FUNC_3("Failed to allocate a handle\n");
        goto end;
    }

    if (!FUNC_27( VAR_38, '\\' ))
    {
        FUNC_4( VAR_8, VAR_42 );
        FUNC_22( VAR_42, VAR_29 );
        FUNC_22( VAR_42, VAR_38 );
    }
    else
        FUNC_23( VAR_42, VAR_38 );

    VAR_35->path = FUNC_28( VAR_42 );
    VAR_35->media_transform_offset = VAR_18;
    VAR_35->media_transform_disk_id = VAR_17;

    if( FUNC_14( VAR_28 ) )
        FUNC_20( VAR_33 );

    VAR_35->storage = VAR_33;
    VAR_35->mode = VAR_37;
    if (VAR_40)
        VAR_35->deletefile = FUNC_28( VAR_30 );
    FUNC_21( &VAR_35->tables );
    FUNC_21( &VAR_35->transforms );

    VAR_35->strings = FUNC_24( VAR_33, &VAR_35->bytes_per_strref );
    if( !VAR_35->strings )
        goto end;

    VAR_36 = VAR_6;

    FUNC_25( &VAR_35->hdr );
    FUNC_6( VAR_33 );
    *VAR_32 = VAR_35;

end:
    if( VAR_35 )
        FUNC_26( &VAR_35->hdr );
    if( VAR_33 )
        FUNC_7( VAR_33 );

    return VAR_36;
}
