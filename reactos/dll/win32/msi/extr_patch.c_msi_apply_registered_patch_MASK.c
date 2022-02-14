
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int patch_file ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {int hdr; int storage; } ;
struct TYPE_17__ {int Context; int ProductCode; } ;
struct TYPE_16__ {int localfile; int registered; } ;
struct TYPE_15__ {int hdr; } ;
typedef TYPE_1__ MSISUMMARYINFO ;
typedef TYPE_2__ MSIPATCHINFO ;
typedef TYPE_3__ MSIPACKAGE ;
typedef TYPE_4__ MSIDATABASE ;
typedef int * LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,TYPE_4__**) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int ,int ,int *,int*) ;
 int FUNC_3 (char*,TYPE_3__*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_1__**) ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_2__**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

UINT FUNC_11( MSIPACKAGE *VAR_7, LPCWSTR VAR_8 )
{
    UINT VAR_9;
    DWORD VAR_10;
    WCHAR VAR_11[VAR_3];
    MSIDATABASE *VAR_12;
    MSIPATCHINFO *VAR_13;
    MSISUMMARYINFO *VAR_14;

    FUNC_3("%p, %s\n", VAR_7, FUNC_4(VAR_8));

    VAR_10 = sizeof(VAR_11) / sizeof(WCHAR);
    VAR_9 = FUNC_2( VAR_8, VAR_7->ProductCode, ((void*)0), VAR_7->Context,
                            VAR_2, VAR_11, &VAR_10 );
    if (VAR_9 != VAR_1)
    {
        FUNC_0("failed to get patch filename %u\n", VAR_9);
        return VAR_9;
    }
    VAR_9 = FUNC_1( VAR_11, VAR_5 + VAR_4, &VAR_12 );
    if (VAR_9 != VAR_1)
    {
        FUNC_0("failed to open patch database %s\n", FUNC_4( VAR_11 ));
        return VAR_9;
    }
    VAR_9 = FUNC_7( VAR_12->storage, 0, &VAR_14 );
    if (VAR_9 != VAR_1)
    {
        FUNC_9( &VAR_12->hdr );
        return VAR_9;
    }
    VAR_9 = FUNC_8( VAR_14, &VAR_13 );
    FUNC_9( &VAR_14->hdr );
    if (VAR_9 != VAR_1)
    {
        FUNC_0("failed to parse patch summary %u\n", VAR_9);
        FUNC_9( &VAR_12->hdr );
        return VAR_9;
    }
    VAR_13->registered = VAR_6;
    VAR_13->localfile = FUNC_10( VAR_11 );
    if (!VAR_13->localfile)
    {
        FUNC_9( &VAR_12->hdr );
        FUNC_6( VAR_13 );
        return VAR_0;
    }
    VAR_9 = FUNC_5( VAR_7, VAR_12, VAR_13 );
    FUNC_9( &VAR_12->hdr );
    if (VAR_9 != VAR_1)
    {
        FUNC_0("failed to apply patch %u\n", VAR_9);
        FUNC_6( VAR_13 );
    }
    return VAR_9;
}
