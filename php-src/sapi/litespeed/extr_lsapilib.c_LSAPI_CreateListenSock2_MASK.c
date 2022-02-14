
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int sa_family; } ;
typedef int flag ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int ,int ,char*,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ) ;

int FUNC_7( const struct sockaddr * VAR_6, int VAR_7 )
{
    int VAR_8;
    int VAR_9;
    int VAR_10 = 1;
    int VAR_11;

    switch( VAR_6->sa_family )
    {
    case 130:
        VAR_11 = 16;
        break;
    case 129:
        VAR_11 = sizeof( struct sockaddr_in6 );
        break;
    case 128:
        VAR_11 = sizeof( struct sockaddr_un );
        FUNC_6( ((struct sockaddr_un *)VAR_6)->sun_path );
        break;
    default:
        return -1;
    }

    VAR_9 = FUNC_5( VAR_6->sa_family, VAR_2, 0 );
    if ( VAR_9 == -1 )
        return -1;

    FUNC_2( VAR_9, VAR_1, VAR_0 );

    if(FUNC_4( VAR_9, VAR_3, VAR_4,
                (char *)( &VAR_10 ), sizeof(VAR_10)) == 0)
    {
        VAR_8 = FUNC_0( VAR_9, VAR_6, VAR_11 );
        if ( !VAR_8 )
        {
            VAR_8 = FUNC_3( VAR_9, VAR_7 );
            if ( !VAR_8 )
                return VAR_9;
        }
    }

    VAR_8 = VAR_5;
    FUNC_1(VAR_9);
    VAR_5 = VAR_8;
    return -1;
}
