
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mzh ;
struct TYPE_2__ {scalar_t__ e_magic; int e_lfanew; } ;
typedef char* LPSTR ;
typedef TYPE_1__ IMAGE_DOS_HEADER ;
typedef int HFILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3( HFILE VAR_4 )
{
    IMAGE_DOS_HEADER VAR_5;
    char VAR_6[3];

    FUNC_1( VAR_4, 0, VAR_3 );
    if ( sizeof(VAR_5) != FUNC_0( VAR_4, (LPSTR)&VAR_5, sizeof(VAR_5) ) )
        return 0;
    if ( VAR_5.e_magic != VAR_0 )
        return 0;

    FUNC_1( VAR_4, VAR_5.e_lfanew, VAR_3 );
    if ( 2 != FUNC_0( VAR_4, VAR_6, 2 ) )
        return 0;

    FUNC_1( VAR_4, VAR_5.e_lfanew, VAR_3 );

    if ( VAR_6[0] == 'N' && VAR_6[1] == 'E' )
        return VAR_2;
    if ( VAR_6[0] == 'P' && VAR_6[1] == 'E' )
        return VAR_1;

    VAR_6[2] = '\0';
    FUNC_2("Can't handle %s files.\n", VAR_6 );
    return 0;
}
