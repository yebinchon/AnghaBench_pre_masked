
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_14__ {scalar_t__ Action; } ;
struct TYPE_13__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIPACKAGE ;
typedef TYPE_2__ MSICOMPONENT ;
typedef char* LPWSTR ;
typedef int * LPVOID ;
typedef char* LPCWSTR ;
typedef int INT ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 char* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,char**) ;
 int FUNC_8 (TYPE_2__*,int ,char*) ;
 int FUNC_9 (TYPE_2__*,int ,char*,char*) ;
 char* FUNC_10 (int *,int ,int *) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_14 (int *,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static UINT FUNC_19( MSIRECORD *VAR_5, LPVOID VAR_6 )
{
    MSIPACKAGE *VAR_7 = VAR_6;
    LPCWSTR VAR_8, VAR_9, VAR_10, VAR_11;
    LPWSTR VAR_12, VAR_13, VAR_14;
    MSICOMPONENT *VAR_15;
    MSIRECORD *VAR_16;
    BOOL VAR_17 = VAR_1;
    HKEY VAR_18;
    UINT VAR_19;
    INT VAR_20;

    VAR_8 = FUNC_3( VAR_5, 5 );
    VAR_15 = FUNC_14( VAR_7, VAR_8 );
    if (!VAR_15)
        return VAR_0;

    VAR_15->Action = FUNC_13( VAR_7, VAR_15 );
    if (VAR_15->Action != VAR_3)
    {
        FUNC_5("component not scheduled for installation %s\n", FUNC_6(VAR_8));
        return VAR_0;
    }

    if ((VAR_9 = FUNC_3( VAR_5, 4 )))
    {
        if (VAR_9[0] == '-' && !VAR_9[1])
        {
            VAR_17 = VAR_4;
            VAR_9 = ((void*)0);
        }
    }

    VAR_20 = FUNC_2( VAR_5, 2 );
    VAR_10 = FUNC_3( VAR_5, 3 );

    VAR_11 = FUNC_10( VAR_7, VAR_20, &VAR_18 );
    if (!VAR_11)
        return VAR_0;

    FUNC_7( VAR_7, VAR_10, &VAR_12 );
    VAR_19 = FUNC_18( VAR_12 ) + FUNC_18( VAR_11 ) + 1;
    VAR_14 = FUNC_11( VAR_19 * sizeof(WCHAR) );
    FUNC_17( VAR_14, VAR_11 );
    FUNC_16( VAR_14, VAR_12 );

    FUNC_7( VAR_7, VAR_9, &VAR_13 );

    if (VAR_17) FUNC_8( VAR_15, VAR_18, VAR_12 );
    else FUNC_9( VAR_15, VAR_18, VAR_12, VAR_13 );
    FUNC_12( VAR_12 );

    VAR_16 = FUNC_0( 2 );
    FUNC_4( VAR_16, 1, VAR_14 );
    FUNC_4( VAR_16, 2, VAR_13 );
    FUNC_1(VAR_7, VAR_2, VAR_16);
    FUNC_15( &VAR_16->hdr );

    FUNC_12( VAR_14 );
    FUNC_12( VAR_13 );
    return VAR_0;
}
