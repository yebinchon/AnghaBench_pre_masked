
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_15__ {scalar_t__ Action; } ;
struct TYPE_14__ {int hdr; } ;
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
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,char*) ;
 int VAR_4 ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,char*,char**) ;
 int FUNC_9 (TYPE_2__*,int ,char*) ;
 int FUNC_10 (TYPE_2__*,int ,char*,char*) ;
 char* FUNC_11 (int *,int ,int *) ;
 char* FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_15 (int *,char*) ;
 int FUNC_16 (int *,int,int ,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static UINT FUNC_21( MSIRECORD *VAR_6, LPVOID VAR_7 )
{
    MSIPACKAGE *VAR_8 = VAR_7;
    LPCWSTR VAR_9, VAR_10, VAR_11, VAR_12;
    LPWSTR VAR_13, VAR_14, VAR_15;
    MSICOMPONENT *VAR_16;
    MSIRECORD *VAR_17;
    BOOL VAR_18 = VAR_1;
    HKEY VAR_19;
    UINT VAR_20;
    INT VAR_21;

    FUNC_16( VAR_8, 2, VAR_4, 0, 0 );

    VAR_9 = FUNC_3( VAR_6, 6 );
    VAR_16 = FUNC_15( VAR_8, VAR_9 );
    if (!VAR_16)
        return VAR_0;

    VAR_16->Action = FUNC_14( VAR_8, VAR_16 );
    if (VAR_16->Action != VAR_3)
    {
        FUNC_6("component not scheduled for removal %s\n", FUNC_7(VAR_9));
        return VAR_0;
    }

    VAR_10 = FUNC_3( VAR_6, 4 );
    if (FUNC_4( VAR_6, 5 ) && VAR_10 )
    {
        if (VAR_10[0] == '+' && !VAR_10[1])
            return VAR_0;
        if ((VAR_10[0] == '-' || VAR_10[0] == '*') && !VAR_10[1])
        {
            VAR_18 = VAR_5;
            VAR_10 = ((void*)0);
        }
    }

    VAR_21 = FUNC_2( VAR_6, 2 );
    VAR_11 = FUNC_3( VAR_6, 3 );

    VAR_12 = FUNC_11( VAR_8, VAR_21, &VAR_19 );
    if (!VAR_12)
        return VAR_0;

    FUNC_8( VAR_8, VAR_11, &VAR_13 );
    VAR_20 = FUNC_20( VAR_13 ) + FUNC_20( VAR_12 ) + 1;
    VAR_15 = FUNC_12( VAR_20 * sizeof(WCHAR) );
    FUNC_19( VAR_15, VAR_12 );
    FUNC_18( VAR_15, VAR_13 );

    FUNC_8( VAR_8, VAR_10, &VAR_14 );

    if (VAR_18) FUNC_9( VAR_16, VAR_19, VAR_13 );
    else FUNC_10( VAR_16, VAR_19, VAR_13, VAR_14 );
    FUNC_13( VAR_13 );

    VAR_17 = FUNC_0( 2 );
    FUNC_5( VAR_17, 1, VAR_15 );
    FUNC_5( VAR_17, 2, VAR_14 );
    FUNC_1(VAR_8, VAR_2, VAR_17);
    FUNC_17( &VAR_17->hdr );

    FUNC_13( VAR_15 );
    FUNC_13( VAR_14 );
    return VAR_0;
}
