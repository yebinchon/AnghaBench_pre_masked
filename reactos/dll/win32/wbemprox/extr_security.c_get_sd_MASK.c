
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sid_users_buffer ;
typedef int sid_network_buffer ;
typedef int sid_local_buffer ;
typedef int sid_admin_buffer ;
typedef int acl_buffer ;
typedef int SID ;
typedef int SECURITY_DESCRIPTOR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int ACL ;
typedef int ACCESS_ALLOWED_ACE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int,int,int *) ;
 int VAR_7 ;
 int FUNC_1 (int ,int *,int *,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_10 ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_14 ;
 int FUNC_10 (int *,int ,int *,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *,int *,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static HRESULT FUNC_13( SECURITY_DESCRIPTOR **VAR_21, DWORD *VAR_22 )
{
    BYTE VAR_23[VAR_13];
    SID *VAR_24 = (SID*)VAR_23;
    BYTE VAR_25[VAR_13];
    SID *VAR_26 = (SID*)VAR_25;
    BYTE VAR_27[VAR_13];
    SID *VAR_28 = (SID*)VAR_27;
    BYTE VAR_29[VAR_13];
    SID *VAR_30 = (SID*)VAR_29;
    BYTE VAR_31[sizeof(ACL) + 4 * (sizeof(ACCESS_ALLOWED_ACE) - sizeof(DWORD) + VAR_13)];
    ACL *VAR_32 = (ACL*)VAR_31;
    DWORD VAR_33;
    SECURITY_DESCRIPTOR VAR_34;
    HRESULT VAR_35 = VAR_14;

    VAR_33 = sizeof(VAR_23);
    FUNC_1( VAR_18, ((void*)0), VAR_24, &VAR_33 );

    VAR_33 = sizeof(VAR_25);
    FUNC_1( VAR_20, ((void*)0), VAR_26, &VAR_33 );

    VAR_33 = sizeof(VAR_27);
    FUNC_1( VAR_19, ((void*)0), VAR_28, &VAR_33 );

    VAR_33 = sizeof(VAR_29);
    FUNC_1( VAR_17, ((void*)0), VAR_30, &VAR_33 );

    FUNC_6( VAR_32, sizeof(VAR_31), VAR_0 );

    FUNC_0( VAR_32, VAR_0, VAR_7|VAR_10,
        VAR_2|VAR_3|VAR_1|VAR_5|
        VAR_4|VAR_6|VAR_11|VAR_16,
        VAR_24 );

    FUNC_0( VAR_32, VAR_0, VAR_7|VAR_10,
        VAR_2|VAR_3|VAR_4,
        VAR_26 );

    FUNC_0( VAR_32, VAR_0, VAR_7|VAR_10,
        VAR_2|VAR_3|VAR_4,
        VAR_28 );

    FUNC_0( VAR_32, VAR_0, VAR_7|VAR_10,
        VAR_2|VAR_3|VAR_4,
        VAR_30 );

    FUNC_7( &VAR_34, VAR_12 );

    FUNC_12( &VAR_34, VAR_24, VAR_15 );
    FUNC_11( &VAR_34, VAR_24, VAR_15 );
    FUNC_10( &VAR_34, VAR_15, VAR_32, VAR_15 );

    *VAR_22 = FUNC_3( &VAR_34 );

    *VAR_21 = FUNC_4( FUNC_2(), 0, *VAR_22 );
    if (!*VAR_21)
        VAR_35 = VAR_9;

    if (FUNC_9(VAR_35))
    {
        if (!FUNC_8(&VAR_34, *VAR_21, VAR_22)) {
            FUNC_5( FUNC_2(), 0, *VAR_21 );
     *VAR_21 = ((void*)0);
            VAR_35 = VAR_8;
        }
    }

    return VAR_35;
}
