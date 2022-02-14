
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 int FUNC_0 (struct sockaddr*,int) ;
 int FUNC_1 (char const*,struct sockaddr*) ;

int FUNC_2( const char * VAR_0, int VAR_1 )
{
    char VAR_2[128];
    int VAR_3;
    int VAR_4 = -1;
    VAR_3 = FUNC_1( VAR_0, (struct sockaddr *)VAR_2 );
    if ( !VAR_3 )
    {
        VAR_4 = FUNC_0( (struct sockaddr *)VAR_2, VAR_1 );
    }
    return VAR_4;
}
