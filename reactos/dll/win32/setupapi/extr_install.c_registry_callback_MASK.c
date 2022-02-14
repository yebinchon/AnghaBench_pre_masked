
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct registry_callback_info {scalar_t__ delete; int default_root; } ;
typedef int buffer ;
typedef scalar_t__ WCHAR ;
typedef int UNICODE_NULL ;
struct TYPE_3__ {int nLength; int * lpSecurityDescriptor; int member_0; } ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef int * PSECURITY_DESCRIPTOR ;
typedef int * PCWSTR ;
typedef int * LPWSTR ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HKEY ;
typedef int HINF ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int ,int **,int *) ;
 int * VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,int ,int *,int ,int ,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*,int *) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int,int*) ;
 int FUNC_12 (int *,int *,int *,int *,int *,int,int*) ;
 int FUNC_13 (int *,int,scalar_t__*,int,int *) ;
 int FUNC_14 (char*,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (scalar_t__*) ;
 int FUNC_16 (int ,scalar_t__*,int *,int) ;
 int FUNC_17 (scalar_t__*,int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static BOOL FUNC_21( HINF VAR_9, PCWSTR VAR_10, void *VAR_11 )
{
    struct registry_callback_info *VAR_12 = VAR_11;
    LPWSTR VAR_13, VAR_14;
    INFCONTEXT VAR_15, VAR_16;
    PSECURITY_DESCRIPTOR VAR_17 = ((void*)0);
    SECURITY_ATTRIBUTES VAR_18 = { 0, };
    HKEY VAR_19, VAR_20;
    DWORD VAR_21;

    BOOL VAR_22 = FUNC_9( VAR_9, VAR_10, ((void*)0), &VAR_15 );
    if (!VAR_22)
        return VAR_8;


    VAR_13 = FUNC_4( (FUNC_20( VAR_10 ) + FUNC_20( VAR_0 )) * sizeof(WCHAR) + sizeof(UNICODE_NULL) );
    if (!VAR_13)
    {
        FUNC_8(VAR_1);
        return VAR_2;
    }
    FUNC_19( VAR_13, VAR_10 );
    FUNC_18( VAR_13, VAR_0 );
    VAR_22 = FUNC_9( VAR_9, VAR_13, ((void*)0), &VAR_16 );
    FUNC_3(VAR_13);
    if (VAR_22)
    {
        if (!FUNC_12( &VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, &VAR_21 ))
            return VAR_2;
        VAR_14 = FUNC_4( VAR_21 * sizeof(WCHAR) );
        if (!VAR_14)
        {
            FUNC_8(VAR_1);
            return VAR_2;
        }
        if (!FUNC_12( &VAR_16, ((void*)0), ((void*)0), ((void*)0), VAR_14, VAR_21, ((void*)0) ))
            return VAR_2;
        VAR_22 = FUNC_0( VAR_14, VAR_7, &VAR_17, ((void*)0) );
        FUNC_3( VAR_14 );
        if (!VAR_22)
            return VAR_2;
        VAR_18.nLength = sizeof(SECURITY_ATTRIBUTES);
        VAR_18.lpSecurityDescriptor = VAR_17;
    }

    for (VAR_22 = VAR_8; VAR_22; VAR_22 = FUNC_10( &VAR_15, &VAR_15 ))
    {
        WCHAR VAR_23[VAR_6];
        INT VAR_24;


        if (!FUNC_13( &VAR_15, 1, VAR_23, sizeof(VAR_23)/sizeof(WCHAR), ((void*)0) ))
            continue;
        if (!(VAR_19 = FUNC_17( VAR_23, VAR_12->default_root )))
            continue;


        if (!FUNC_13( &VAR_15, 2, VAR_23, sizeof(VAR_23)/sizeof(WCHAR), ((void*)0) ))
            *VAR_23 = 0;


        if (!FUNC_11( &VAR_15, 4, &VAR_24 )) VAR_24 = 0;

        if (!VAR_12->delete)
        {
            if (VAR_24 & VAR_3) continue;
        }
        else
        {
            if (!VAR_24) VAR_24 = VAR_3;
            else if (!(VAR_24 & VAR_3)) continue;
        }

        if (VAR_12->delete || (VAR_24 & VAR_4))
        {
            if (FUNC_7( VAR_19, VAR_23, &VAR_20 )) continue;
        }
        else if (FUNC_6( VAR_19, VAR_23, 0, ((void*)0), 0, VAR_5,
            VAR_17 ? &VAR_18 : ((void*)0), &VAR_20, ((void*)0) ))
        {
            FUNC_1( "could not create key %p %s\n", VAR_19, FUNC_15(VAR_23) );
            continue;
        }
        FUNC_14( "key %p %s\n", VAR_19, FUNC_15(VAR_23) );


        if (!FUNC_13( &VAR_15, 3, VAR_23, sizeof(VAR_23)/sizeof(WCHAR), ((void*)0) ))
            *VAR_23 = 0;


        if (!FUNC_16( VAR_20, VAR_23, &VAR_15, VAR_24 ))
        {
            if (VAR_20 != VAR_19) FUNC_5( VAR_20 );
            if (VAR_17) FUNC_2( VAR_17 );
            return VAR_2;
        }
        if (VAR_20 != VAR_19) FUNC_5( VAR_20 );
    }
    if (VAR_17) FUNC_2( VAR_17 );
    return VAR_8;
}
