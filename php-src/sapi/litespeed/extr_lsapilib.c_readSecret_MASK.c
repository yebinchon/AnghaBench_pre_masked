
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*,int ,int) ;
 int FUNC_4 (int,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5( const char * VAR_2 )
{
    struct stat VAR_3;
    int VAR_4 = FUNC_3( VAR_2, VAR_0 , 0600 );
    if ( VAR_4 == -1 )
    {
        FUNC_2("LSAPI: failed to open secret file: %s!\n", VAR_2 );
        return -1;
    }
    if ( FUNC_1( VAR_4, &VAR_3 ) == -1 )
    {
        FUNC_2("LSAPI: failed to check state of file: %s!\n", VAR_2 );
        FUNC_0( VAR_4 );
        return -1;
    }
    if ( VAR_3.st_mode & 0077 )
    {
        FUNC_2("LSAPI: file permission check failure: %s\n", VAR_2 );
        FUNC_0( VAR_4 );
        return -1;
    }
    if ( FUNC_4( VAR_4, VAR_1, 16 ) < 16 )
    {
        FUNC_2("LSAPI: failed to read secret from secret file: %s\n", VAR_2 );
        FUNC_0( VAR_4 );
        return -1;
    }
    FUNC_0( VAR_4 );
    return 0;
}
