
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {int hdr; int storage; } ;
struct TYPE_13__ {void* localfile; void* filename; int registered; } ;
struct TYPE_12__ {int hdr; } ;
typedef TYPE_1__ MSISUMMARYINFO ;
typedef TYPE_2__ MSIPATCHINFO ;
typedef int MSIPACKAGE ;
typedef TYPE_3__ MSIDATABASE ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (char const*,scalar_t__,TYPE_3__**) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,int ,TYPE_1__**) ;
 scalar_t__ FUNC_11 (TYPE_1__*,TYPE_2__**) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (char const*) ;

__attribute__((used)) static UINT FUNC_14( MSIPACKAGE *VAR_6, const WCHAR *VAR_7 )
{
    static const WCHAR VAR_8[] = {'.','m','s','p',0};
    MSIDATABASE *VAR_9 = ((void*)0);
    WCHAR VAR_10[VAR_3];
    MSISUMMARYINFO *VAR_11;
    MSIPATCHINFO *VAR_12 = ((void*)0);
    UINT VAR_13;

    FUNC_3("%p, %s\n", VAR_6, FUNC_5(VAR_7));

    VAR_13 = FUNC_2( VAR_7, VAR_5 + VAR_4, &VAR_9 );
    if (VAR_13 != VAR_1)
    {
        FUNC_1("failed to open patch collection %s\n", FUNC_5( VAR_7 ) );
        return VAR_13;
    }
    VAR_13 = FUNC_10( VAR_9->storage, 0, &VAR_11 );
    if (VAR_13 != VAR_1)
    {
        FUNC_12( &VAR_9->hdr );
        return VAR_13;
    }
    VAR_13 = FUNC_7( VAR_6, VAR_11 );
    if (VAR_13 != VAR_1)
    {
        FUNC_3("patch not applicable\n");
        VAR_13 = VAR_1;
        goto done;
    }
    VAR_13 = FUNC_11( VAR_11, &VAR_12 );
    if ( VAR_13 != VAR_1 )
        goto done;

    VAR_13 = FUNC_8( VAR_10, VAR_8 );
    if ( VAR_13 != VAR_1 )
        goto done;

    VAR_13 = VAR_0;
    VAR_12->registered = VAR_2;
    if (!(VAR_12->filename = FUNC_13( VAR_7 ))) goto done;
    if (!(VAR_12->localfile = FUNC_13( VAR_10 ))) goto done;

    VAR_13 = FUNC_6( VAR_6, VAR_9, VAR_12 );
    if (VAR_13 != VAR_1) FUNC_4("patch failed to apply %u\n", VAR_13);

done:
    FUNC_12( &VAR_11->hdr );
    FUNC_12( &VAR_9->hdr );
    if (VAR_12 && VAR_13 != VAR_1)
    {
        FUNC_0( VAR_12->localfile );
        FUNC_9( VAR_12 );
    }
    return VAR_13;
}
