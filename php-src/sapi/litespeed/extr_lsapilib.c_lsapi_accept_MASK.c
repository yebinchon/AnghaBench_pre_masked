
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;
typedef int nodelay ;
typedef int achPeer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_2( int VAR_3 )
{
    int VAR_4;
    int VAR_5 = 1;
    socklen_t VAR_6;
    char VAR_7[128];

    VAR_6 = sizeof( VAR_7 );
    VAR_4 = FUNC_0( VAR_3, (struct sockaddr *)&VAR_7, &VAR_6 );
    if ( VAR_4 != -1 )
    {
        if (((struct sockaddr *)&VAR_7)->sa_family == VAR_0 )
        {
            FUNC_1( VAR_4, VAR_1, VAR_2,
                    (char *)&VAR_5, sizeof(VAR_5));
        }




    }
    return VAR_4;

}
