
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {scalar_t__ pw_gid; int pw_name; } ;
typedef scalar_t__ gid_t ;
typedef int LSAPI_Request ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_1 ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,struct passwd*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(LSAPI_Request * VAR_7, uid_t VAR_8, gid_t VAR_9, const char * VAR_10)
{
    int VAR_11;
    struct passwd * VAR_12;
    VAR_12 = FUNC_2( VAR_8 );

    if ( VAR_6 )
    {
        if( FUNC_5( VAR_7, VAR_8 ) == -1 )
            return -1;
        if ( VAR_12 && VAR_1)
        {
            VAR_11 = FUNC_6( VAR_7, VAR_8, VAR_12 );
            if ( VAR_11 == -1 )
                return -1;
            if (( VAR_11 == 1 )&&(VAR_5 == VAR_0 ))
            {
                VAR_8 = VAR_3;
                VAR_9 = VAR_2;
                VAR_12 = FUNC_2( VAR_8 );
            }
        }
    }
    VAR_11 = FUNC_7(VAR_9);
    if (VAR_11 == -1)
    {
        FUNC_0(VAR_7, "LSAPI: setgid()", ((void*)0));
        return -1;
    }
    if ( VAR_12 && (VAR_12->pw_gid == VAR_9 ))
    {
        VAR_11 = FUNC_3( VAR_12->pw_name, VAR_9 );
        if (VAR_11 == -1)
        {
            FUNC_0(VAR_7, "LSAPI: initgroups()", ((void*)0));
            return -1;
        }
    }
    else
    {
        VAR_11 = FUNC_8(1, &VAR_9);
        if (VAR_11 == -1)
        {
            FUNC_0(VAR_7, "LSAPI: setgroups()", ((void*)0));
        }
    }
    if ( VAR_10 )
    {
        VAR_11 = FUNC_1( VAR_10 );
        if ( VAR_11 == -1 )
        {
            FUNC_0(VAR_7, "LSAPI: chroot()", ((void*)0));
            return -1;
        }
    }
    VAR_11 = FUNC_9(VAR_8);
    if (VAR_11 == -1)
    {
        FUNC_0(VAR_7, "LSAPI: setuid()", ((void*)0));
        return -1;
    }

    if ( VAR_4 )
        FUNC_4();

    return 0;
}
